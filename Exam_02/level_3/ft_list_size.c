#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	t_list *node;
	int i;

	node = begin_list;
	i = 0;
	while(node)
	{
		i++;
		node = node->next;
	}
	return (i);
}

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	printf("List size: %d\n", ft_list_size(&a));

	printf("empty list size: %d\n", ft_list_size(NULL));

	return (0);
}