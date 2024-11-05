/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:19:03 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/05 13:19:12 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				s_src;

	s_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (s_src);
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (s_src);
}

/*
int	main(void)
{
	char src[] = "test";
	char dest[] = "tttt";

	printf("%d\n", ft_strlcpy(dest, src, 3));
//	printf("%zu\n", strlcpy(dest, src, 3));
	printf("%s\n", dest);
	printf("%s\n", dest);
}*/
