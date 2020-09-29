#include<stdio.h>

int main(){
    char name[100];
    unsigned int age;
    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(name, sizeof(name), stdin);
    printf("Hola %s",name);
    printf("Edad: ");
    scanf("%u",&age);
    printf("Vas a cumplir %u", age + 1);
    
    return 0;
}