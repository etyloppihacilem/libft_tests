/*
TEST FILE FOR ft_strlcpy.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES: libft.a

#include <stdio.h> // do not remove please
#include <string.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);


// Autogenerated test function for ft_strlcpy
int	T_ft_strlcpy(void)
{
	char	a[23] = "coucou je suis heureux";
	char	b[23];
	int	i;

	bzero(b, 23);
	i = ft_strlcpy(b, a, 7);
	if (memcmp(b, "coucou", 7) != 0 && i == 22)
		return (1);
	bzero(b, 23);
	i = ft_strlcpy(b, a, 23);
	if (memcmp(b, "coucou je suis heureux", 23) != 0 && i == 22)
		return (2);
	bzero(b, 23);
	i = ft_strlcpy(b, a, 0);
	if (memcmp(b, "\0\0\0", 3) != 0 && i == 22)
		return (2);
	return (0);
}
