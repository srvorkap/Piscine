/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 03:19:55 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/26 03:26:18 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
		if (root->left)
				btree_apply_infix(root->left, applyf);
		applyf(root->item);
		if (root->right)
				btree_apply_infix(root->right, applyf);
}
