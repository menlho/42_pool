/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:22:42 by momascle          #+#    #+#             */
/*   Updated: 2023/02/19 21:30:40 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

struct	dict
{
	char	*name;
	int		f;
	int	size;
	char	*tablo;
};

int	main()
{
	struct	dict eng;
	eng.tablo = (char *)malloc(50 * sizeof(char));
	eng.name = "english";
	eng.f = open("dict.txt", O_RDONLY);
	eng.size = read(eng.f, eng.tablo, 50);
	int i = 0;
	while (i < 50)
		printf("%c", eng.tablo[i++]);
	printf("\n");
	printf("%d", eng.size);

	return (0);
}
