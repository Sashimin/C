#!/bin/bash

gcc $1.c
if [ $? -eq 0 ]; then
	./a.out
	rm a.out
fi
