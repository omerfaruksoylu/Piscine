/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsoylu <omsoylu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 19:48:30 by omsoylu           #+#    #+#             */
/*   Updated: 2025/09/28 19:48:30 by omsoylu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y && x > 0 && y > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 || row == y) && (col == 1 || col == x))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
