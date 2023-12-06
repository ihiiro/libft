/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <yel-yaqi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:38:18 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/12/06 11:49:17 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		size;
	size_t	substr_len;
	int		i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	substr_len = ft_strlen(s + start);
	if (substr_len < len)
		len = substr_len;
	size = sizeof(char) * (len + 1);
	substr = (char *)malloc(size);
	if (!substr)
		return (0);
	i = 0;
	while (s[start] && i < size - 1)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
