#include<stdio.h>
#include<stdlib.h>

int main(){
    int year, month, age;
    printf("¿Cuál es tu año de nacimiento?");
    scanf("%d",&year);
    age = 2020-year;
    printf("Tu edad es: %d",age);
}