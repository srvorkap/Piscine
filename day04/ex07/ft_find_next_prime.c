/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:34:30 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/13 13:42:16 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (nb % i != 0 && i <= nb)
		i++;
	if (nb == i)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		++nb;
	}
}
