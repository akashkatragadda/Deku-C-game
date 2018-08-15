compile:
	gcc nonPareil.c StartGame.c Instructions.c random.c print_array.c print_Sarray.c WannaPlay.c head.h
run:	compile
	./a.out
