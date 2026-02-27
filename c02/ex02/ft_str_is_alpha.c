/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsoylu <omsoylu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:58:09 by omsoylu           #+#    #+#             */
/*   Updated: 2025/10/07 19:55:19 by omsoylu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!('A' <= str[i] && str[i] <= 'Z' || 'a' <= str[i] && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}


#include <stdio.h>
int main(void) 
{
	char str[] = "omer aruk";
	printf("%d", ft_str_is_alpha(str));
}