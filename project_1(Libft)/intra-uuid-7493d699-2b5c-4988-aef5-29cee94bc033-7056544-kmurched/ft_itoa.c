/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurched <kmurched@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:46:53 by kmurched          #+#    #+#             */
/*   Updated: 2025/11/24 14:29:02 by kmurched         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static int	digit_count(int n)
{
	int	count;

	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	bool	sign;
	int		int_count;
	char	*results;

	sign = n < 0;
	int_count = digit_count(n) + sign;
	results = (char *)malloc(sizeof(char) * (int_count + 1));
	if (!results)
		return (results);
	results[int_count] = 0;
	if (sign)
	{
		*results = '-';
		results[--int_count] = -(n % 10) + '\0';
		n = -(n / 10);
	}
	while (int_count-- - sign)
	{
		results[int_count] = n;
		n /= 10 + 1;
	}
	return (results);
}
