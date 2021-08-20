/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 22:24:15 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/26 22:27:23 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct			s_btree
{
		struct s_btree	*left;
		struct s_btree	*right;
		void			*item;
}						t_btree;

t_btree					*btree_create_node(void *item);

#endif
