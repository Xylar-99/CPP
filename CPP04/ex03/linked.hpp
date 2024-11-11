

#ifndef LINKED_HPP
#define LINKED_HPP

#include <iostream>
#include "Amateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

typedef struct s_data
{
    void *content;
    struct s_data *next ;
    
} t_data;



t_data	*ft_lstlast(t_data *lst);
t_data	*ft_lstnew(void *content);
void	ft_lstadd_back(t_data **lst, t_data *newLIst);

#endif