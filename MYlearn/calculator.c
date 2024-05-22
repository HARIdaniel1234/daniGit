#include<stdio.h>
// 15.05.2024


 void main ()

{

    int num1,num2;
    char op ;
 
    printf("Enter num1 : ");
    scanf("%d",&num1);

    printf("Enter num2 :  ");
    scanf("%d",&num2);

    printf("Enter operator: ");
    scanf("\n%c",&op);
    
    if (op == '+')
    {
        printf("sum: %d\n", num1+ num2);
    }

    else if (op == '-')

        printf("Diff : %d\n", num1-num2);
    
     else if (op == '*') {
        printf("product: %d\n", num1 * num2);
        }
     else if ( op == '%')
     {
        printf("Quotient: %d\n",num1%num2);
     }    
    
     else {
        printf("invalid operator\n");
     }


     }        