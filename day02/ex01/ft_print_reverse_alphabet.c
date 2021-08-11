/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:04:03 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/10 10:06:50 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	lowercase;

	lowercase = 'z';
	while (lowercase >= 'a')
	{
		ft_putchar(lowercase);
		lowercase--;
	}
}
