/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embrugge <embrugge@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:04:23 by embrugge          #+#    #+#             */
/*   Updated: 2026/09/29 18:11:24 by embrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s++)
		size++;
	return (size);
}
