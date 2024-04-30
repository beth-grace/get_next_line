/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:08:25 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/30 17:38:03 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index1;
	int		index2;
	char	*join;

	index1 = 0;
	index2 = 0;
	while (s1[index1] != '\0')
		index1++;
	while (s2[index2] != '\0')
		index2++;
	if (index1 + index2 < 1)
		return (ft_strdup(""));
	join = malloc(((index1 + index2) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	index1 = 0;
	while (*s1 != '\0')
		join[index1++] = *s1++;
	while (*s2 != '\0')
		join[index1++] = *s2++;
	join[index1] = '\0';
	return (join);
}

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return ((char *)s + index);
		index++;
	}
	if ((char)c == '\0' & s[index] == (char)c)
		return ((char *)s + index);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		count;
	char		*sub;
	size_t		length;

	length = ft_strlen(s);
	if (start > length)
		return (ft_strdup(""));
	if (length - start < len)
		len = length - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	count = 0;
	while (count < len)
	{
		sub[count] = s[start];
		start++;
		count++;
	}
	if (count == len)
		sub[count] = '\0';
	return (sub);
}

int	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	return (index);
}

char	*ft_strdup(const char *s1)
{
	int		index;
	int		size;
	char	*dest;

	size = 0;
	index = 0;
	while (s1[index] != '\0')
		index++;
	dest = (char *)malloc((index + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		dest[index] = s1[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
