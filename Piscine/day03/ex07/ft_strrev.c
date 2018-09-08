/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 02:36:02 by nchin             #+#    #+#             */
/*   Updated: 2018/09/07 02:37:41 by nchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i1;
	int i2;
	char tmp;

	i1 = 0;
	i2 = 0;

	while(str[i2] != '\0')
		i2++;
	while(i2 > i1)
	{
		tmp = str[i1];
		str[i1] = str[i2];
		str[i2]= tmp;
		i1++;
		i2--;
	}
	return (str);
}

int        main()
{
	char str[] = "Hello World";
	printf("%s", ft_strrev(str));
	return (0);
}
