/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:04:31 by cmiron            #+#    #+#             */
/*   Updated: 2017/04/04 14:04:34 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINI_H
# define FT_MINI_H

# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# include <dirent.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include <errno.h>
# include <pwd.h>
# include <grp.h>
# include <sys/ioctl.h>
# include <sys/types.h>
# include <sys/xattr.h>
# include <sys/types.h>
# include <sys/acl.h>
# include <uuid/uuid.h>
# include "printf/printf.h"
# define BUFFF_SIZE 32
# define EOL '\n'
# define TRUE 1
# define FALSE 0
# define ERROR -1
# define TOK_BUFSIZE 4096
# define BUFF_SIZE 2048
# define DICT_LEN 256

char	*g_env[256];
char	*g_path[64];
int		g_sigint;
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	**ft_strsplit(char const *s, char c);
int		get_next_line(const int fd, char **line);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
char	*ft_strnew(size_t size);
char	*ft_strdup(const char *s);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_strdel(char **as);
void	*ft_memalloc(size_t size);
char	*ft_strcat(char *dest, const char *src);
int		ft_atoi(const char *str);
void	ft_setpath(void);
void	ft_env(void);
int		ft_findenv(char *str);
void	ft_setenv(char **args);
void	ft_delenv(void);
void	ft_cpyenv(char **str);
void	ft_echo(char **str);
void	ft_unsetenv(char *str);
int		ft_verif(char **arg);
void	ft_execute(char **args);
char	ft_charret(char *str);
void	ft_checks(char *str);
void	ft_dupenv(char **env);
void	ft_sigint(void);
int		main(int ac, char **av, char **env);

#endif
