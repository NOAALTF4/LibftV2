/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:00:30 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/05 14:35:00 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *string, int searchedChar)
{
    int i;

    i = 0;
    while(string[i])
    {
        if(string[i] == searchedChar)
            return((char *)&string[i]);
        i++;
    }
    return(0);
}

int main(void)
{
    printf("%s\n", ft_strchr("lundi", 'u'));
}