#ifndef DEC_MAIN_H
#define DEC_MAIN_H

#include <string>
#include <stdio.h>
#include <limits.h>
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);

#endif 
