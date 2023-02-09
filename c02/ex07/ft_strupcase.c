/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:48:09 by momascle          #+#    #+#             */
/*   Updated: 2023/02/09 05:14:57 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;
	i = 0;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
		i++;
	}
	return (str - i);
}