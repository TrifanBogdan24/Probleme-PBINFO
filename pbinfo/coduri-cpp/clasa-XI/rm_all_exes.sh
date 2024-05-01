#!/bin/bash

for file in *.cpp; do
    exe="$(basename $file .cpp)"        # elimina extensia `.cpp`
    rm -f ./$exe
done

