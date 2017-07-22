/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:39:15 by hugsbord          #+#    #+#             */
/*   Updated: 2017/07/09 21:01:57 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_top_line(int x)
{
	int i;

	i = 1;
	ft_putchar('o');
	while (i < (x - 1))
	{
		ft_putchar('-');
		++i;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	ft_print_middle_line(int x)
{
	int i;

	i = 1;
	ft_putchar('|');
	while (i < (x - 1))
	{
		ft_putchar(' ');
		++i;
	}
	ft_putchar('|');
	ft_putchar('\n');
}

void	ft_print_bottom_line(int x)
{
	int i;

	i = 1;
	ft_putchar('o');
	while (i < (x - 1))
	{
		ft_putchar('-');
		++i;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	ft_print_vertical_line(int y)
{
	int i;

	i = 1;
	ft_putchar('o');
	ft_putchar('\n');
	while (i < (y - 1))
	{
		ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
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
