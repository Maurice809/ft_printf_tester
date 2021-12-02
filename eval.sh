# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    eval.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 09:57:40 by tmoret            #+#    #+#              #
#    Updated: 2021/12/02 15:33:36 by tmoret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
# Nom du project
PROJECT=ft_printf

# Nom du testeur
FILE=ft_printf_tester
REPOS=https://github.com/Maurice809/ft_printf_tester.git

echo
echo "Bienvenue dans le $FILE !"
echo "------------------------------------"

if [ -n "$1" ]; then
    repo="$1"
elif [ ! -d "$PROJECT" ] ; then
    read -p "Coller votre Git repository : " repo
fi
if [ ! -d "$PROJECT" ] ; then
	git clone $repo $PROJECT
fi

norminette $PROJECT
sleep 10s

if [ ! -d "$FILE" ]; then
git clone $REPOS
fi

cd $FILE
./c.sh

while :
do
echo "[CTRL+C pour STOP]"
read -p "Refaire un test avec un autre chiffre ? " chiffre
cd $FILE
./c.sh $chiffre
done
