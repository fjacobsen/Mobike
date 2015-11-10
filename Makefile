CXX = g++
CXXFLAGS = -g -Wall
FONTES = cliente.cc bike.cc main.cc
OBJETOS = $(FONTES:.cc=.o)
main: $(OBJETOS)
	$(CXX) $(OBJETOS) -o main
clean:
	-@ rm -f $(OBJETOS)
depend:
	makedepend -- ${CFLAGS} -- ${FONTES}
Elevador.o: Elevador.h
main.o: Elevador.h
