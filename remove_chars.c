/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_chars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <yel-yaqi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:09:30 by yel-yaqi          #+#    #+#             */
/*   Updated: 2024/08/06 09:10:30 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*alloc_bracket(char *str, char *pattern,
	size_t patlen, size_t blade_reach)
{
	char	*bracket;
	size_t	bracket_len;
	size_t	i;

	bracket_len = 0;
	i = 0;
	while (str[i] && i < blade_reach)
		i++;
	while (str[i + bracket_len]
		&& ft_strncmp(&str[i + bracket_len], pattern, patlen))
		bracket_len++;
	if (!bracket_len)
		return (NULL);
	bracket = ft_substr(str, i, bracket_len);
	return (bracket);
}

char	*init_new_str(char *str, char *pattern, size_t patlen)
{
	size_t	len;
	char	*new_str;

	len = 0;
	while (str[len] && ft_strncmp(&str[len], pattern, patlen))
		len++;
	if (!len)
		return (NULL);
	new_str = ft_substr(str, 0, len);
	return (new_str);
}

char	*remove_chars(char *str, char *pattern, size_t blade_reach)
{
	char	*new_str;
	size_t	i;
	size_t	patlen;

	if (!pattern || !str || !*str || !*pattern || !blade_reach)
		return (NULL);
	patlen = ft_strlen(pattern);
	new_str = init_new_str(str, pattern, patlen);
	while (*str)
	{
		i = 0;
		if (!ft_strncmp(str, pattern, patlen))
			new_str = ft_strjoin(new_str,
					alloc_bracket(str, pattern, patlen, blade_reach));
		str++;
	}
	return (new_str);
}
