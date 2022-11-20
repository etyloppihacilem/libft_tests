/*
TEST FILE FOR ft_lstadd_back_bonus.c
Generated with the test_generator utility
*/

// Write your dependencies after the :
// do not uncomment
//DEPENDENCIES: libft.a

#include <stdio.h> // do not remove please
#include "../libft.h"

void ft_lstadd_back(t_list **lst, t_list *new);


// Autogenerated test function for ft_lstadd_back
int	T_ft_lstadd_back(void)
{
	t_list	*o;
	t_list	*a;
	t_list	*b;
	int	i = 1;
	int	j = 2;
	a = ft_lstnew(&i);
	b = ft_lstnew(&j);
	o = 0;

	ft_lstadd_back(&o, a);
	ft_lstadd_back(&o, b);
	if (*((int*)o->content) != 1)
		return (1);
	if (*((int*)(o->next)->content) != 2)
		return (2);
	ft_lstadd_back(NULL, b);
	ft_lstadd_back(&o, NULL);
	ft_lstadd_back(NULL, NULL);
	return (0);
}
