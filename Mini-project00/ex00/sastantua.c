/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:25:42 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/13 19:41:13 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		count_char_on_endline(int size)
{
	int		char_count;
	int		char_add;
	int		floor_count;
	int		lines;

	char_count = -3;
	char_add = 2;
	floor_count = 0;
	lines = 3;
	while (floor_count < size)
	{
		if (floor_count % 2 == 1)
			char_count += (char_add += 2);
		else
			char_count += char_add;
		char_count = char_count + 2 * lines;
		floor_count++;
		lines++;
	}
	return (char_count);
}

int 	main(void)
{
	ft_putnbr(count_char_on_endline(1));
	return (0);
}
