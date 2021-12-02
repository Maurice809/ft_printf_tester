/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <tmoret@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:10:47 by tmoret            #+#    #+#             */
/*   Updated: 2021/12/01 22:58:48 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void	ft_hello(void)
{
	ft_printf("\n");
	printf("Hello World!\n");
	ft_printf("Hello World!\n");
	ft_printf("\n");
	printf("c---%c %c \n", '4', '8');
	ft_printf("c---%c %c \n", '4', '8');
	ft_printf("\n");
	printf("c---%c %c %c\n", 'b', 'n', 'k');
	ft_printf("c---%c %c %c\n", 'b', 'n', 'k');
	ft_printf("\n");
	printf("s---%s \n", "BNK");
	ft_printf("s---%s \n", "BNK");
	ft_printf("\n");
}

void	ft_xx(int a)
{
	printf("x---%x\n", a);
	ft_printf("x---%x\n", a);
	ft_printf("\n");
	printf("X---%X\n", a);
	ft_printf("X---%X\n", a);
	ft_printf("\n");
}

void	ft_pourcent(void)
{
	printf("%% \n");
	ft_printf("%% \n");
	ft_printf("\n");
}

void	ft_count(int a)
{
	printf("-%d\n", printf("X---%X\n", a));
	ft_printf("-%d\n", ft_printf("X---%X\n", a));
}

int	main(void)
{
	int	a;
	int	*b;

	a = 48;
	b = &a;
	ft_hello();
	printf("p---%p\n", b);
	ft_printf("p---%p\n", b);
	ft_printf("\n");
	printf("d---%d\n", a);
	ft_printf("d---%d\n", a);
	ft_printf("\n");
	printf("i---%i\n", a);
	ft_printf("i---%i\n", a);
	ft_printf("\n");
	printf("u---%u\n", a);
	ft_printf("u---%u\n", a);
	ft_printf("\n");
	ft_xx(a);
	ft_pourcent();
	ft_count(a);
}
