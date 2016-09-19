#! /bin/sh

##Total number of arqs
x=$(ls | wc -l)

##Total number of arqs with . in the name
y=$(ls | grep $1 | wc -l)

echo $(expr $x - $y)
