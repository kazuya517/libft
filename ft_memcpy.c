/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaido <kdaido@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:56:14 by marvin            #+#    #+#             */
/*   Updated: 2023/02/11 04:19:34 by kdaido           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char *s1 =(char *)buf1;
	char *s2 =(char *)buf2;

	while(n--)
		*s1++ = *s2++;
	
	return buf1;
	
}
