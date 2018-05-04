/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:11:39 by ardurand          #+#    #+#             */
/*   Updated: 2016/12/13 13:34:27 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*s2;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	length = i;
	i = 0;
	if ((s2 = (char*)malloc(sizeof(char) * length + 1)))
	{
		while (src[i] != '\0')
		{
			s2[i] = src[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	else
		return (NULL);
}
