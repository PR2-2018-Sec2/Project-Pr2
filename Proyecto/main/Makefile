CXX = g++ -std=c++11
INCLUDE = -I../include/
SOURCES = ../src/
CFLAGS =  -g -c

all: main.exe

main.exe: main.o user.o automobile.o bank.o housing.o tax_user.o administrator.o tax_system.o
	$(CXX) $(^) -o $(@)

main.o: main.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

tax_user.o: $(SOURCES)tax_user.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

user.o: $(SOURCES)user.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

housing.o: $(SOURCES)housing.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

bank.o: $(SOURCES)bank.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

automobile.o: $(SOURCES)automobile.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

administrator.o: $(SOURCES)administrator.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

tax_system.o: $(SOURCES)tax_system.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

clean:
	rm -f *.o *.exe
