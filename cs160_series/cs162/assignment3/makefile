CC = g++
exe_file = assignment_3
$(exe_file): main.o human.o creature.o world.o balrog.o demon.o cyberdemon.o elf.o dragon.o 
	$(CC) main.o human.o creature.o world.o balrog.o demon.o cyberdemon.o elf.o dragon.o -o $(exe_file)
human.o: human.cpp
	$(CC) -c human.cpp
creature.o: creature.cpp
	$(CC) -c creature.cpp
world.o: world.cpp
	$(CC) -c world.cpp
balrog.o: balrog.cpp
	$(CC) -c balrog.cpp
demon.o: demon.cpp
	$(CC) -c demon.cpp
main.o: main.cpp
	$(CC) -c main.cpp
cyberdemon.o: cyberdemon.cpp
	$(CC) -c cyberdemon.cpp
elf.o: elf.cpp
	$(CC) -c elf.cpp
dragon.o: dragon.cpp
	$(CC) -c dragon.cpp
clean:
	rm -f *.o *.out $(exe_file)  
