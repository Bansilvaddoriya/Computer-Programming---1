
#include <stdio.h>
int main()
{
    float num1,num2,sum,difference,product,quotient;
    printf("enter first number:");
    scanf("%f",&num1);
    printf("enter second number:");
    scanf("%f",&num2);
    sum= num1 + num2;
    printf("addition: %.2f + %.2f = %.2f\n",num1,num2, sum);
    difference = num1 -num2;
    printf("subtraction: %.2f -%.2f =%.2f\n",num1,num2,difference);
    product = num1* num2;
    printf("multiplication: %.2f* %,2f = %.2f\n",num1,num2,product);
    if (num2 != 0){
        quotient =num1 /num2;
        printf("division: %.2f / %.2f\n",num1,num2,quotient);
    } else {
        printf("division not possible (cannot divide by zero)\n");
    }
    return 0;
}
