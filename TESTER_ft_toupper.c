/*
TEST FILE FOR ft_toupper.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES:

#include <stdio.h> // do not remove please

int ft_toupper(int c);


// Autogenerated test function for ft_toupper
int	T_ft_toupper(void)
{
	if (ft_toupper('A') == 'A'
		&& ft_toupper('a') == 'A'
		&& ft_toupper('1') == '1')
		return (0);		// the test passes
	return (1);			// the test does not, display error code
}
