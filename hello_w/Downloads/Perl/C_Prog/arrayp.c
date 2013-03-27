#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){

char * ptr[10], *ptr1[10][10],*ptr3[10][10];
bzero(*ptr1,100);
*ptr[0]='h';
/**ptr1[0]="he";
*(*(ptr1)+1)="i";
*ptr1[1]="isabela";
*(*(ptr1+1))="isabela";
*ptr1[2]="Jaya";
ptr3=ptr1[2];
*/



printf("%c\n",*ptr[0]);
/*printf("%c\n",(*ptr1[1][2]));
printf("%c\n",*(*(*(ptr1+1)+2)));
printf("%s \n",*(*(ptr1)+1));
printf("ptr1:%d \n",ptr1);
printf("*ptr1:%d \n",*ptr1);
printf("**ptr1:%s\n",**ptr1);
printf("***ptr1:%c \n",***ptr1);
printf("2nd string:%s\n",*(*(ptr1+2)));
printf("2nd string:%s\n",**(ptr3));*/
}

