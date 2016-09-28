#! /bin/sh

S=0
tr 'a' 'b' < foo | while read A 
do
    =$(expr $S + $A)
    echo donner=$A somme=$S;
    echo $S > foo
done 

echo S=$(cat foo)
