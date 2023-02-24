/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 22:52:55 by momascle          #+#    #+#             */
/*   Updated: 2023/02/24 08:45:58 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i + 1], charset) == 1
			&& is_sep(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	put_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (is_sep(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	put_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_sep(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			put_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = count_words(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	put_split(res, str, charset);
	return (res);
}
/*int main(int argc, char **argv)
{
	char **res;
	char *charset = ",";
	int len = count_words(argv[1], charset);
	res = malloc(sizeof(char *) * argc);
	res[argc] = 0;
	int i = 0;
	res = ft_split(argv[1], charset);
	while (i < len)
	{
	printf("%s\n", res[i]);
	i++;
	}
	return (0);
}*/
