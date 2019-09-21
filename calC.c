#include <stdio.h>

int main()
{
    float a,b,c;
    char n;
    printf("enter 2 no's\n");
    scanf("%f%f",&a,&b);
    printf("\enter your choice +,-,*,/\n");
    scanf("%c",&n);

    switch(n)
    {
    case '+':
        c=a+b;
        printf("addition is %f",c);
        break;
    case '-':
        c=a-b;
        printf("subtraction is %f",c);
        break;
    case '*':
        c=a*b;
        printf("multiplication is %f",c);
        break;
    case '/':
        c=a/b;
        printf("division is %f",c);
        break;
    default:
        printf("wrong input");

    }

    return 0;
}
