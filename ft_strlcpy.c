/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaido <kdaido@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:56:52 by marvin            #+#    #+#             */
/*   Updated: 2023/02/11 04:32:58 by kdaido           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i=0;
	if(size!=0)
	{
		while(i<size-1 && src[i]!='\0')
		{
			dst[i]=src[i];
			i++;
		}
		
		dst[i]='\0';
	}
	return (ft_strlen(src));
}
