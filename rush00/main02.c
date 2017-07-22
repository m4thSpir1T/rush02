/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:25:06 by hugsbord          #+#    #+#             */
/*   Updated: 2017/07/22 23:33:21 by mmisdrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);
void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int var;

	var = 0;
	i = 0;
	neg = 1;
	while (((str[i] >= 8) && (str[i] <= 13)) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		var = var * 10 + (str[i] - '0');
		i++;
	}
	return (var * neg);
}

int		main(int argc , char **argv)
{
	int nb;
	int nb2;

	nb = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[2]);
	rush(nb, nb2);
	return (0);
}
