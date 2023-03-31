/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:52:03 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/31 14:45:50 by ndesprez         ###   ########.fr       */
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

static size_t	beg(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (isin(s1[i], set))
		i++;
	return (i);
}

static size_t	end(char const *s1, char const *set)
{
	int	i;

	if (ft_strlen(s1))
		i = ft_strlen(s1) - 1;
	else
		i = 0;
	while (isin(s1[i], set) && i >= 0)
		i--;
	if (i < 0)
		i = 0;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*s;

	i = beg(s1, set);
	j = end(s1, set);
	if (j >= i && j)
		len = j - i + 1;
	else
		len = 0;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	j = 0;
	while (j < len && len)
	{
		s[j] = s1[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}
