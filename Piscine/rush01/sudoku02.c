/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:13:43 by nchin             #+#    #+#             */
/*   Updated: 2018/09/08 18:18:25 by nchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   check_ligne(char **grille, int valeur, int l, int h)
{
	int i;
	
	i = 0;
	while (i < 9)
	{
		if (grille[h][i] == valeur)
			return (0);
		i++;
	}
	return (1);
}

int		check_colonne(char **grille, int valeur, int l, int h)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grille[i][h] == valeur)
			return (0);
		i++;
	}
	return (1);
}
