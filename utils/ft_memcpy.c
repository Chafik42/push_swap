/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 00:15:08 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/26 16:14:47 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	long unsigned int	i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	src1 = src;
	dest1 = dest;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

int	*ft_intdup(int const *src, size_t len)
{
	int	*p;

	p = NULL;
	p = (int *)malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, src, len * sizeof(int));
	return (p);
}
