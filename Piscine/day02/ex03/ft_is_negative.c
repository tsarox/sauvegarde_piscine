/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 03:20:39 by nchin             #+#    #+#             */
/*   Updated: 2018/09/01 23:12:27 by nchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_is_negative(void)
{
	int i;

	if ('0' >= 'n')
	{
		ft_putchar('n');
	}
	else
	{
		ft_putchar('p');
	}
}

int		main()
{
	ft_is_negative(10);
	return (0);
}
