#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejercicio1() {
    int J = 15;
    int *p = &J;
    printf("Ejercicio 1: J = %d, *p = %d\n", J, *p);
}
void ejercicio2() {
    int J = 10;
    int *p = &J;
    *p = 20;
    printf("Ejercicio 2: J = %d\n", J);
}
void ejercicio3() {
    int arr[3] = {1, 2, 3};
    int *p = arr;
    printf("Ejercicio 3: Primer elemento = %d\n", *p);
}
void ejercicio4() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("Ejercicio 4: Array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}


struct Persona {
    char nombre [20];
    int edad;
};
void ejercicio5() {
    struct Persona p1 = {"yuri", 20};
    struct Persona *ptr = &p1;
    printf("Ejercicio 5: %s tiene %d años\n", ptr->nombre, ptr->edad);
}


void ejercicio6() {
    int A = 25;
    int *p = &A;
    int **pp = &p;
    printf("Ejercicio 6: A = %d, *p = %d, **pp = %d\n", A, *p, **pp);
}
void disminuir(int *n) {
    (*n)--;
}
void ejercicio7() {
    int x = 15;
    disminuir(&x);
    printf("Ejercicio 7: x disminuyendo  = %d\n", x);
}
void ejercicio8 () {
    int *p = (int*)malloc(sizeof(int) * 4);
    if (p != NULL) {
        p[0] = 100; p[1] = 200; p[2] = 300; p[3] = 400 ;
        printf("Ejercicio 8: %d %d %d %d\n", p[0], p[1], p[2], p[3]);
        free(p);
    }
}
void ejercicio9() {
    char *nombres[4] = {"Ana", "carlos", "Estefania"};
    printf("Ejercico 9: ");
    for(int i = 0; i < 4; i++) {
        printf("%s ", nombres[i]);
    }
    printf("\n");
}

int multiplicacion(int a, int b) { return a * b; }
int divicion(int a, int b) { return a / b; }
void ejercicio10() {
    int (*operacion)(int, int);
    operacion = multiplicacion;
    printf("Ejercicio 10: Suma = %d\n", operacion(2, 3));
    operacion = divicion;
    printf("Ejercicio 10: Resta = %d\n", operacion(5, 2));
}
int main() {

    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    ejercicio8();
    ejercicio9();
    ejercicio10();
    return 0;

}