/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:13:41 by hkrifa            #+#    #+#             */
/*   Updated: 2021/09/20 16:34:09 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	i;
	size_t	max;

	max = nmemb * size;
	tab = malloc(max);
	if (!tab)
		return (NULL);
	i = 0;
	while (max--)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *)tab);
}
