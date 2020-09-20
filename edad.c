#include<stdio.h>
#include<stdlib.h>

int main(){
    int year, month, age;
    printf("¿Cuál es tu año de nacimiento?");
    scanf("%d",&year);
    printf("¿Cuál es tu mes (número) de nacimiento?");
    scanf("%d",&month);
    age = 2020-year;
    printf("Tu edad es: %d",age);
    //
    if(age<18 && month >9){
        printf("Es menor de edad\n");
    }else{
        printf("Es mayor de edad\n");
    }

    return 0;
}