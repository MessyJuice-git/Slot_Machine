#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int max,min,mlines,rows,cols,result,deposit,bet;
  int A,B,C,D,i,x;
  char cont;
  printf("Enter deposit of cash:\n ");
  scanf("%d",&deposit);
  printf("How many rows do you want(1-3):\n ");
  scanf("%d",&rows);
  if(rows<1 || rows>3)
  {
    printf("INVALID, PICK A NUMBER BETWEEN 1 AND 3");
    return 0;
  }
  printf("How much do u wanna bet on each row:\n ");
  scanf("%d",&bet);
  if(bet*rows > deposit)
  {
    printf("INVALID,Not enough cash deposited for bet");
    return 0;
  }
  else
  {
    deposit=deposit-bet*rows;
  }
  x=rows*3;
  int ran[x];
  for(i=0;i<x;i++)
  {
    srand(time(NULL)+i*100);
  result = rand()%4 +65;
  ran[i]=result;
  }
  if(rows==1){
  printf("%c | %c | %c",ran[0],ran[1],ran[2]);
  }
  else if(rows==2){
    printf("%c | %c | %c",ran[0],ran[1],ran[2]);
    printf("\n%c | %c | %c",ran[3],ran[4],ran[5]);
  }
  else if(rows==3){
    printf("%c | %c | %c",ran[0],ran[1],ran[2]);
    printf("\n%c | %c | %c",ran[3],ran[4],ran[5]);
    printf("\n%c | %c | %c",ran[6],ran[7],ran[8]);
  }
  if(ran[0]==ran[1] & ran[1]==ran[2] )
  {
    switch (ran[0])
    {
    case 65:
    deposit= deposit+bet*5;
    case 66:
    deposit= deposit+bet*4;
    case 67:
    deposit= deposit+bet*3;
    case 68:
    deposit= deposit+bet*2;
    }
  }
  if(ran[3]==ran[4] & ran[4]==ran[5] )
  {
    switch (ran[3])
    {
    case 65:
    deposit= deposit+bet*5;
    case 66:
    deposit= deposit+bet*4;
    case 67:
    deposit= deposit+bet*3;
    case 68:
    deposit= deposit+bet*2;
    } 
  }
  if(ran[6]==ran[7] & ran[7]==ran[8] )
  {
    switch (ran[6])
    {
    case 65:
    deposit= deposit+bet*5;
    case 66:
    deposit= deposit+bet*4;
    case 67:
    deposit= deposit+bet*3;
    case 68:
    deposit= deposit+bet*2;
    } 
  }
  if((ran[0]==ran[1] & ran[1]==ran[2]) || (ran[3]==ran[4] & ran[4]==ran[5]) || (ran[6]==ran[7] & ran[7]==ran[8])){
        printf("\nCONGRATS YOU WON!!!\n");
    printf("New Balance is: ", deposit);   
  }
  else  {
    printf("\nOops, Too Bad!\n");
    printf("New Balance is %d", deposit);
  }
printf("\nWould you like to try again[Y/N]: ");
scanf("\n%c",&cont);
if(cont=='Y' || cont=='y'){
  while (cont =='Y' || cont=='y' )

    {
       printf("How many rows do you want(1-3):\n ");
  scanf("%d",&rows);
  if(rows<1 || rows>3)
  {
    printf("INVALID, PICK A NUMBER BETWEEN 1 AND 3");
    return 0;
  }
  printf("How much do u wanna bet on each row:\n ");
  scanf("%d",&bet);
  if(bet*rows > deposit)
  {
    printf("INVALID,Not enough cash deposited for bet");
    return 0;
  }
  else
  {
    deposit=deposit-bet*rows;
  }
  x=rows*3;
  int ran[x];
  for(i=0;i<x;i++)
  {
    srand(time(NULL)+i*100);
  result = rand()%4 +65;
  ran[i]=result;
  }
  if(rows==1){
  printf("%c | %c | %c",ran[0],ran[1],ran[2]);
  }
  else if(rows==2){
    printf("%c | %c | %c",ran[0],ran[1],ran[2]);
    printf("\n%c | %c | %c",ran[3],ran[4],ran[5]);
  }
  else if(rows==3){
    printf("%c | %c | %c",ran[0],ran[1],ran[2]);
    printf("\n%c | %c | %c",ran[3],ran[4],ran[5]);
    printf("\n%c | %c | %c",ran[6],ran[7],ran[8]);
  }
  if(ran[0]==ran[1] & ran[1]==ran[2] )
  {
    switch (ran[0])
    {
    case 65:
    deposit= deposit+bet*5;
    case 66:
    deposit= deposit+bet*4;
    case 67:
    deposit= deposit+bet*3;
    case 68:
    deposit= deposit+bet*2;
    }
  }
  if(ran[3]==ran[4] & ran[4]==ran[5] )
  {
    switch (ran[3])
    {
    case 65:
    deposit= deposit+bet*5;
    case 66:
    deposit= deposit+bet*4;
    case 67:
    deposit= deposit+bet*3;
    case 68:
    deposit= deposit+bet*2;
    } 
  }
  if(ran[6]==ran[7] & ran[7]==ran[8] )
  {
    switch (ran[6])
    {
    case 65:
    deposit= deposit+bet*5;
    case 66:
    deposit= deposit+bet*4;
    case 67:
    deposit= deposit+bet*3;
    case 68:
    deposit= deposit+bet*2;
    } 
  }
  if((ran[0]==ran[1] & ran[1]==ran[2]) || (ran[3]==ran[4] & ran[4]==ran[5]) || (ran[6]==ran[7] & ran[7]==ran[8])){
        printf("\nCONGRATS YOU WON!!!\n");
    printf("New Balance is: ", deposit);   
  }
  else  {
    printf("\nOops, Too Bad!\n");
    printf("New Balance is %d", deposit);
  }
  printf("\nWould you like to try again[Y/N]: ");
  scanf("\n%c",&cont);
}
}
if(cont=='N' || cont =='n')
{
printf("Thank You For Playing!!");
}
}

