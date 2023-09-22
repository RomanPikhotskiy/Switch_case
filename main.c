#include <stdio.h>


void main()
{
    int a, b, s ;
    char command ;
    printf("2 numbers and + - * /: ");
    scanf("%d %d %c", &a, &b, &command);
    printf("answer: ");
    switch (command)
    {
    case '+':
        s = a + b;
        break;
    case '-':
        s = a - b;
        break;
    case '*':
        s = a * b;
        break;
    case '/':
        s = a / b;
        break;
    
    default:
        break;
    }
    printf("%d", s);
    printf("\n");
}