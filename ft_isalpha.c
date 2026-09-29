/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embrugge <embrugge@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:39:50 by embrugge          #+#    #+#             */
/*   Updated: 2026/09/29 12:49:20 by embrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c);
int	ft_islower(int c);

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

int	ft_isupper(int c)
{
	return (c >= 'A' && 'Z' >= c);
}

int	ft_islower(int c)
{
	return (c >= 'a' && 'z' >= c);
}
