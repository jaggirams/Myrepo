#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void summer(int []);

void main(){

int i=0,sum[3],**c=0;

summer(sum);

for(i=0; i<=3; i++){
	c=((sum+i));
	printf("sum[%d]=%d \n",i,**c);
}


}


void summer( int sum []){

int i=0,temp[3];
	temp[0]=1;
	temp[1]=2;
	temp[2]=3;
	temp[3]=4;
	

	sum=temp;

}
