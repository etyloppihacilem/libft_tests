/*
TEST FILE FOR ft_memcmp.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES:

#include <stdio.h> // do not remove please

int ft_memcmp(const void *s1, const void *s2, unsigned int n);


// Autogenerated test function for ft_memcmp
int	T_ft_memcmp(void)
{
	if (ft_memcmp("aaa", "aab", 3) != -1)
		return (1);
	if (ft_memcmp("aaa", "aaa", 0) != 0)
		return (2);
	if (ft_memcmp("aaa", "aaa", 3) != 0)
		return (3);
	if (ft_memcmp("aaa", "aab", 2) != 0)
		return (4);
	return (0);
}
