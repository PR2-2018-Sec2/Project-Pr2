CXX = g++
INCLUDE = -I../include/
SOURCES = ../src/
CFLAGS = -g -c

all: main.exe

main.exe: main.o user.o automovil.o  bankaccount.o housing.o
	$(CXX) $(^) -o $(@)

main.o: main.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

user.o: $(SOURCES)user.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

housing.o: $(SOURCES)housing.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

bankaccount.o: $(SOURCES)bankaccount.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

automovil.o: $(SOURCES)automovil.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

clean:
	rm -f *.o *.exe