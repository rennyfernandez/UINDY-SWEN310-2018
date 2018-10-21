#ifndef _myencoders_h_
#define _myencoders_h_

#include <stdio.h>

void prepend(char* s, const char* t);
void exclusiveOr(char* input_file, char* output_file, char* key_file);
void caesar(char* input_file, char* output_file, int key);

#endif