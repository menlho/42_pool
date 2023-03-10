/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:13:06 by momascle          #+#    #+#             */
/*   Updated: 2023/02/09 16:24:39 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while ((*str >= '0' && *str <= '9'))
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}
