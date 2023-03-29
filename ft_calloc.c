/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:56:37 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/29 22:56:37 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    char *a;

    a = malloc(size * nmemb);
    if (!a)
        return (NULL);
    while (size)
    {
        size--;
        *(a + size) = 0;
    }
    return (a);
}