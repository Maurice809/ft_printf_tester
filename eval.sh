# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    eval.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 09:57:40 by tmoret            #+#    #+#              #
#    Updated: 2021/12/02 10:16:44 by tmoret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

echo
echo "Bienvenue dans le ft_printf_tester !"
echo "------------------------------------"

if [ -n "$1" ]; then
    repo="$1"
else
    read -p "Coller votre Git repository : " repo
fi

git clone $repo ft_printf
norminette ./ft_printf
sleep 10s
git clone http://cherprang.xfk48.com:3000/42_Lausanne/ft_printf_tester.git

cd ft_printf_tester
./c.sh

while :
do
echo "[CTRL+C pour STOP]"
read -p "Refaire un test avec un autre chiffre ? " chiffre
cd ft_printf_tester
./c.sh $chiffre
done