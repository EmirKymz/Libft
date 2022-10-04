/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:02:32 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/02/12 17:10:35 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main()
{
	int i = open("emir.txt", O_WRONLY);
	int	a = open("42.txt", O_WRONLY);
	ft_putchar_fd('M', i);
	ft_putchar_fd('E', a);
}*/
