/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 03:01:41 by momascle          #+#    #+#             */
/*   Updated: 2023/02/11 04:00:34 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);
char	*ft_strupcase(char *src);
char	*ft_strlowcase(char *src);
char	*ft_strcapitalize(char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[50];
	char	src[] = "Coucou les amis !";
	char	src2[] = "Hey bro !";
	char	alpha[] = "abcdeeFgjnbnIKBUJujv";
	char	vide[] = "";
	char	nbrs[] = "12345";
	char	nonbrs[] = "12f 345";
	char	lower[] = "efjeigfjeg";
	char	upper[] = "DFEKFEHHIFGB";
	char	printable[] = "fe fekfhb wfkb";
	char	minme[] = "JE 43NE 4SUIS P  AS ---E-N MInusculES \\QUARANTE-DEUX  ___ft_print_comb .quarante 42mots +double+dix";
	char	test1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";



	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", dest);
	printf("on copie : %s dans la dest (n) \n", src2);
	printf("chaine copiee : %s\n", ft_strncpy(dest, src2, 4));
	printf("src : %d, src2 : %d, alpha : %d, void : %d.\n", ft_str_is_alpha(src),  ft_str_is_alpha(src2),
		      						ft_str_is_alpha(alpha), ft_str_is_alpha(vide));

	printf("nbrs : %d  nonbrs : %d\n", ft_str_is_numeric(nbrs), ft_str_is_numeric(nonbrs));
	printf("lower: %d  upper: %d\n", ft_str_is_lowercase(lower), ft_str_is_uppercase(upper));
	printf("printable : %d \n", ft_str_is_printable(printable));
	printf("MAJED alpha :  %s \n", ft_strupcase(alpha));
	printf("lowered alpha : %s \n", ft_strlowcase(alpha));
	printf("strcapitalize : %s \n", ft_strcapitalize(minme));
	printf("strcapitalize : %s \n", ft_strcapitalize(test1));
	printf("strlcpy : %s\n", nbrs);
	printf("strlcpy len : %d\n", ft_strlcpy(nbrs, alpha, 6));
	//printf("strlcpy real len : %lu\n", strlcpy(nbrs, alpha, 6));
	printf("strlcpy : %s\n", nbrs); 
}
