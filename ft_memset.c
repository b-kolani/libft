/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkolani <bkolani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:30:56 by bkolani           #+#    #+#             */
/*   Updated: 2024/11/22 17:14:18 by bkolani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (len--)
		*ptr++ = value;
	return (b);
}
#include "stdio.h"
int main() {
    int d = 2005;  // Valeur initiale de d
    int s = 1337;  // Valeur à assigner à d
	int i = 0;
	
    printf("--Before--%d\n", d);  // Affiche la valeur de d avant modification

    unsigned char *p = (unsigned char *)&d;
    unsigned char *q = (unsigned char *)&s;
	while(i < sizeof(int))
	{
		ft_memset(p + i, q[i], 1);
		i++;
	}
    printf("--After--%d\n", d);  // Affiche la valeur de d après modification
    return 0;
}