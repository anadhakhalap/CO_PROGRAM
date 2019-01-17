#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void decimal_hexadecimal(int num);
void binary_hexadecimal(int num);
void hexadecimal_decimal_binary(int num);

int main()
{

 int num,ch;
	do
	{
		printf("\n1.Decimal to hexadecimal");
		printf("\n2.Binary to hexadecimal");
		printf("\n3.hexadecimal to decimal and binary");
		printf("\n4.exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the decimal number: ");
			       scanf("%d",&num);
			       decimal_hexadecimal(num);
			       break;
			case 2:printf("Enter the binary number: ");
			       scanf("%d",&num);
			       binary_hexadecimal(num);
			       break;
			case 3:printf("\nEnter a number in hexadecimal form: ");
			       scanf("%d",&num);
			       hexadecimal_decimal_binary(num);
			case 4:exit(1);
			default:printf("Invalid choice!!!");
		}
	}while(ch!=5);
	return(0);
}

void decimal_hexadecimal(int num)
{
  int i=0,temp=0,n,j;
   n=num;
  char hexadecimal[10];
  while(n!=0)
  {
     temp=n%16;
     if(temp<10)
     {
        hexadecimal[i] = temp + 48;
        i++;
     }
     else
     {
        hexadecimal[i]=temp+55;
        i++;
     }
     n=n/16;
  }
  for(j=i-1;j>=0;j--)
  {
     printf("%c\t",hexadecimal[j]);
  }
}

void binary_hexadecimal(int num)
{





}


void hexadecimal_decimal_binary(int num)
{




}
