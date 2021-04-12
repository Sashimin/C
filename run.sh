#!/bin/bash

file="$1"
subc="$2"
subc_i="$3"
shift

gcc -O3 -lm $file.c
if [ $? -eq 0 ]; then
    case $subc in
        -i)
            ./a.out < $subc_i
            ;;
        *)
            ./a.out
            ;;
    esac
    rm -rf a.out
fi
