#!/bin/bash

for file in *.cpp; do
    exe="$(basename $file .cpp)"        # elimina extensia fisierelor `*.cpp`
    rm -f ./$exe
done
