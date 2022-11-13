/*
TEST FILE FOR ft_memmove.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES:

#include <stdio.h> // do not remove please
#include <string.h>

void *ft_memmove(void *dest, void *src, unsigned int n);


// Autogenerated test function for ft_memmove
int	T_ft_memmove(void)
{
	char	a[10] = {1, 1, 1, 1, 1, 0, 0, 2, 2, 2};
	char	b[10] = {1, 1, 1, 1, 1, 1, 1, 0, 2, 2};
	char	c[10];

	ft_memmove(a + 2, a, 6);
	if (memcmp(a, b, 10) != 0)
		return (1);
	if (memcmp(ft_memmove(a, b, 10), memmove(c, b, 10), 10) != 0)
		return (2);
	return (0);
}
