CC=clang++

CFLAGS=

INCLUDES=-I/opt/homebrew/Cellar/sfml/2.6.1/include -I./include

LINK=-L/opt/homebrew/Cellar/sfml/2.6.1/lib

LIBINCLUDES=-lsfml-graphics -lsfml-window -lsfml-system

SRC = ./src/*

OUT = ./bin/main

build:
	$(CC) $(CFLAGS) -o $(OUT) $(INCLUDES) $(LINK) $(LIBINCLUDES) $(SRC)
