#include <stdio.h>

int main (){
    float a, b, c;
    char oparation;
   
    printf ("Enter oparation : ");
    scanf ("%c", &oparation);
    printf("%c\n", oparation);
    printf("Enter value of a : ");
    scanf("%f", &a);
    printf ("Enter value of b : ");
    scanf ("%f", &b);
    
    switch (oparation) {
        case '+':
        c = a + b;
        printf ("Addition : %f", c);
        break;
        
        case '-':
        c = a - b;
        printf("Substraction : %f", c);
        break;
        
        case '*':
        c = a * b;
        printf("Multiplication : %f", c);
        break;
        
        case '/':
        c = a / b;
        printf("Divison : %f", c);
        break;
        
        case '%':
        c = (a * b)/100;
        printf("Percentage : %.2f", c);
        break;
        
    }
     
return 0;    
}