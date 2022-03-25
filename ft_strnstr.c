/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azizelmasri <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 02:54:43 by azizelmasri       #+#    #+#             */
/*   Updated: 2022/03/25 04:48:49 by ael-masr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	lit_len;
	char	*b;

	i = 0;
	b = (char *)big;
	lit_len = ft_strlen(little);
	if (lit_len == 0 || big == little)
		return (b);
	while (b[i] != '\0' && i < len)
	{
		c = 0;
		while (b[i + c] != '\0' && little[c] != '\0'
			&& b[i + c] == little[c] && i + c < len)
			c++;
		if (c == lit_len)
			return (b + i);
		i++;
	}
	return (0);
}
