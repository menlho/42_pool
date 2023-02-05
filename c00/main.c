#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);

int main()
{
	char tester = 'a';
	int kikoo = -21474648;

	ft_putchar(tester);
	write(1,"\n",1);
	ft_print_alphabet();
	write(1,"\n",1);
	ft_print_reverse_alphabet();
	write(1,"\n",1);
	ft_print_numbers();
	write(1,"\n",1);
	ft_is_negative(-1);
	write(1,"\n",1);
	ft_is_negative(0);
	write(1,"\n",1);
	ft_is_negative(-0);
	write(1,"\n",1);
	ft_is_negative(70);
	write(1,"\n",1);
	ft_is_negative(-2147483648);
	write(1,"\n",1);
	ft_print_comb();
	write(1,"\n",1);
	ft_print_comb2();
	write(1,"\n",1);
	ft_putnbr(kikoo);
	write(1,"\n",1);
}
