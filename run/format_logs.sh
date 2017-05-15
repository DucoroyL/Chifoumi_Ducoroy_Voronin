#!/bin/sh

if [ $# -ne 2 ] ; then
	echo "Nombre incorrect d'arguments"
	exit
fi

N_DIREC=$1
N_FIC=$2
list_log=`find ../$N_DIREC -name log*`
temp=truc
for i in $list_log ; do
	tail -n +4 ${i} >> $temp
done
sed -e "s/.*\]\ //g" $temp > ../$N_DIREC$N_FIC 
rm truc
#| xargs tail -n +4

