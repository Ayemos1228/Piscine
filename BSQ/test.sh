#!/bin/sh

for file in `\find ./testcase -maxdepth 1 -type f | sort`; do
	echo '\n#####' $(echo $file | sed -e "s/\.\/testcase\///g") '#########################'
	./bsq $file
done
