Author - Kevin Filanowski
Version - 03/06/18 - 1.0.0

TABLE-OF-CONTENTS:
------------------
Description
Contents
Compiling
How-To
Lexeme File
------------------

DESCRIPTION:
This program will take a test file as input, where the text file contains many operators, often used in mathematics, and it will write to another file separating all of the lexemes line by line. It is essentially a lexical analyzer, and it will also detect errors in the file as well. It is extremely flexible, ignoring spaces, new lines, and many other escape characters that could be before, in between, or after the lexemes.

CONTENTS:
tokenizer.c : The main method of the program. This is what will be called when the program is to be run.
tokenizer.h : The header file containing the outline of the constants and functions used in tokenizer.
input.txt : An example of 

COMPILING:
To compile the program, ensure that the two files, tokenizer.c and tokenizer.h are all in the same directory. Then run the following command to compile it to an executable named tokenizer:

gcc -Wall tokenizer.c -o tokenizer

where -Wall displays extra warnings if any, and -o names the executable.

HOW-TO:
Usage: tokenizer input_file.txt output_file.txt
or
./tokenizer input_file.txt output_file.txt

Where input_file.txt are the lexemes and such and output_file.txt will be the listed lexemes.

Lexeme File:
The input_file.txt can be any length, and all escape characters are allowed, such as new line, whitespace, tabs, etc. A statement is ended with a semicolon (;), and a statement will continue until a semicolon is read. Any errors will be specifically written into this file as well, the errors are characters that are not included in the dictionary of the lexical analyzer. Order of the lexemes does not matter. See input.txt for a possible example.
