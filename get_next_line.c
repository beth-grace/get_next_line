/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:34:45 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/22 15:08:03 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			index
	static char	*buf
	char		*buffy
	int			size;
	char		*newline;

	index = 0;
	while
	{
		buffy = malloc(BUFFER_SIZE + 1) * (sizeof(int));
		size = read (fd, buffy, BUFFER_SIZE);
		o nahwhile (buf[index] != '\0')
		{
			if (index == len)
				buf = malloc(BUFFER_SIZE + index) * (sizeof(int));
			index++;
		}
	}
}
