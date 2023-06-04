#include <stdio.h>

int main(){
int a = 10, b = 20;
int *p;

p = &a;
*p = b;
printf("%d",a);
}

