/**
 * Header file for the tokenizer project
 * @author Kevin Filanowski
 * @version 03/06/2018
 */

/* Constants */
#define LINE 100
#define TSIZE 20
#define TRUE 1
#define FALSE 0

/**
 * Operator Constants. Some are unused, but are kept here for informational or
 * further improvement purposes.
 **/
#define ADD_OP '+'
#define SUB_OP '-'
#define MULT_OP '*'
#define DIV_OP '/'
#define LEFT_PAREN '('
#define RIGHT_PAREN ')'
#define EXPON_OP '^'
#define ASSIGN_OP '='
#define LESS_THAN_OP '<'
#define LESS_THAN_OR_EQUAL_OP "<="
#define GREATER_THAN_OP '>'
#define GREATER_THAN_OR_EQUAL ">="
#define EQUALS_OP "=="
#define NOT_OP '!'
#define NOT_EQUALS_OP "!="
#define SEMI_COLON ';'
#define INT_LITERAL

/** Helper methods for the tokenizer project. **/
void file_write_token_error(FILE *out_file);
void file_write_token(int *start, int *count, char *token_p, FILE *out_file);
void get_token(char *token_p);
void squeeze_together(char *char_p);
void string_after_token(char *token_p);
