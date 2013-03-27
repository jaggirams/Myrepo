#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void number(int);


void main(){

	int num=0;

	number(num);

	number(num);
	number(num);


}


void number(int num){

	static int i=0;
	i++;
	printf("%d\n",num+i);

}

