/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:52:03 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/30 20:52:06 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin(char c, char const *s)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*s;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (s1[i] && isin(s1[i], set))
		i++;
	while (len && isin(s1[len - 1], set))
	{
		j++;
		len--;
	}
	len = ft_strlen(s1);
	if (len > i + j)
		len -= i + j;
	else
		len = 0;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	j = 0;
	while (j < len && len > 1)
	{
		s[j] = s1[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}
