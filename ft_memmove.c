/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-masr <ael-masr@student.ae>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:42:57 by ael-masr          #+#    #+#             */
/*   Updated: 2022/02/16 21:03:12 by ael-masr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*s;
	char	*d;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (d[i++])
	{
		d[i] = s[i];
	}
	return (dst);
}

int main()
{
	printf("%s",ft_memmove("hello", "world" , 5));
			return(0);
			}
