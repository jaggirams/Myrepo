#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include"quick_sort-numeric.h"
//void quicker_sort( int , int , int *);
//void swap(int , int , int *);

void main(){
	
	int array[100];
	int i,size, lower=0, upper=0;

	printf("\n Enter the elements # of the array ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
		scanf("%d",(array+i));
	printf("\n the array is \n");
	
	for(i=0;i<size;i++)
                printf("%d\t",*(array+i));
	printf("\n");
	
	lower=0;
	upper=size-1;

	quicker_sort(lower,upper,array);
	
	printf("\n The sorted array is \n");
	for(i=0;i<size;i++)
                  printf("%d\t",*(array+i));
          printf("\n");

	
}

/***********************************************************************************************

void quicker_sort( int lower, int upper, int* array  ){

  if(upper>lower){
	int pivot=*(array+lower);
	int temp=0;
 	int temp_upper=upper;
	int new_lower=lower+1;

	while(new_lower<=temp_upper){
		while(*(array+new_lower) < pivot)
			new_lower++;
		while(*(array+temp_upper) > pivot)
			temp_upper--;
		if(new_lower<temp_upper)
			swap(new_lower, temp_upper, array);
	}
	
	swap(temp_upper,lower,array);
	
	quicker_sort(lower, temp_upper,array);
	quicker_sort(temp_upper+1,upper,array);
    
  }
}*/
/*********************************************************************************************************
  void swap( int new_lower , int temp_upper , int array []){
	
	int temp=0;

	temp=*(array+new_lower);
	*(array+new_lower)=*(array+temp_upper);
	*(array+temp_upper)=temp;
}*/
