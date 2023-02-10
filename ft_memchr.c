/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaido <kdaido@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:54:11 by marvin            #+#    #+#             */
/*   Updated: 2023/02/11 04:19:28 by kdaido           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *buf, int ch, size_t n)
{
    int *a;
    void *b;
    b=(void*)buf;
    while(n-->0)
    {
        a= (int*)b;
        if(*a==ch)
        return b;
        a++;
        // b++;
    }
 return b;
}
