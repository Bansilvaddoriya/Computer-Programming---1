#include<stdio.h>
int main() {
int a,b;
printf("ënter two numbers: ");
scanf("%d %d",&a, &b);
if (a>b){
    printf("largest = %d\n", a);
    printf("smallest = %d\n",b);
} else {
printf("largest = %d\n", b);
printf("smallest = %d\n", a);
}
return 0;
}
