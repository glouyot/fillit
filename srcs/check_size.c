/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarin-h <jmarin-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:07:31 by jmarin-h          #+#    #+#             */
/*   Updated: 2016/11/25 10:13:36 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			check_size(int fd)
{
	int		len;
	char	*buffer;

	if (!(buffer = (char *)malloc(sizeof(char) * 545 + 1)))
		return (0);
	len = read(fd, buffer, 545);
	buffer[len] = '\0';
	if ((len + 1) % 21 != 0)
		return (0);
	free(buffer);
	return (len);
}
