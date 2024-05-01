#!/bin/bash

for file in *.cpp; do
    exe="$(basename $file .cpp)"        # elimina extensia `.cpp`
    g++ $file -o ./$exe
done
