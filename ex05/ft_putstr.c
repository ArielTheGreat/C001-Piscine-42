/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha <frocha@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 11:56:08 by frocha            #+#    #+#             */
/*   Updated: 2024/04/14 11:56:44 by frocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *string_random)
{
	int		counter;
	char	temporal_variable;

	counter = 0;
	while (string_random[counter] != '\0')
	{
		temporal_variable = string_random[counter];
		write(1, &temporal_variable, 1);
		counter++;
	}
}
