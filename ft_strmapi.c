/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkolani <bkolani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:50:03 by bkolani           #+#    #+#             */
/*   Updated: 2024/10/27 20:46:19 by bkolani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	new_str = (char *)malloc(s_len + 1);
	if (!new_str)
		return (NULL);
	while (i < s_len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
