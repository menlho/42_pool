/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:22:24 by momascle          #+#    #+#             */
/*   Updated: 2023/02/09 16:25:00 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while ((*str >= 'a' && *str <= 'z'))
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}
