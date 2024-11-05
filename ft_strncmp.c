/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:21:41 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/05 13:44:39 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int strncmp(const char *first, char * second, size_t length)
{
    size_t i;

    i = 0;
    while ((first[i] && second[i])
        && (i < length))
    {
        if (first[i] != second[i])
            return (first[i] - second[i]);
        i++;
    }
    return (first[i] - second[i]);
}