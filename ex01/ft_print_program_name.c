/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:18:18 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/09/13 18:20:22 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	c;

	c = 0;
	while (argv[0][c] != '\0' && argc)
	{
		ft_putchar(argv[0][c]);
		c++;
	}
	ft_putchar('\n');
	return (0);
}
