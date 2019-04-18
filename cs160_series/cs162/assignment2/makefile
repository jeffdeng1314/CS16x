
CC = g++
exe_file = assignment_2
$(exe_file): main.o cart.o library_function.o functions.o patron.o librarian.o  
	$(CC) main.o cart.o library_function.o functions.o patron.o librarian.o -o $(exe_file)
cart.o: cart.cpp
	$(CC) -c cart.cpp
library_function.o: library_function.cpp
	$(CC) -c library_function.cpp
functions.o: functions.cpp
	$(CC) -c functions.cpp
patron.o: patron.cpp
	$(CC) -c patron.cpp
librarian.o: librarian.cpp
	$(CC) -c librarian.cpp
main.o: main.cpp
	$(CC) -c main.cpp
clean:
	rm -f *.o *.out $(exe_file)  
