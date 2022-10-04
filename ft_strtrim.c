/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:10:18 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/02/12 15:47:42 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		end;
	int		start;
	int		i;

	i = 0;
	start = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[i] && checker(s1[i], set))
		i++;
	while (end > i && checker(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - i + 1));
	if (!str)
		return (NULL);
	while (i < end)
		str[start++] = s1[i++];
	str[start] = '\0';
	return (str);
}
