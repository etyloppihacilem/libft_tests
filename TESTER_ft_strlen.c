/*
TEST FILE FOR ft_strlen.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES:

#include <stdio.h> // do not remove please

int ft_strlen(char *str);


// Autogenerated test function for ft_strlen
int	T_ft_strlen(void)
{
	if (ft_strlen("coucou je suis heureux") == 22 && ft_strlen("") == 0)
		return (0);		// the test passes
	return (1);			// the test does not, display error code
}
