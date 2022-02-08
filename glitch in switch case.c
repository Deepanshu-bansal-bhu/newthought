#include <stdio.h>

int main() {
    char i;
    int a,b;
    printf("enter any two integers\n");
    scanf("%d\n%d",&a,&b);
    printf("enter + or / or - or *\n");
    scanf("%c",&i);
    switch (i)
    {
        case '+':
        printf("%da+b=",a+b);
        break;
        case '-':
        printf("%da-b=",a-b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '*':
        printf("%d",a%b);
        break;
    }
    return 0;
}

