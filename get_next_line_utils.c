/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:08:25 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/30 00:59:02 by beefie           ###   ########.fr       */
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
	join = malloc(((index1 + index2) + 1) * sizeof(char));
	if(!join)
		return (NULL);
	index1 = 0;
	while (*s1 != '\0')
		join[index++] = *s1++;
	while (*s2 != '\0')
		join[index1++] = *s2++;
	join[index1] = '\0';
	free(join);
	return (join);
}

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while(s[index] != '\0')
	{
		if (s[index] == c)
			return (s + index);
		index++;
	}
	if (c == '\0' & s[index] == '\0')
		return (s + index);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	index;
	int	size;
	char	*sub;

	index = 0;
	while (s[index] != '\0' && s[index] <= len)
	{
		while (s[index] != start)
			index++;
		while (s[index] <= len)
		{
			index++;
			size++;
		}
		sub = (char *)malloc((size + 1) * sizeof(char));
		index = index - size;
		while (s[index] <= len)
		{
			sub[index] = s[index];
			index++;
		}
		sub[index] = '\0';
		return (sub);
	}
	return (NULL);
}
int	ft_strlen(char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	return (index);
}

char	*ft_strdup(const char *s1)
{
	int	index;
	int	size;
	char	*dest;

	size = 0;
	index = 0;
	while (s[index] != '\0')
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



