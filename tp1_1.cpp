#include <iostream>

int main(){
    int a = 10;
    int *ap = &a;
    printf("El contenido del puntero: %d\n", *ap);
    printf("Direccion de memoria almacenada por el puntero: %p\n",ap);
    printf("Direccion de memoria de la variable: %p\n",&a);
    printf("Direccion de memoria del puntero: %p\n",&ap);
    printf("Tamanio de memoria utilizado: %d bytes\n",sizeof(a));
    std::cout<<"Hola mundo!";
    return 0;
}