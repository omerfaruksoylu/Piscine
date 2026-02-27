/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsoylu <omsoylu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:02:31 by omsoylu           #+#    #+#             */
/*   Updated: 2025/10/15 21:12:10 by omsoylu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc((sizeof(int)) * (max - min));
	if (*range == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
