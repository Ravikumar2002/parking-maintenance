#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void bus();
void cycle();
void riksha();
void showdetails();
void delete();
int menu();
int no_of_bus=0,no_of_cycle=0,no_of_riksha=0,amount=0,count=0;

int main(){
    while(1){
  switch (menu())
  {
  case 1:
    bus();
    break;
  case 2:
   cycle();
   break;
   case 3:
   riksha();
   break;
   case 4:
   showdetails();
   break;
   case 5:
   delete();
   
   case 6:
   exit(0);
   
   default:
   printf("invalid choice\n");

  }
    }
    return 0;
}
void bus(){
     printf("Entry sucessfull:\n");
    no_of_bus++;
    amount+=50;
    count++;

}
void cycle(){
     printf("Entry sucessfull:\n");
    no_of_cycle++;
    amount+=10;
    count++;
}
void riksha(){
    printf("Entry sucessfull:\n");
    no_of_riksha++;
    amount+=30;
    count++;
}
int menu(){
    int ch;
  printf("1:Enter the bus\n");
  printf("2:Enter the cycle\n");
  printf("3:Enter the riksha\n");
  printf("4:Enter the show status\n");
  printf("5:Enter the delete data\n");
  printf("6:Enter the exit\n");
  
  printf("Enter the choice\n");

  scanf("%d",&ch);
  return ch;

}
void showdetails(){
    printf("number of bus = %d\n",no_of_bus);
    printf("number of cycle = %d\n",no_of_cycle);
    printf("number of riksha= %d\n",no_of_riksha);
    printf("Total number of vichele =%d\n",count);
    printf("Total amount of gain =%d\n",amount);
}
void delete(){
    no_of_bus=0;
    no_of_cycle=0;
    no_of_riksha=0;
    amount=0;
    count=0;
}