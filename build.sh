#!/bin/bash

target_directory="bin"

# get list of c files
files=$(ls -1 *.c)

# compile all c files
for f in $files
do
	# get file name without extension
	name=$(basename -s .c $f)

	echo "gcc -o $target_directory/$name $f"
	gcc -o $target_directory/$name $f
done

