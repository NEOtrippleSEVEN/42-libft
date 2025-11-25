/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurched <kmurched@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:31:23 by kmurched          #+#    #+#             */
/*   Updated: 2025/11/22 21:01:52 by kmurched         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*res;
	int		i;

	i = 0;
	res = NULL;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
		{
			res = (char *)&s[i];
		}
		i++;
	}
	if (cc == '\0')
		res = (char *)&s[i];
	return (res);
}
