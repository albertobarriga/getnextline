#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main ()
{
	int	fd;
	char *str;
	fd = open("prueba.txt", O_RDONLY);
	str = get_next_line(fd);
	/* printf("%s", str); */
	free(str);
	str = get_next_line(fd);
	/* printf("%s", str); */
	free(str);
	/* printf("%s", get_next_line(fd)); */
	/* printf("%s", get_next_line(fd)); */


	/* printf("hola"); */
	close(fd);
	return (0);
}
