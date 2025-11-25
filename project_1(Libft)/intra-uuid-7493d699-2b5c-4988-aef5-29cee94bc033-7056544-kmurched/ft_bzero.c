/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurched <kmurched@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:30:22 by kmurched          #+#    #+#             */
/*   Updated: 2025/11/21 19:05:41 by kmurched         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_bezero(void *s, size_t n)
{
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *)s;
	while (n > 0)
	{
		*(temp_ptr++) = 0;
		n--;
	}
}
