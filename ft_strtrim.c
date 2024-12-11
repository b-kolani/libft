/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkolani <bkolani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:36:48 by bkolani           #+#    #+#             */
/*   Updated: 2024/10/28 10:46:54 by bkolani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_in_set(char const *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		trimmed_len;
	char		*trimmed;
	const char	*end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && is_in_set(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = s1 + ft_strlen(s1);
	while (*s1 && is_in_set(set, *(end - 1)))
		end--;
	trimmed_len = end - s1;
	if (trimmed_len == 0)
		return (ft_strdup(""));
	trimmed = (char *)malloc(trimmed_len + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, trimmed_len + 1);
	return (trimmed);
}
