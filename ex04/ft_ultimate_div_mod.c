/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha <frocha@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 11:59:57 by frocha            #+#    #+#             */
/*   Updated: 2024/04/14 12:20:48 by frocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporal_a;
	int	temporal_b;

	temporal_a = *a;
	temporal_b = *b;
	*a = temporal_a / temporal_b;
	*b = temporal_a % temporal_b;
}
