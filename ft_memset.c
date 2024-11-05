/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:09:54 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/04 14:42:46 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset (void *s, int c, size_t n)
{
    size_t i;
    char *temp;

    i = 0;
    temp = (char *)s;
    while(i <= n)
    {
        temp[i] = c;
        i++;
    }
    return(s);
}