/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurched <kmurched@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:25:58 by kmurched          #+#    #+#             */
/*   Updated: 2025/11/24 16:30:25 by kmurched         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*results;
	size_t			len;

	results = malloc((ft_strlen(s) + 1) * (sizeof(char)));
	if (!results)
		return (results);
	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		results[i] = f(i, s[i]);
		i++;
	}
	results[i] = 0;
	return (NULL);
}
