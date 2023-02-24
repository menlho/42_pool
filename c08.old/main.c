/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:14:43 by momascle          #+#    #+#             */
/*   Updated: 2023/02/22 04:39:32 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(int  argc, char *argv[])
{
	//(void)argc;
	//(void)argv;
	/*char **tab;
	int size = 3;
	t_stock_str *mystruct;
	tab = (char **)malloc(size * sizeof(char *));
	tab[0] = "Bonjour tout le monde.";
	tab[1] = "Bonjour le monde.";
	tab[2] = "Hi oh !";
	mystruct = ft_strs_to_tab(3, tab);
	ft_show_tab(mystruct);
	*/
	
	ft_show_tab(ft_strs_to_tab(argc, argv));

	return (0);

}
