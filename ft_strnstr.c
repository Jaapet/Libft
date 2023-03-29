/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:44:48 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/29 18:37:38 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!*needle)
		return ((char *)&haystack[0]);
	if (n == 0)
		return (NULL);
	i = 0;
	while ((i < n) && haystack[i])
	{
		j = i;
		k = 0;
		while ((haystack[j] == needle[k]) && (j < n))
		{
			j++;
			k++;
			if (!needle[k])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
