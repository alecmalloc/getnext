/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeastman <aeastman@student.42.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:18:09 by aeastman          #+#    #+#             */
/*   Updated: 2023/06/17 13:34:46 by aeastman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000

# endif

size_t	gnl_strlen(char *str);
char	*gnl_strchr(char *s, int c);
char	*get_next_line(int fd);
char	*ft_get_line(char *str);
char	*ft_save(char *save);
char	*ft_read_and_save(int fd, char *save);
char	*gnl_strjoin(char *s1, char *s2);

#endif
