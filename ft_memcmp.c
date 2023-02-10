/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaido <kdaido@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:56:05 by marvin            #+#    #+#             */
/*   Updated: 2023/02/11 04:19:31 by kdaido           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	char *s1 =(char *)buf1;
	char *s2 =(char *)buf2;
	
	if(*s1+n>*s2+n)
		return -1;
	
	else if(*s1+n==*s2+n)
	return 0;
	
	else
	return 1;
}
