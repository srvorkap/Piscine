/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 03:05:59 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/26 03:11:08 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
		t_btree *node;

		if (!(node = malloc(sizeof(node))))
			return (NULL);
		node->item = item;
		node->left = 0;
		node->right = 0;
		return (node);
}
