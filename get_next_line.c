#include "get_next_line.h"

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
		buf[var] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*get_next_line(int fd)
{

	static char *str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE  <= 0)
		return (NULL);
	str = ft_read(fd, str);
	if (!str)
		return (NULL);
	line = ft_line(str);
	str = ft_str(str, line);
	return (line);
}
