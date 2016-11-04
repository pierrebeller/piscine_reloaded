

all : compile.o
	ar rc libft.a *.o 

compile.o : 
	gcc -I ./includes -c ./srcs/*.c

clean :
	rm -f *.o

fclean : clean
	rm -f libft.a 

re : fclean all
	