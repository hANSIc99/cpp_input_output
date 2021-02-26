#gcc flags:
# -c assemble but do not link
# -g include debug information
# -o output
# -s make stripped libray

# uncomment the last part in line 9 to compile with debug symbold 

CFLAGS =-Wall -std=c++11 -g 


all: InputOutput.o
	c++ -o InputOutput InputOutput.o $(CFLAGS)

InputOutput.o: InputOutput.cpp
	 c++ -c InputOutput.cpp $(CFLAGS)

.PHONY: clean
clean:
	rm *.o

