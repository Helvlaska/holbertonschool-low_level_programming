0-preprocessor : Write a script that runs a C file through the preprocessor and save the result into another file. : gcc -E $MYFILE -o interm
1-compiler : Write a script that compiles a C file but does not link. : gcc -c $MYFILE (-c ajoute par defaut l'extention .o au fichier apres compilation)
2-assembler : Write a script that generates the assembly code of a C code and save it in an output file. gcc -S $MYFILE (-S ajoute l'extention .S au fichier apres compilation)
3-name : Write a script that compiles a C file and creates an executable named cisfun. : gcc fichier_a_compiler -o fichier_compile_name
4-puts.c : Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. : cf 4-puts.c
5-printf.c : Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. : cf 5-printf.c
6-size.c : Write a C program that prints the size of various types on the computer it is compiled and run on. : cf 6-size.c
