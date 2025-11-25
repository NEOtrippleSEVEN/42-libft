/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurched <kmurched@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:33:38 by kmurched          #+#    #+#             */
/*   Updated: 2025/11/22 20:35:09 by kmurched         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned int	cc;
	size_t			i;

	i = 0;
	ss = (unsigned char *)s;
	cc = (unsigned int )c;
	while (i < n)
	{
		if (ss[i] == cc)
		{
			return ((void *)&ss[i]);
		}
		i++;
	}
	return (NULL);
}
