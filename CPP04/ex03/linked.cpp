

#include "linked.hpp"



t_data	*ft_lstnew(AMateria *content)
{

	t_data	*new_node;
	if(!content)
		return NULL;
	new_node = new t_data; 
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}


t_data	*ft_lstlast(t_data *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}


void	ft_lstadd_back(t_data **lst, t_data *newLIst)
{
	t_data	*last_node;

	if (!lst || !newLIst)
		return ;
	if (!(*lst))
	{
		*lst = newLIst;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = newLIst;
}






