/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <yel-yaqi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:44:54 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/11/19 16:21:18 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		alrdy_adjsted;
	char	*needle_beg;

	if (!haystack && needle && len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		alrdy_adjsted = 0;
		i = 0;
		needle_beg = (char *)haystack;
		while (*haystack == *(needle + i) && len)
		{
			if (*(needle + i + 1) == '\0')
				return (needle_beg);
			i++;
			len--;
			alrdy_adjsted = 1;
			haystack++;
		}
		if (!alrdy_adjsted)
		{
			len--;
			haystack++;
		}
	}
	return (NULL);
}

int	main(void)
{
	printf("%s", strnstr("hey", "y", -255));
}