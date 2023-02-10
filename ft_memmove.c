/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaido <kdaido@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:56:32 by marvin            #+#    #+#             */
/*   Updated: 2023/02/11 04:19:38 by kdaido           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *buf1=(char *)dst;
	const char *buf2=(const char *)src;
	

	size_t i;
	i=0;
	if(dst==src || n==0)
	return dst;
	if(dst<src)
	{
		while (i<n)
		{
			buf1[i] = buf2[i];
			i++;
		}
		
	}

	else if(src<dst)
	{
		while(i<n--)
			buf1[n]=buf2[n];
	}
	

	return (dst);
}
