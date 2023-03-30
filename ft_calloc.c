/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:56:37 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/30 12:23:49 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*a;
	size_t	i;

	a = malloc(size * nmemb);
	if (!a)
		return (0);
	i = 0;
	while (i < nmemb * size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
