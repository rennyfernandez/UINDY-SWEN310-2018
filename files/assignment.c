#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXWORDS	50000
#define MAXSTRING	100

/* 
 * this struct should hold the word and its count
 */

typedef struct _word {
		
} word;

/* 
 * this function should insert the word into an array
 * if not already in array, if in array then increment count
 */
void insert_word (word *words, int *n, char *s) {
	
}

/* 
 * this should compare the counts of two words 
 * should return 0 if the same +1 if b is larger
 * and -1 if a is larger
 */
int wordcmp (word *a, word *b) {
	
}

/*
 * return 1 if c is alphabetic (a..z or A..Z), 0 otherwise
 */
int is_alpha (char c) {
	
}

/* 
 * remove the i'th character from the string 
 */
void remove_char (char *s, int i) {
	
}

/* 
 * remove non-alphabetic characters from the string 
 */
void remove_non_alpha (char *s) {
	
}

/*
 * make all the letters in s lowercase 
 */
void make_lowercase (char *s) {
	
}

int main () {
	return 0;
}