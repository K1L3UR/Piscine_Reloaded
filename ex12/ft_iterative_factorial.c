/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 11:48:07 by ardurand          #+#    #+#             */
/*   Updated: 2016/12/13 13:15:10 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;
	int i;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}
