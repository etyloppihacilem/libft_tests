/*
TEST FILE FOR ft_putnbr_fd.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES:libft.a

#include <stdio.h> // do not remove please
#include <unistd.h>
#include <fcntl.h>

void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);


// Autogenerated test function for ft_putnbr_fd
int	T_ft_putnbr_fd(void)
{
	int	f;

	f = open("./test_gen/TEMP_out.txt", O_WRONLY + O_CREAT);
	if (f == -1)
		return (1);
	ft_putnbr_fd(42, f);
	ft_putstr_fd("_", f);
	ft_putnbr_fd(-42, f);
	ft_putstr_fd("_", f);
	ft_putnbr_fd(2147483647, f);
	ft_putstr_fd("_", f);
	ft_putnbr_fd(-2147483648, f);
	if (close(f) != 0)
		return (2);
	return (0);		// the test passes
}
