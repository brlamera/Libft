#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	int		i;
	char	bs;

	if (fd < 1)
		return ;
	i = 0;
	bs = '\n';
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &bs, 1);
}