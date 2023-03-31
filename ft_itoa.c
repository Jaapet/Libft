/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:01:10 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/31 12:17:05 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_size(int n)
{
	unsigned int	size;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	size = 0;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

void	cat_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	str[i] = c;
	str[i + 1] = '\0';
}

void	fill(char *str, int n)
{
	if (n < 0)
	{
		cat_char(str, '-');
		n = -1 * n;
	}
	if (n > 9)
	{
		fill(str, n / 10);
		cat_char(str, n % 10 + 48);
	}
	else
	{
		cat_char(str, n + 48);
	}
}

char	*ft_itoa(int n)
{
	unsigned int	size;
	char			*str;

	size = get_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	*str = '\0';
	if (n == -2147483648)
		ft_strlcat(str, "-2147483648", 12);
	else
		fill(str, n);
	return (str);
}
