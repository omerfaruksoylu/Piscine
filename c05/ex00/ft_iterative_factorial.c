/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsoylu <omsoylu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:34:33 by omsoylu           #+#    #+#             */
/*   Updated: 2025/10/13 15:38:34 by omsoylu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (1 <= i)
	{
		result = result * i;
		i--;
	}
	return (result);
}
