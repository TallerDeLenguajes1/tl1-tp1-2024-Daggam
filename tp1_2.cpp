#include <stdio.h>
float cuadrado(float a);
void cuadradoVoid(float *a);
void mostrarDireccion(float *a);
void invertir(float *a, float *b);
void orden(float *a, float *b);

int main(){
    float a,b;
    printf("Ingrese dos valores numericos: ");
    scanf("%f%f",&a,&b);

    printf("El cuadrado de a: %.2f\n",cuadrado(a));
    cuadradoVoid(&b);
    printf("El cuadrado de b: %.2f\n",b);
    
    printf("\n-- Variable a --\n");
    mostrarDireccion(&a);
    printf("-- Variable b --\n");
    mostrarDireccion(&b);
    
    printf("\n...Invertimos las variables...\n");
    invertir(&a,&b);
    
    printf("\n-- Variable a --\n");
    mostrarDireccion(&a);
    printf("-- Variable b --\n");
    mostrarDireccion(&b);
    

    printf("\n...Invertimos el orden de las variables segun su valor...\n");
    orden(&a,&b);
    
    printf("\n-- Variable a --\n");
    mostrarDireccion(&a);
    printf("-- Variable b --\n");
    mostrarDireccion(&b);
    
    return 0;
}



float cuadrado(float a){
    return a*a;
}
void cuadradoVoid(float *a){
    (*a)*=(*a);
}
void mostrarDireccion(float *a){
    printf("Direccion de la variable: %p\n",a);
    printf("Contenido de la variable: %.2f\n",*a);
}
void invertir(float *a, float *b){
    float c = *a;
    *a = *b;
    *b = c;
}
void orden(float *a, float *b){
    if(*a > *b) invertir(a,b);
}