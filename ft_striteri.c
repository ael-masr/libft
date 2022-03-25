/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-masr <ael-masr@student.ae>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:10:15 by ael-masr          #+#    #+#             */
/*   Updated: 2022/03/25 03:06:54 by ael-masr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (s[i])
		{	
			f(i, &s[i]);
			i++;
		}
	}
}
