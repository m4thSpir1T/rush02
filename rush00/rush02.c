/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:16:31 by awilk             #+#    #+#             */
/*   Updated: 2017/07/09 21:03:34 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_top_line(int x)
{
	int	i;

	i = 1;
	ft_putchar('A');
	while (i < (x - 1))
	{
		ft_putchar('B');
		++i;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void	ft_print_middle_line(int x)
{
	int i;

	i = 1;
	ft_putchar('B');
	while (i < (x - 1))
	{
		ft_putchar(' ');
		++i;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void	ft_print_bottom_line(int x)
{
	int i;

	i = 1;
	ft_putchar('C');
	while (i < (x - 1))
	{
		ft_putchar('B');
		++i;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	ft_print_vertical_line(int y)
{
	int i;

	i = 1;
	ft_putchar('A');
	ft_putchar('\n');
	while (i < (y - 1))
	{
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (x == 1 && y > 0)
		ft_print_vertical_line(y);
	else if (y == 1 && x > 0)
		ft_print_top_line(x);
	else if (x > 1 && y > 1)
	{
		ft_print_top_line(x);
		ft_print_middle_line(x);
		while (++i < (y - 1))
			ft_print_middle_line(x);
		if (y > 1 && x > 0)
			ft_print_bottom_line(x);
	}
}
