/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:32:44 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/30 18:24:55 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	if (start + len < ft_strlen(s))
		a = malloc(sizeof(char) * (len + 1));
	else if (start < ft_strlen(s))
		a = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		a = malloc(sizeof(char));
	if (!a)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (i < len && s[start + i])
		{
			a[i] = s[start + i];
			i++;
		}
	}
	a[i] = '\0';
	return (a);
}
