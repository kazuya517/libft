/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaido <kdaido@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:54:26 by marvin            #+#    #+#             */
/*   Updated: 2023/02/11 04:19:48 by kdaido           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *dst, int val, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dst;
	while (len-- > 0)
	{
		*ptr = (unsigned char)val;
		ptr++;
	}
	return (dst);
}
