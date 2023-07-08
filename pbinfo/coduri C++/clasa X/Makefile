CPP_FILES := $(shell ls *.cpp)
NUM_CPP_FILES := $(shell echo $(CPP_FILES) | wc -w)

coding-style:
	cd ../'coding style' ; ./cs.sh ../; cd ../'clasa IX'

last:
	echo "STATUS : am ramas la cuvinte9"

status: last

count:
# 	echo "$(ls *.cpp | wc -l) fisiere C++"
	echo "$(NUM_CPP_FILES) fisiere C++"

exe:
	sudo chmod +x ./executabile.sh
	./executabile.sh

clean:
	rm -f *.o ./a.out
