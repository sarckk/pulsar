CC=g++
CFLAGS = -Wall -Wextra -Wpedantic -Weffc++ -Wsign-conversion -std=c++17

TARGET = lol

default: \
	lol 
		./$(TARGET)

# compile: test.cpp hello.cpp hello.h myarray.h
# 	$(CC) $(CFLAGS) test.cpp hello.cpp -o $(TARGET)

pulsar: main.o 
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) -c $< $(CFLAGS)

.PHONEY: clean

clean:
	$(RM) $(TARGET)
