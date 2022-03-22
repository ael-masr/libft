/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-masr <ael-masr@student.ae>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:10:15 by ael-masr          #+#    #+#             */
/*   Updated: 2022/03/21 00:33:56 by ael-masr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int n;
	int i;

	i = 0;
	n = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while(n < i)
		{
			(*f) (n, s);
			n++;
			s++;
		}
	}
}

