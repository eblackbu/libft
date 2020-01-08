/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:22:31 by eblackbu          #+#    #+#             */
/*   Updated: 2020/01/08 12:37:32 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int                free_static(t_file **first_file, t_file **current_file)
{
    t_file        *tmp_file;
    
    if (*first_file == *current_file)
    {
        *first_file = (*current_file)->next;
        if ((*current_file)->str)
            free((*current_file)->str);
        free(*current_file);
        return (0);
    }
    tmp_file = *first_file;
    while (tmp_file->next != *current_file)
        tmp_file = tmp_file->next;
    tmp_file->next = (*current_file)->next;
    if ((*current_file)->str)
        free((*current_file)->str);
    free(*current_file);
    return (0);
}

static t_file    *find_file(const int fd, t_file **first_file)
{
    t_file            *current_file;
    
    current_file = *first_file;
    while (current_file)
    {
        if (current_file->fd == fd)
            return (current_file);
        current_file = current_file->next;
    }
    if (!(current_file = (t_file*)malloc(sizeof(t_file))))
        return (NULL);
    current_file->fd = fd;
    current_file->str = ft_strnew(0);
    current_file->next = *first_file;
    *first_file = current_file;
    return (current_file);
}

static char        *ft_strjoin_sp(char **str, char *buf, size_t len)
{
    char            *newstr;
    
    if (!(newstr = ft_strnew(len + ft_strlen(buf) + 1)))
        return (NULL);
    ft_strcpy(newstr, *str);
    ft_strcat(newstr, buf);
    ft_strdel(str);
    *str = ft_strdup(newstr);
    ft_strdel(&newstr);
    return (*str);
}

static char        *write_in_line(char **line, char **fileline)
{
    size_t            i;
    char            *newstr;
    
    i = 0;
    while ((*fileline)[i] != '\n' && (*fileline)[i])
        i++;
    *line = ft_strnew(i);
    ft_strncpy(*line, *fileline, i);
    if (*fileline && ft_strchr(*fileline, '\n'))
        newstr = ft_strdup(ft_strchr(*fileline, '\n') + 1);
    else
        newstr = ft_strnew(0);
    (*line)[i] = '\0';
    ft_strdel(fileline);
    return (newstr);
}

int                get_next_line(const int fd, char **line)
{
    size_t			count_bytes;
    char			buf[BUFF_SIZE + 1];
    static t_file	*first_file;
    t_file			*current_file;
    
    if (fd < 0 || !line || read(fd, buf, 0) < 0)
        return (-1);
    current_file = find_file(fd, &first_file);
    while ((count_bytes = read(fd, buf, BUFF_SIZE)) > 0)
	{
        buf[count_bytes] = '\0';
        current_file->str = ft_strjoin_sp(&current_file->str, \
                                          buf, ft_strlen(current_file->str));
        if (ft_strchr(buf, '\n'))
            break;
    }
    if (!current_file->str || !ft_strlen(current_file->str))
        return (free_static(&first_file, &current_file));
    current_file->str = write_in_line(line, &current_file->str);
    return (1);
}
