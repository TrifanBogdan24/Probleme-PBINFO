for file in *.cpp; do g++ $file -o $(basename $file .cpp); done
