/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:18:09 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/18 12:45:13 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	if (!(range = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	else
	{
		while (max >= min)
		{
			range[max - min - 1] = max - 1;
			max--;
		}
		return (range);
	}
}
