/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajrhou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 21:57:55 by ayajrhou          #+#    #+#             */
/*   Updated: 2019/10/31 22:14:02 by ayajrhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# define MAX_INT 2147483647

int		get_next_line(int fd, char **line);
int		ft_strdel(char **tmp, char **str, int num, int ret);
int		ft_isnewline(char *buff);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
int		ft_backslash(char ***line, char **str, char **buff, int i);
int		ft_str(char ***line, char **str, char **buff);
int		ft_read(char ***line, char **buff, char **str, int fd);
char	*ft_stock(char *line, char *buff, int i);
int		ft_strlen(char *str);

#endif
