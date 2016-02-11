# Makefile for Mytest2

all: example main

main:
	g++ main.cpp -o main.o

example:
	g++ example.cpp -o example.o
