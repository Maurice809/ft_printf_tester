/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <tmoret@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:10:47 by tmoret            #+#    #+#             */
/*   Updated: 2021/12/02 17:53:38 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void	ft_hello(void)
{
	ft_printf("\n");
	printf("-%d\n", printf("Hello World!\n"));
	ft_printf("-%d\n", ft_printf("Hello World!\n"));
	ft_printf("\n");
	printf("-%d\n", printf("c |---| %c %c \n", '4', '8'));
	ft_printf("-%d\n", ft_printf("c |---| %c %c \n", '4', '8'));
	ft_printf("\n");
	printf("-%d\n", printf("c |---| %c %c %c\n", 'b', 'n', 'k'));
	ft_printf("-%d\n", ft_printf("c |---| %c %c %c\n", 'b', 'n', 'k'));
	ft_printf("\n");
	printf("-%d\n", printf("s |---| %s \n", "BNK"));
	ft_printf("-%d\n", ft_printf("s |---| %s \n", "BNK"));
	ft_printf("\n");
}

void	ft_pointeur(int *b)
{
	printf("-%d\n", printf("p |---| %p\n", b));
	ft_printf("-%d\n", ft_printf("p |---| %p\n", b));
	ft_printf("\n");
}

void	ft_decimal(int a)
{
	printf("-%d\n", printf("d |---| %d\n", a));
	ft_printf("-%d\n", ft_printf("d |---| %d\n", a));
	ft_printf("\n");
	printf("-%d\n", printf("i |---| %i\n", a));
	ft_printf("-%d\n", ft_printf("i |---| %i\n", a));
	ft_printf("\n");
	printf("-%d\n", printf("u |---| %u\n", a));
	ft_printf("-%d\n", ft_printf("u |---| %u\n", a));
	ft_printf("\n");
}

void	ft_xx(int a)
{
	printf("-%d\n", printf("x |---| %x\n", a));
	ft_printf("-%d\n", ft_printf("x |---| %x\n", a));
	ft_printf("\n");
	printf("-%d\n", printf("X |---| %X\n", a));
	ft_printf("-%d\n", ft_printf("X |---| %X\n", a));
	ft_printf("\n");
	printf("-%d\n", printf("%% \n"));
	ft_printf("-%d\n", ft_printf("%% \n"));
	ft_printf("\n");
}

int	main(void)
{
	int	a;
	int	*b;

	a = 48;
	b = &a;
	ft_hello();
	ft_pointeur(b);
	ft_decimal(a);
	ft_xx(a);
}
