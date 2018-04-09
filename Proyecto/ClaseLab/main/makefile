CXX = g++ 
CXXFLAGS = -Wall -g
INCLUDE = -I ../include
SRC = ../src

main: cuentabancaria.o test.o
	$(CXX) $(CXXFLAGS) -o $@ $^

test.o: test.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^ 

cuentabancaria.o: $(SRC)/cuentabancaria.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^

clean: 
	rm -f *.o *~ main
