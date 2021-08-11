/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 09:45:01 by srvorkap          #+#    #+#             */
/*   Updated: 2019/07/10 09:54:50 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	lowercase;

	lowercase = 'a';
	while (lowercase <= 'z')
	{
		ft_putchar(lowercase);
		lowercase++;
	}
}
