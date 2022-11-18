compile:
	g++ src/main.cpp src/parser.cpp src/parser.h -O2 -o main
	sudo chmod 777 ./main 
	./main