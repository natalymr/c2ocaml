#!/bin/bash

for f in *.c; do 
	gcc "$f" -o c/"${f%.c}.out"
done
