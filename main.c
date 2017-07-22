/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisdrah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 22:03:04 by mmisdrah          #+#    #+#             */
/*   Updated: 2017/07/23 00:31:19 by mmisdrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LENGTH 100
#include "tools.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{
	char val[LENGTH] = {0};
	int ret = 0, number = 0;
	int tmp = 0, tmp2 = 0;
	ret = read(0, val, LENGTH-1);
	val[ret] = '\0';
	printf("%s\n", val);

	while (val[ret] != '\n')
	{
		ret++;
		tmp++;
	}
	ret = 0;
	while (val[ret])
	{
		if (val[ret] == '\n')
			tmp2++;
		ret++;
	}
	str = rush00(tmp, tmp2);
	if (ft_strcmp(str, val) == 0)
		ft_putstr("[colle-00] [");
		ft_putchar((tmp + '0'));
		ft_putstr("] [");
		ft_putchar((tmp2 + '0'));
		ft_putstr("]");

	str = rush01(tmp, tmp2);
	if (ft_strcmp(str, val) == 0)
		if ()
		ft_putstr("[colle-01] [");
		ft_putchar((tmp + '0'));
		ft_putstr("] [");
		ft_putchar((tmp2 + '0'));
		ft_putstr("]");

}
