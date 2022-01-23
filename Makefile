build:
		gcc -W -std=c99 ./src/*.c -o password_generator 
run:
		./password_generator 100
clean:
		rm password_generator
