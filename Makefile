GCC = gcc
LIMPAR = rm
SRC = ./src/
INCLUDE = ./include/
OBJ = ./obj/
EXE = PSys

all: $(SRC)main.c menus.o listas.o utils.o
	clear
	@$(GCC) $(SRC)main.c $(OBJ)menus.o $(OBJ)listas.o $(OBJ)utils.o -o $(EXE)
	./$(EXE)

menus.o: $(SRC)menus.c $(INCLUDE)menus.h
	@$(GCC) -c $(SRC)menus.c -o $(OBJ)menus.o

listas.o: $(SRC)listas.c $(INCLUDE)listas.h
	@$(GCC) -c $(SRC)listas.c -o $(OBJ)listas.o

utils.o: $(SRC)utils.c $(INCLUDE)utils.h
	@$(GCC) -c $(SRC)utils.c -o $(OBJ)utils.o

remover:
	$(LIMPAR) $(OBJ)*