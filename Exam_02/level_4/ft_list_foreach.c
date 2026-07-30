#include "ft_list.h"
#include <stdio.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

/* void	print_data(void *data)
{
	printf("%s\n", (char *)data);
}

int	main(void)
{
	t_list	n3;
	t_list	n2;
	t_list	n1;

	n1.data = "hello";
	n1.next = &n2;

	n2.data = "42";
	n2.next = &n3;

	n3.data = "exam";
	n3.next = NULL;

	ft_list_foreach(&n1, print_data);

	return (0);
} */
