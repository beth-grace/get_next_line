/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:08:25 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/25 23:53:08 by beefie           ###   ########.fr       */
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

