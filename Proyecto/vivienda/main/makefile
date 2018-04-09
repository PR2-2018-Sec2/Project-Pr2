COMPILER=g++
HEADERS=-I../include/
FLAGS= -c -g
SOURCES=../scr/

pruebavivienda.exe: pruebavivienda.o vivienda.o
	$(COMPILER) $(^) -o $(@)

pruebavivienda.o: pruebavivienda.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)

vivienda.o: $(SOURCES)vivienda.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)

clean:
	$(RM) *.o .*exe