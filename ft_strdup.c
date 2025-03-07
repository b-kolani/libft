/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkolani <bkolani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:52:54 by bkolani           #+#    #+#             */
/*   Updated: 2024/10/27 23:30:33 by bkolani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	s_len;

	s_len = ft_strlen(s);
	cpy = (char *)malloc(s_len + 1);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, s_len + 1);
	return (cpy);
}
