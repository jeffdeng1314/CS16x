CC = g++
exe_file = assignment1
$(exe_file): states_fact.o  run_facts.o
	$(CC) states_fact.o run_facts.o -o $(exe_file)
states_fact.o: states_fact.cpp
	$(CC) -c states_fact.cpp
run_facts.o: run_facts.cpp
	$(CC) -c run_facts.cpp
clean:
	rm -f *.o *.out $(exe_file)  
