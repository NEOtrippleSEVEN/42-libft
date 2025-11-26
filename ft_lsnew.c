/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingmurched <kingmurched@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 00:24:45 by kingmurched       #+#    #+#             */
/*   Updated: 2025/11/26 01:32:40 by kingmurched      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	// creating a variable of type <structure>
	t_list *element;
	element = malloc(sizeof(t_list));
	// Checking checking...
	if (!element)
		return NULL;
	// setting ptrto node
	element->content = content;
	element->next = NULL;

	return (content);
}