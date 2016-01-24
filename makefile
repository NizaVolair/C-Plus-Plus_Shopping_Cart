PROGS := shop

all: $(PROGS)


List.o: List.cpp List.hpp
	g++ -c List.cpp 

Items.o: Items.cpp Items.hpp
	g++ -c Items.cpp 

ClubItems.o: ClubItems.cpp ClubItems.hpp
	g++ -c ClubItems.cpp  

shop: List.o Items.o ClubItems.o Shop.cpp
	g++ -g List.o Items.o ClubItems.o Shop.cpp -o shop


clean:
	rm -f $(PROGS) *.o *~
