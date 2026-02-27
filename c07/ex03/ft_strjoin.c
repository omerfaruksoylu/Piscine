/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsoylu <omsoylu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:02:51 by omsoylu           #+#    #+#             */
/*   Updated: 2025/10/15 21:21:55 by omsoylu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

int	total_str_len(int size, char **str)
{
	int	j;
	int	i;
	int	total;

	i = 0;
	j = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			total++;
		}
		i++;
	}
	return (total);
}

void	strs_loop(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[k++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
			{
				result[k++] = sep[j++];
			}
		}
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		sep_len;
	char	*result;

	if (size <= 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = total_str_len(size, strs);
	sep_len = str_len(sep);
	result = (char *)malloc(total_len + sep_len * (size - 1) + 1);
	if (!result)
		return (NULL);
	strs_loop(result, strs, sep, size);
	return (result);
}
