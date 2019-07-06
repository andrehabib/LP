PROG = loja
CC = g++
IDIR = /include
CPPFLAGS = -I $(IDIR)-O0 -g -Wall -std=c++11 
OBJS = main.o bebida.o date.o roupa.o produto.o fruta.o interfaces.o


$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG) 

main.o : 
	$(CC) $(CPPFLAGS) -c src/main.cpp 

bebida.o : 
	$(CC) $(CPPFLAGS) -c src/bebida.cpp
	
date.o : 
	$(CC) $(CPPFLAGS) -c src/date.cpp

roupa.o : 
	$(CC) $(CPPFLAGS) -c src/roupa.cpp

produto.o : 
	$(CC) $(CPPFLAGS) -c src/produto.cpp
	
fruta.o : 
	$(CC) $(CPPFLAGS) -c src/fruta.cpp

interfaces.o :
	$(CC) $(CPPFLAGS) -c src/interfaces.cpp

clean:
	rm -f core $(PROG) $(OBJS)