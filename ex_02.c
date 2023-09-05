#include <stdio.h>
int age;
int *address = &age;
*address = 37;
printf("%u", *address);