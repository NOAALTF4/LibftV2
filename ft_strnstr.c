/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:16:57 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/05 15:20:10 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char 	*ft_strnstr (const char *str, const char *to_find, size_t len)
{
    size_t i;
    size_t j;
    int p;

    i = 0;
    j = 0;
    p = 0;
    if(ft_strlen(to_find) > ft_strlen(str))
        return(NULL);
    while(str[i] && i < len)
    {
        if(j == 0)
            p = i;
        if(str[i] == to_find[j])
        {
            if(to_find[j + 1] == '\0')
                return((char *)&str[p]);
            j++;
        }
        else
            j = 0;
        i++;
    }
    return(NULL);
}

int main(void)
{
    printf("%s", ft_strnstr("ardiggsgsgs", "ar", 4));
}