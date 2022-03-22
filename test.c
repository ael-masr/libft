#include "libft.h"
#include <stdio.h>
static	int	char_in_set(char c, char const *set)
{
	int	x;

	x = 0;
	while (set[x])
	{
		if (set[x] == c)
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		counter;
	int		start_point;
	int		end_point;

	start_point = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start_point] && char_in_set(s1[start_point], set))
		start_point++;
	end_point = ft_strlen(s1);
	while (end_point > start_point && char_in_set(s1[end_point - 1], set))
		end_point--;
	ptr = (char *)malloc(sizeof(char) * (end_point - start_point + 1));
	if (!ptr)
		return (NULL);
	counter = 0;
	while (start_point < end_point)
		ptr[counter++] = s1[start_point++];
	ptr[counter] = '\0';
	return (ptr);
}
/*
 int main()
 {
 	char str1[] = "AZIZ MakaM";
 	char strTrim[] = "Mat";
 	printf("%s",ft_strtrim(str1, strTrim));
 	return (0);
 }
 */
