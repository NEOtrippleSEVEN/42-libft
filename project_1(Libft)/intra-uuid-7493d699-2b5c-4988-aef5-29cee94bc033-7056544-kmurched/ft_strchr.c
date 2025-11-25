/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurched <kmurched@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:44:48 by kmurched          #+#    #+#             */
/*   Updated: 2025/11/25 17:34:00 by kmurched         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char cc;

	cc = (char)c;
	i = 0;
	while (*s)
	{
		if (*s == cc)
			return ((char *)&s[i]);
		s++;
	}
	if(cc != '\0')
		return((char *)s);
	return (NULL);
}
