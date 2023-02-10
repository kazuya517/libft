/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaido <kdaido@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:54:37 by marvin            #+#    #+#             */
/*   Updated: 2023/02/11 04:20:24 by kdaido           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s, const char *find, size_t len)
{
    char *f=(char*) find;
    
    while(len-->0)
    {
        while((*s==*find)&&(*find!='\0'))
        {
            find++;
            s++;
        }
        if(*find=='\0')
        return (f);
        
        s++;
        find=f;
    }
    return ("\0");
}
