#include <fcntl.h>

int main (void)
{
	int	fd;
d}

char	*ft_read(int fd, char *str)
{
	char 	*buf;
	ssize_t	var;
	
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	var = 1;
	while (var != 0 && !ft_strchr(str, '\n'))
	{
		var = read(fd, buf, BUFFER_SIZE);
		if (var == -1)
		{
			free (buf);
			return (NULL);
		}
		srt[var] = '\0';
		str = ft_strjoin(str, buf);
	}
	return (str);
}

char	*get_next_line(int fd)
{

	static char *str;

	if (fd < 0 || BUFFER_SIZE  <= 0)
		return (NULL);
	str = ft_read(fd, str);


}
