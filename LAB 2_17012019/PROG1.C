#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void decimal_hexadecimal(int num);
void binary_hexadecimal(int num);
void hexadecimal_decimal(char hex[]);
void hexadecimal_binary(char hex[]);

int main()
{

 int num,ch,i;
 char hex[5];
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
			       for(i=0;i<5;i++)
			           scanf("%c",&hex[i]);
			       hexadecimal_decimal(hex);
                   hexadecimal_binary(hex);
                   break;
			case 4:exit(1);
			default:printf("Invalid choice!!!");
		}
	}while(ch!=5);
	return(0);
}

void decimal_hexadecimal(int num)//COORRCT CODE
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
     printf("%c",hexadecimal[j]);
  }
}







void binary_hexadecimal(int num)
{
  int i=0,temp=0;






}




void hexadecimal_decimal(char hexVal[])
{
    int len = strlen(hexVal);
    // Initializing base value to 1, i.e 16^0
    int base = 1;
    int dec_val = 0;
    // Extracting characters as digits from last character
    for (int i=len-1; i>=0; i--)
    {

        if (hexVal[i]>='0' && hexVal[i]<='9')
        {
            dec_val += (hexVal[i] - 48)*base;

            // incrementing base by power
            base = base * 16;
        }
        else if (hexVal[i]>='A' && hexVal[i]<='F')
        {
            dec_val += (hexVal[i] - 55)*base;

            // incrementing base by power
            base = base*16;
        }
     }
    printf("\nThe decimal equivallent of hexadecimal is %d ",dec_val);
     return;
}



void hexadecimal_binary(char hexVal[])
{
   printf("\n the binary equivalent of hexadecimal is ");
   int i;
    for(i=0;i<hexVal[i];i++)
    {

      switch (hexVal[i])
      {
         case '0':printf("0000");
                  break;

         case '1':printf("0001");
                   break;
         case '2':printf("0010");
                   break;
         case '3':printf("0011");
                     break;

         case  '4':printf("0100");
                 break;

         case '5':printf("0101");
                   break;
         case '6':printf("0110");

                   break;
         case '7':printf("0111");
                  break;
         case '8':printf("1000");
                   break;

         case '9':printf("1001");
                     break;
         case 'A':
         case 'a':printf("1010");
                   break;

         case 'B':
         case 'b':printf("1011");
                    break;

         case 'C':
         case 'c':printf("1100");
                      break;
         case 'D':
         case 'd':printf("1101");
                   break;
         case 'E':
         case 'e':printf("1110");
                   break;
         case 'F':
         case 'f':printf("1111");
                  break;

     }

     }
     return;

}








