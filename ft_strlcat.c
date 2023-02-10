/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaido <kdaido@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:56:44 by marvin            #+#    #+#             */
/*   Updated: 2023/02/11 05:47:51 by kdaido           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen;
    size_t srclen;
    
    if(!dst && src && size==0)
    return(ft_strlen(src));

    dstlen=ft_strlen(dst);
    srclen=ft_strlen(src);

    
}
