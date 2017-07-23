/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisdrah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 22:03:04 by mmisdrah          #+#    #+#             */
/*   Updated: 2017/07/23 13:20:37 by mmisdrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		affichage(int i, int tmp, int tmp2)
{
	int t;

	t = 0;
	if (t == 1)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putchar(i + '0');
	ft_putstr("] [");
	ft_putchar((tmp + '0'));
	ft_putstr("] [");
	ft_putchar((tmp2 + '0'));
	ft_putstr("]");
	t = 1;
	return (0);
}

int		main(void)
{
	int lenght = 0;
	char *val;
	int ret = 0, number = 0;
	int tmp = 0, tmp2 = 0;

	while (val[ret - 1] != '\0')
	{
		lenght += 10;
		ret = read(0, val, lenght);
	}
	val = malloc(sizeof(char) * ret);
	ret = read(0, val, lenght - 1);
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
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * ((tmp * tmp2) + tmp2 + 1));

	str = rush00(tmp, tmp2);
	if (ft_strcmp(str, val) == 0)
		affichage(i, tmp, tmp2);
	i++;
	str = rush01(tmp, tmp2);
	if (ft_strcmp(str, val) == 0)
		affichage(i, tmp, tmp2);
	i++;
	str = rush02(tmp, tmp2);
	if (ft_strcmp(str, val) == 0)
		affichage(i, tmp, tmp2);
	i++;
	str = rush03(tmp, tmp2);
	if (ft_strcmp(str, val) == 0)
		affichage(i, tmp, tmp2);
	i++;
	str = rush04(tmp, tmp2);
	if (ft_strcmp(str, val) == 0)
		affichage(i, tmp, tmp2);
	return (0);
}
