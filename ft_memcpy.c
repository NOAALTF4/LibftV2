/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:23:54 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/04 14:40:18 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *srcc;
    const   unsigned char *destt;

    srcc = (void)src;
    destt = (void)dest;
    
    while(i < n)
    {
        destt[i] = srcc[i];
        i++;
    }
    return(dest);
}