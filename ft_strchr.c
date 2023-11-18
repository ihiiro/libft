/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <yel-yaqi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:11:10 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/11/18 19:54:25 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

int	main(void)
{
	char	*str = "teste";

	
	printf("%d\n", ft_strchr(str, 1024) == strchr(str, 1024));
	printf("%p\n", ft_strchr(str, 256));
	printf("%p", strchr(str, 256));
}

/*

100 0000 0000

*/