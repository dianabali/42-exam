// #include <stdio.h>
// #include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;
	int		swap;

	if (!lst)
		return (NULL);

	tmp = lst;
	while (tmp->next)
	{
		if (!cmp(tmp->data, tmp->next->data))
		{
			swap = tmp->data;
			tmp->data = tmp->next->data;
			tmp->next->data = swap;
			tmp = lst;
		}
		else
			tmp = tmp->next;
	}
	return (lst);
}

/* int	ascending(int a, int b)
{
	return (a <= b);
}

int	descending(int a, int b)
{
	return (a >= b);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

t_list	*new_node(int value)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->data = value;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	t_list	*lst;

	lst = new_node(5);
	lst->next = new_node(2);
	lst->next->next = new_node(8);
	lst->next->next->next = new_node(2);
	lst->next->next->next->next = new_node(-1);

	printf("before: ");
	print_list(lst);

	lst = sort_list(lst, ascending);

	printf("ascending: ");
	print_list(lst);

	lst = sort_list(lst, descending);

	printf("descending: ");
	print_list(lst);

	return (0);
} */
