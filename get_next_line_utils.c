/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:08:25 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/22 15:50:36 by bmilford         ###   ########.fr       */
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
	return (join);
}
