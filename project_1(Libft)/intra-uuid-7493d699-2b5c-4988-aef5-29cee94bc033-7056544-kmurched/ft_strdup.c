/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurched <kmurched@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:17:36 by kmurched          #+#    #+#             */
/*   Updated: 2025/11/22 19:41:42 by kmurched         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*destination;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	destination = malloc(strlen(s1) + 1);
	if (destination == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		destination[i] = s1[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}
