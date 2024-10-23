build: ./src/lisp/main.c
	cc -std=c99 -Wall  ./src/lisp/main.c -ledit -o ./out/main
run: ./out/main
	./out/main
clean:
	rm ./out/*
hello_world: ./src/practice/hello_world.c
	cc -std=c99 -Wall ./src/practice/hello_world.c -o ./out/hello_world
add_together: ./src/practice/add_together.c
	cc -std=c99 -Wall ./src/practice/add_together.c -o ./out/add_together
coordinate: ./src/practice/coordinate
	cc -std=c99 -Wall ./src/practice/coordinate.c -o ./out/coordinate
practice_basics: ./src/practice/practice_basics
	cc -std=c99 -Wall ./src/practice/practice_basics.c -o ./out/practice_basics

