/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:30:13 by momascle          #+#    #+#             */
/*   Updated: 2023/02/21 23:38:26 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_STOCK_H
# define	FT_STOCK_H


typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

void	ft_show_tab(struct s_stock_str *par);
t_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif
