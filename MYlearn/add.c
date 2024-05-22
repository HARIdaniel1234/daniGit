# include<stdio.h>
// 21.05.2024

void main ()
{
    int a,b,c;
    a = 45;
    b = 7;
    c = 12;
    
    if (a > b && a > c) 
    {
        printf("a is the greatest");
    } 
    
    else if (b > a && b > c) 
    {
        printf("b is the greatest");
    } 
    
    else if (c > a && c > b) 
    {
        printf("c is the greatest");
    } 
    
    else 
    {
        printf("There is a  invalid input");
    }
}