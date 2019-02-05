#include <stdio.h>

int main() {

printf("The size of int is %lu \n",sizeof(int));

printf("The size of char is %lu \n", sizeof(char));

printf("The size of long is %lu \n", sizeof(long));

printf("The size of float is %lu \n", sizeof(float));

printf("The size of double is %lu \n", sizeof(double));

printf("The size of unsigned int is %lu \n", sizeof(unsigned int));

printf("The size of unsigned char is %lu \n", sizeof(unsigned char));

printf("The size of unsigned long is %lu \n", sizeof(unsigned long));

printf("The size of int* is %lu \n", sizeof(int*));

printf("The size of char* is %lu \n", sizeof(char*));

printf("The size of long* is %lu \n", sizeof(long*));

printf("signed int has same size as unsigned int because they can hold the same total number of values, but half of the signed ints are negative. \n pointers on 64-bit machines should always hold 8 bytes. After all, a 64-bit processor should have 2^8 in each memory location.");
}
printf("This is the experimental part that caused me to create a branch");
