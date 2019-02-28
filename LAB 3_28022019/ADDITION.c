#include<stdio.h>
#include<stdlib.h>

int convretdec_bin(int );

int convertbin_dec(int );

int main()
{
   int num1,num2,n1,n2;
   int sum,diff,sum1,diff1;
   printf("\nEnter first number: ");
   scanf("%d",&num1);
   printf("\nEnter second number:");
   scanf("%d",&num2);

  n1=convertdec_bin(num1);
   n2=convertdec_bin(num2);

   printf("\nFirst number in binary format is %d",n1);
   printf("\nSecond numberrin binary format is %d",n2);

   sum=n1+n2;
   diff=n1-n2;

   printf("\nSum in binary format is %d ",sum);
   printf("\nDifference in binary is %d ",diff);

   sum1=convertbin_dec(sum);
   diff1=convertbin_dec(diff);


   printf("\nSum in decimal format is %d ",sum1);
   printf("\nDifference in decimal is %d ",diff1);

   return 0;



}

int convertdec_bin(int n)
{

    int binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;



}



int convertbin_dec(int n)
{
     int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
