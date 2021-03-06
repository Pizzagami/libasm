#ifndef LIBASM_H

# define LIBASM_H
# include <stddef.h>
# include <sys/types.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
int		    ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
size_t		ft_strlen(const char *s);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);
char		*ft_strdup(const char *s1);

#endif
