CC = clang++
exe_file = a.out
$(exe_file): main.o rock.o psychic.o flying.o cave.o location.o pokestop.o trainer.o
	$(CC) main.o rock.o psychic.o flying.o cave.o location.o pokestop.o trainer.o -o $(exe_file)
main.o: main.cpp
	$(CC) -c main.cpp
mainD.o: main.cpp
	$(CC) -c main.cpp -D DEBUG
flying.o: flying.cpp
	$(CC) -c flying.cpp
location.o: location.cpp
	$(CC) -c location.cpp
rock.o: rock.cpp
	$(CC) -c rock.cpp
psychic.o: psychic.cpp
	$(CC) -c psychic.cpp
cave.o: cave.cpp
	$(CC) -c cave.cpp
pokestop.o: pokestop.cpp
	$(CC) -c pokestop.cpp
trainer.o: trainer.cpp
	$(CC) -c trainer.cpp
debug: mainD.o rock.o psychic.o flying.o cave.o location.o pokestop.o trainer.o
	$(CC) main.o rock.o psychic.o flying.o cave.o location.o pokestop.o trainer.o -o $(exe_file)
clean:
	rm *.out *.o -f
