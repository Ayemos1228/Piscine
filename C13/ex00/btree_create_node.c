/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:06:56 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/07 00:11:44 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = (t_btree *)malloc(sizeof(t_btree));
	if(node)
	{
		node->item = item;
		node->left = 0;
		node->right = 0;
	}
	return (node);
}
