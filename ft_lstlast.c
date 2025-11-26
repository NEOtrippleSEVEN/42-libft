/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingmurched <kingmurched@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 01:27:11 by kingmurched       #+#    #+#             */
/*   Updated: 2025/11/26 01:31:59 by kingmurched      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *temp;

	while (!temp)
		return NULL;
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}