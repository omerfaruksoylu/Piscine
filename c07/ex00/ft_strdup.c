/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsoylu <omsoylu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:31:02 by omsoylu           #+#    #+#             */
/*   Updated: 2025/10/15 21:14:31 by omsoylu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	tab = (char *) malloc(sizeof(char) * (i + 1));
	if (tab == NULL)
		return (NULL);
	while (src[j] != '\0')
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
