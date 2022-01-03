# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    c.sh                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoret <thomas.moret@xfk48.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 19:09:46 by tmoret            #+#    #+#              #
#    Updated: 2022/01/03 17:49:42 by Maurice809       ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #
#
# Faire des applications pour Mobile, C'est l'avenir !
#
# Mobile
# พิมรภัส ผดุงวัฒนะโชค
# PIMRAPAT PHADUNGWATANACHOK

#!/bin/bash

machine=$(uname)

cp main.c ../ft_printf

var_a=$(printf "%q" $1)

if [ -n "$1" ]; then
	if [ "$machine" == "Linux" ]; then
		sed -i "s/48/${var_a}/g" ../ft_printf/main.c
	else
		sed -i "" "s/48/${var_a}/g" ../ft_printf/main.c
	fi
fi

cd ../ft_printf
make re
cc -Wall -Wextra -Werror -I. main.c libftprintf.a
./a.out
rm ./a.out
rm ./main.c
make fclean
