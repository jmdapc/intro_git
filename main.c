#include<stdio.h>

int main(){
    char name[100];
    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(name, sizeof(name), stdin);
    printf("Hola %s",name);
    return 0;
}