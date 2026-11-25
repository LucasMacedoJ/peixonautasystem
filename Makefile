GCC = gcc
LIMPAR = rm
SRC = ./src/
INCLUDE = ./include/
OBJ = ./obj/
EXE = PSys

all: $(SRC)main.c menus.o listas.o
	clear
	@$(GCC) $(SRC)main.c $(OBJ)menus.o $(OBJ)listas.o -o $(EXE)
	./$(EXE)

menus.o: $(SRC)menus.c $(INCLUDE)menus.h
	@$(GCC) -c $(SRC)menus.c -o $(OBJ)menus.o

listas.o: $(SRC)listas.c $(INCLUDE)listas.h
	@$(GCC) -c $(SRC)listas.c -o $(OBJ)listas.o

remover:
	$(LIMPAR) $(OBJ)*