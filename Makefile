# Jalen Jones
# Makefile
# 12/06/2024

CC = g++
CFLAGS = -g -Wall -Wextra

# Default entry used for "make clean"
default: employee

# All the object files needed to create the executable file:
# Employee.o, Officer.o, Supervisor.o, main.o

employee: Employee.o Officer.o Supervisor.o main.o
	$(CC) $(CFLAGS) -o employee Employee.o Officer.o Supervisor.o main.o

# Rule to create Employee.o
Employee.o: Employee.cpp Employee.h
	$(CC) $(CFLAGS) -c Employee.cpp

# Rule to create Officer.o
Officer.o: Officer.cpp Officer.h
	$(CC) $(CFLAGS) -c Officer.cpp

# Rule to create Supervisor.o
Supervisor.o: Supervisor.cpp Supervisor.h
	$(CC) $(CFLAGS) -c Supervisor.cpp

# Rule to create main.o
main.o: main.cpp Employee.h Officer.h Supervisor.h
	$(CC) $(CFLAGS) -c main.cpp

# Logic to clean using "make clean"
clean:
	$(RM) employee *.o *~
