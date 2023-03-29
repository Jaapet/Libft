/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:44:48 by ndesprez          #+#    #+#             */
/*   Updated: 2023/03/29 01:44:48 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  i;

    if (!*needle)
        return ((char*)haystack);
    while (*haystack && n - ft_strlen(needle) > 0)
    {
        i = 0;
        while (needle[i] && *haystack + i == needle[i])
        {
            if (!needle[i + 1])
                return ((char *)haystack);
            i++;
        }
        haystack++;
        n--;
    }
    return (NULL);
}