/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkolani <bkolani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:49:29 by bkolani           #+#    #+#             */
/*   Updated: 2024/10/27 20:46:42 by bkolani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;
	size_t	cpy_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		cpy_len = s_len - start;
	else
		cpy_len = len;
	sub_str = (char *)malloc(cpy_len + 1);
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, cpy_len + 1);
	return (sub_str);
}
