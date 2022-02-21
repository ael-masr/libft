/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-masr <ael-masr@student.ae>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:05:44 by ael-masr          #+#    #+#             */
/*   Updated: 2022/02/16 23:00:15 by ael-masr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dst, char *src,unsigned int dstsize)
{
	unsigned int counter;
	unsigned int i;

	counter = 0;
	i = 0;

		while (src[counter])
			counter++;

		while (src[i] && i < (dstsize-1))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] ='\0';
	return (counter);
}
