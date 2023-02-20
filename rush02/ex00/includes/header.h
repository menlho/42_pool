/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scdubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:51:27 by scdubois          #+#    #+#             */
/*   Updated: 2023/02/19 19:37:00 by scdubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

int				main(int argc, char **argv);
int				main_1(int argc, char **argv);
int				main_2(int argc, char **argv);
int				dicocheck(unsigned int nbr, char *dico);
int				dicocheck_2(unsigned int nbr, char *dico);
void			ft_space(unsigned int nbr);
int				sizeofnbr(unsigned int nb);
int				ft_check(int argc, char **argv);
void			ft_putstr(char *str);
int				ft_puterror(int nb);
unsigned int	ft_atoi(char *str);
int				rush02(unsigned int nbr, char *dico);
int				rush02_2(unsigned int nbr, char *dico);
int				ft_putnbr(unsigned int nbr, char *dico);
int				ft_putnbr_2(unsigned int nbr, char *dico);
char			*ft_dico(unsigned int nbr, char *dico, int i, int j);
void			ft_dico_2(char *dico, char *tofind, int *i, int *j);
void			ft_dico_3(char *dico, int *i, int *k, int *l);
void			ft_dico_4(char **toput, char *dico, int *i, int *l);
char			*inttochar(unsigned int nbr, int i, char *str);

#endif
