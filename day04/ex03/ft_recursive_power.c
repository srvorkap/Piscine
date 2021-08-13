/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:48:41 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/13 18:44:58 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		x;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0 && power % 2 == 0)
	{
		x = ft_recursive_power(nb, power / 2);
		return (x * x);
	}
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
