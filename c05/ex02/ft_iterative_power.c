/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsoylu <omsoylu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:35:26 by omsoylu           #+#    #+#             */
/*   Updated: 2025/10/13 15:28:12 by omsoylu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
