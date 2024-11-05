/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:10:18 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/05 15:09:18 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *string, int searchedChar)
{
    int i;
    int position;

    i = 0;
    position = -1;
    while(string[i])
    {
        if(string[i] == searchedChar)
            position = i;
        i++;
    }
    if(position != -1)
        return((char *)&str[position]);
    return(0);
}