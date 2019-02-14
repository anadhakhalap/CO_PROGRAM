#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void decimal_hexadecimal(int num);
void binary_hexadecimal(int num);
void hexadecimal_decimal(char hex[]);
void hexadecimal_binary(char hex[]);
void octal_hexadecimal(int num);
void hexadecimal_octal(char hex[]);
void octal_binary(int num);
void binary_octal(int num);


int main()
{

 int num,ch,i;
 char hex[5];
	do
	{
		printf("\n1.Decimal to hexadecimal");
		printf("\n2.Binary to hexadecimal");
		printf("\n3.hexadecimal to decimal and binary");
		printf("\n4.Octal to hexadeciaml");
		printf("\n5. hexadecimal to octal");
		printf("\n6. Octal to binary");
		printf("\n7. Bianry to octal");
		printf("\n8.exit");
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
            case 4:printf("\n Enter a number in octal number");
                   for(i=0;i<5;i++)
                   {
                      scanf("%d",&num);
                  octal_hexadecimal(num);
                  }
                   break;
            case 5:printf("\nEnter a number in hexadecimal form ");
                   for(i=0;i<5;i++)
                   {
                      scanf("%d",&num);
                   hexadecimal_octal(hex[]);
                   }
                   break;
            case 6:printf("\nEnter a number in octal form ");
                     for(i=0;i<5;i++)
                     {
                      scanf("%d",&num);
                      octal_binary(num);
                      }
                   break;
            case 7:printf("\nEnter a number in binary form");
                    for(i=0;i<5;i++)
                      scanf("%d",&num);
                      binary_octal(num);
                   break;
			case 8:exit(1);
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







void binary_hexadecimal(int binaryval)
{
    int hexadecimalval = 0, i = 1, remainder;
      while (binaryval != 0)

    {


        remainder = binaryval % 10;

        hexadecimalval = hexadecimalval + remainder * i;

        i = i * 2;

        binaryval = binaryval / 10;

    }

    printf("Equivalent hexadecimal value: %d", hexadecimalval);

    return ;

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

/*void octal_hexadecimal(int num)
{
while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;

        place *= 1000;
    }

    /*
     * Binary to hexadecimal conversion
     */
    /*while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }

    strrev(hex);

    printf("Octal number: %lld\n", octal);
    printf("Hexadecimal number: %s", hex);


}*/

// Hexadecimal Number to Octal Number
void hexadecimal_octal(char hex[])
{
    int octal, bin;

    // convert HexaDecimal to Binary
    bin = hexadecimal_binary(hex);

    // convert Binary to Octal
    octal = binary_octal(bin);
    printf("\nThe octal equivalentr is %d",octal);

    return ;
}

void octal_binary(char num[i])
{
      while (octalnum[i])

    {

        switch (octalnum[i])

        {

        case '0':

            printf("000"); break;

        case '1':

            printf("001"); break;

        case '2':

            printf("010"); break;

        case '3':

            printf("011"); break;

        case '4':

            printf("100"); break;

        case '5':

            printf("101"); break;

        case '6':

            printf("110"); break;

        case '7':

            printf("111"); break;

        default:

            printf("\n Invalid octal digit %c ", octalnum[i]);

            return ;


}





void binary_octal(int binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    printf("\n Octal equyivalent of Binary is %d ",octalNumber);

    return ;
}

