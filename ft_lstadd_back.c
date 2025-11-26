/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingmurched <kingmurched@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 01:34:37 by kingmurched       #+#    #+#             */
/*   Updated: 2025/11/26 01:37:57 by kingmurched      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_isadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = ft_islast(*lst);
	if (!temp)
		*lst = new;
	temp->next = new;
}