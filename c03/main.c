/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 04:17:55 by momascle          #+#    #+#             */
/*   Updated: 2023/02/11 05:20:49 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int n);

int main(void)
{
	char	str1[] = "hi ho";
	char	str2[] = "hi ah";
	char	str3[50] = "bonjour";
	char	str4[] = "les amis !";
	printf("real : %d\n", strcmp(str1, str2));
	printf("fake : %d\n", ft_strcmp(str1, str2));
	printf("real : %d\n", strncmp(str1, str2, 4));
	printf("fake : %d\n", ft_strncmp(str1, str2, 4));
	//printf("real : %s\n", strcat(str3, str4));
	//printf("fake : %s\n", ft_strcat(str3, str4));
	//printf("real : %s\n", strncat(str3, str4, 3));
	printf("fake : %s\n", ft_strncat(str3, str4, 3));
}
