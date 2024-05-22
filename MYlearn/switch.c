#include<stdio.h>
// 18.05.2024

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

    switch (op)
    {
        case '+':
        printf("sum : %d", num1+num2);
        break;
        
        case '-':
        printf("Diff : %d", num1- num2);
        break; 

        case '*':
        printf("product : %d",num1*num2);
        break;

        default :{
        printf("invalid operator\n");
        }   

    }
    
}