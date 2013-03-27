#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char * atos_s(int);
//extern char temp[100];a
char temp[100];
void main(){
	
	int number, j=0;
	char *addr;
	
	addr=(char *) calloc(100,sizeof(char));
	
	printf("\n Enter the number :");
	scanf("%d",&number);
	
	addr=atos_s(number);

	printf("\n the number is \n");
	 for( j=0;*(addr+j) !='\0';j++)
                printf("%d",*(addr+j));

	//puts(addr);

}


char * atos_s(int ent_num){
	
	int i=0,j=0,num_temp[100];
//	char temp[100];
//	char *temp;
//	temp= (char *) calloc(100,sizeof(char));
	bzero(temp,100);	
	while((ent_num/10) !=0){
		num_temp[i]=(ent_num%10);
	//	printf("%d",num_temp[i]);
		i++;
		ent_num=ent_num/10;
	}

	num_temp[i]=ent_num%10;
	

	while(i>=0){

	 temp[j]=  num_temp[i];
	i--;
	j++;

	}
	temp[j]='\0';
	for(j=0;temp[j] !='\0';j++)
		printf("%d",temp[j]);
	//puts(temp);
return(temp);

}
		
