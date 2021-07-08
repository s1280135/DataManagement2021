#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,j,n,sum=0;
  char name[50];
  
  srand((unsigned)time(NULL));
	
  for(n=0;n<2;++n){
    
    i = rand()%6+1;
    
    j = rand()%6+1;
    
    sum=i+j;
  }

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  printf("Rolling the dice...\n");
  printf("Dice 1：%d\n",i);
  printf("Dice 2：%d\n",j);
  printf("Total value: %d\n",sum);
  
  return 0;
  
}
