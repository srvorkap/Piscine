/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:09:14 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/17 15:52:31 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(dest = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	else
	{
		while (i >= 0)
		{
			dest[i] = src[i];
			i--;
		}
		return (dest);
	}
}
