/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:32:08 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/13 20:35:24 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_endrow(int x);

void	print_midrow(int x);

void	rush(int x, int y)
{
	int		l;
	int		w;
	int		row;

	w = 1;
	l = 1;
	row = 0;
	if (x == 0 || y == 0)
	{
		return ;
	}
	while (++row <= y)
	{
		if (row == 1 || row == y)
		{
			print_endrow(x);
		}
		else
		{
			print_midrow(x);
		}
		ft_putchar('\n');
	}
}

void	print_endrow(int x)
{
	int		count;

	count = 0;
	while (++count <= x)
	{
		if (count == 1 || count == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
}

void	print_midrow(int x)
{
	int		count;

	count = 0;
	while (++count <= x)
	{
		if (count == 1 || count == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}
