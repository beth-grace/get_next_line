/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:34:45 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/22 12:32:35 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static int	*len
	int			index
	static int	*buf

	index = 0;
	len = BUFFER_SIZE;
	while (buf)
	{
		buf = malloc(BUFFER_SIZE + 1) * (sizeof(int));
		read (fd, buf, BUFFER_SIZE)
			while(buf != '\n')
			{
				if (buf[index] == len)
					size = malloc(BUFFER_SIZE + size) * (sizeof(int));
				index++;
			}
		 (

