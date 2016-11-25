/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:59:12 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/25 13:31:04 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	if (!(dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	if (dup)
	{
		i = 0;
		while (i < ft_strlen(s))
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = '\0';
	}
	else
		return (NULL);
	return (dup);
}
