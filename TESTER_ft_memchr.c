/*
TEST FILE FOR ft_memchr.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES:

#include <stdio.h> // do not remove please

void	*ft_memchr(const void *s, int c, unsigned int n);


// Autogenerated test function for ft_memchr
int	T_ft_memchr(void)
{
	char	a[] = "coucou je suis heureux";
	char	b[5] = {0, 0, 0, 0, 0};
	if (ft_memchr(a, 'c', 22) != a + 0)
		return (1);
	if (ft_memchr(a, 'j', 7) != 0)
		return (2);
	if (ft_memchr(a, '3', 22) != 0)
		return (3);
	if (ft_memchr(a, 'c', 0) != 0)
		return (4);
	if (ft_memchr(b, 'c', 5) != 0)
		return (5);
	if (ft_memchr(a, '\0', 22) != 0)
		return (6);
	b[2] = 2;
	if (ft_memchr(b, 2 + 256, 5) != b + 2)
		return (7);
	return (0);
}
