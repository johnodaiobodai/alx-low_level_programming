#!/bin/bash
#include <stdio.h>

int main(void);
{
	char _c;
	int _i;
	long int _l;
	long long int _ll;
	float _d;

	printf("Size of char: %lu byte(s)\n",sizeof(_c));
	printf("Size of int: %lu byte(s)\n",sizeof(_i));
	printf("Size of long int: %lu byte(s)\n",sizeof(_l));
        printf("Size of long long int: %lu byte(s)\n",sizeof(_ll));
	printf("Size of float: %lu byte(s)\n",sizeof(_d));
	return(0);
}
