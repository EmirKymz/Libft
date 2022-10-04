/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:00:56 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/02/17 12:22:32 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void ft_del(void *as)
{
	ft_bzero(as, ft_strlen(as));
}

int	main()
{
	t_list	*a;
	char	b[] = "NUSRET";

	a = ft_lstnew(b);
	printf("%s", a -> content);
	ft_lstdelone(a, ft_del);
	printf("\n*%s*",a -> content);
}*/
