/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 01:29:56 by nchin             #+#    #+#             */
/*   Updated: 2018/09/02 05:34:50 by nchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return(0);
}

int		ft_print_comb()
{
	int i;
	int j;
	int k;

	while ( i == '0'; i <= '7'; i++ || j = = i + '1'; j <= '8'; j++ || k == '2'; k <= '8'; k++ )
	{
		ft_putchar(i, j, k)
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
