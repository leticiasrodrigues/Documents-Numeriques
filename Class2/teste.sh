#! /bin/sh

ls $#

for f
do
	expr $f + 1
done
