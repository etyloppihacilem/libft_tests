/*
TEST FILE FOR ft_strnstr.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES:

#include <stdio.h> // do not remove please
#include <string.h>

char *ft_strnstr(char *big, char *little, unsigned int len);


// Autogenerated test function for ft_strnstr
int	T_ft_strnstr(void)
{
	char a[] = "aaaabcbcabcd";
	char b[13];
	bzero(b, 13);
	if (ft_strnstr(a, "ab", 12) != a + 3)
		return (1);
	if (ft_strnstr(a, "ab", 2) != 0)
		return (2);
	if (ft_strnstr(a, "bca", 12) != a + 6)
		return (3);
	if (ft_strnstr(a, "", 12) != a)
		return (4);
	if (ft_strnstr(b, "", 12) != b)
		return (5);
	if (ft_strnstr(b, "c", 12) != 0)
		return (6);
	if (ft_strnstr(b, "c", 0) != 0)
		return (7);
	if (ft_strnstr(b, "", -1) != b)
		return (8);
	if (ft_strnstr(a, "abcd", 12) != a + 8)
		return (9);
	if (ft_strnstr(a, "abcdef", 12) != 0)
		return (10);
	return (0);
}
