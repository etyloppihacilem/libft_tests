/*
TEST FILE FOR ft_substr.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES: libft.a

#include <stdio.h> // do not remove please
#include <string.h>

char *ft_substr(const char *s, unsigned int start, unsigned int len);


// Autogenerated test function for ft_substr
int	T_ft_substr(void)
{
	if (memcmp("je suis heureux", ft_substr("coucou je suis heureux", 7, 22), 15) != 0)
		return(1);
	if (memcmp("je", ft_substr("coucou je suis heureux", 7, 2), 2) != 0)
		return(2);
	if (memcmp("je suis heureux", ft_substr("c0ucou je suis heureux", 7, 22), 15) != 0)
		return(3);
	if (memcmp("coucou je suis heureux", ft_substr("coucou je suis heureux", 0, 22), 2) != 0)
		return (4);
	if (memcmp("", ft_substr("coucou je suis heureux", 100, 1), 1) != 0)
		return (5);
	if (memcmp("", ft_substr("coucou je suis heureux", 0, 0), 1) != 0)
		return (6);
	if (memcmp("", ft_substr("coucou je suis heureux", 20, 0), 1) != 0)
		return (6);
	return (0);
}
