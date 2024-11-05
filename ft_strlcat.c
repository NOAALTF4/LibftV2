/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:11:49 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/05 13:50:25 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;
	unsigned int	lengthsrc;
	unsigned int	lengthdest;

	i = 0;
	r = 0;
	lengthdest = ft_strlen(dest);
	lengthsrc = ft_strlen(src);
	r = lengthdest;
	if (size <= r)
		return (lengthsrc + size);
	while (i < size - lengthdest - 1 && src[i] != '\0')
	{
		dest[r] = src[i];
		r++;
		i++;
	}
	dest[r] = '\0';
	return (lengthsrc + lengthdest);
}
/*
int	main(void)
{
	char dest[] = "lundi";
	char src[] = "mardi";
	unsigned int size;
	
	size = 8;
//	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%zu\n", strlcat(dest, src, size));
	printf("%s\n", dest);
}*/
