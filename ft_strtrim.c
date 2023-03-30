/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:52:03 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/30 19:20:19 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin(char c, char const *s)
{
	while (s)
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
	len = ft_strlen(s1);
	while (len > 0 && isin(s1[len - 1], set))
		len--;
	while (s1[i] && isin(s1[i], set) && len)
		i++;
	if (len)
		len -= i;
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
