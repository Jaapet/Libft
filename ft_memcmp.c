/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:29:17 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/29 01:29:17 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (*(unsigned char *)(s1 + i) && i < n)
    {
        if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
            return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
        i++;
    }
    return (0);
}