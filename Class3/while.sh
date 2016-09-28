#! /bin/sh

S=0
while read A 
do
    =$(expr $S + $A)
    echo donner=$A somme=$S;
done << EOF
2
3
4
EOF
