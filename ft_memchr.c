/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:44:56 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/05 14:01:15 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void * memchr(const void * memoryBlock, int searchedChar, size_t size)
{
    size_t  i;
    char *block;

    block = (char *)memoryBlock;    
    i = 0;
    while(i < size)
    {
        if(block[i] == searchedChar)
            return(&memoryBlock[i]);
        i++;
    }
    return(0);
}