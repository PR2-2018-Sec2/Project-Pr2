CXX = g++
FLAGS = -c -g
HEADERS = -I../include/.
SOURCES = ../src/

all: main.exe

main.exe: main.o automovil.o 
	$(CXX) $^ -o $(@)

main.o: main.cpp
	$(CXX) $(HEADERS) $^ $(FLAGS)

automovil.o: $(SOURCES)automovil.cpp
	$(CXX) $(HEADERS) $^ $(FLAGS)

clean:
	rm -f *.exe *.o