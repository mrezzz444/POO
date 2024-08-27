#include <stdio.h>
#include <stdlib.h>

struct estudiante { // Definir la estructura fuera de main
    unsigned int edad;
    unsigned int mat;
    char nombre[25];
    struct estudiante *sig; // Puntero a la siguiente estructura
};

void chido();

int main() {
    struct estudiante mi_instancia; // Instancia de la estructura
    printf("Introduce la edad: ");
    scanf("%u", &mi_instancia.edad); // Accediendo a la edad de mi instancia
    printf("Introduce el nombre: ");
    scanf("%24s", mi_instancia.nombre); // No se usa & porque nombre ya es un puntero al primer elemento del arreglo

    struct estudiante *arreglo = malloc(sizeof(struct estudiante) * 25); // Asignar memoria para 25 estructuras

    // Aquí puedes usar 'arreglo' como un array de 25 elementos de 'struct estudiante'
    // Por ejemplo, inicializando los elementos:



    // Liberar la memoria asignada
    free(arreglo);

    chido();

    return 0;
}

void chido() {
    int num1, num2;
    num1 = 4; num2 = 3;

    float result = (float)num1 / num2; // Convertir num1 a float para obtener un resultado en punto flotante
    printf("%f\n", result);
}
