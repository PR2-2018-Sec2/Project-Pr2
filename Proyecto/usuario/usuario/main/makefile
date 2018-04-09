CXX = g++
INCLUDE = -I../include/
SOURCES = ../src/
CFLAGS = -g -c

all: main.exe

main.exe: main.o user.o
	$(CXX) $(^) -o $(@)

main.o: main.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

user.o: $(SOURCES)user.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

clean:
	rm -f *.o *.exe
