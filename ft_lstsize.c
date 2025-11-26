/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingmurched <kingmurched@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 01:20:31 by kingmurched       #+#    #+#             */
/*   Updated: 2025/11/26 01:32:28 by kingmurched      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstsiye(t_list *lst)
{
	// to not modify the existing list use temp
	t_list *temp;
	int i;

	i = 0;
	while (temp != '\0')
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
