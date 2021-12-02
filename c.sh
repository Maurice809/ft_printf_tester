# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    c.sh                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoret <thomas.moret@xfk48.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 19:09:46 by tmoret            #+#    #+#              #
#    Updated: 2021/12/02 10:13:48 by tmoret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#
# Faire des applications pour Mobile, C'est l'avenir !
#
# Mobile
# พิมรภัส ผดุงวัฒนะโชค
# PIMRAPAT PHADUNGWATANACHOK

#!/bin/bash

cp main.c ../ft_printf

var_a=$(printf "%q" $1)

if [ -n "$1" ]; then
    sed -i "" "s/48/${var_a}/g" ../ft_printf/main.c
fi

cd ../ft_printf
make re
cc -Wall -Wextra -Werror -I. main.c libftprintf.a
./a.out
rm ./a.out
rm ./main.c
make fclean