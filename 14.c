/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
/*tipos y estructuras*/
typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;

/*funciones*/
float peso_promedio(persona_t arr[], unsigned int longitud){
    unsigned int i=0;
    float sum=0,promedio;
    while (i<longitud){
        sum=sum+arr[i].peso;
        i++;
    }
    promedio=sum/longitud;
    return promedio;
}

persona_t persona_de_mayor_edad(persona_t arr[], unsigned int longitud){
    unsigned int i=0;
    int edadmayor=0,posicion;
    while (i<longitud)
    {
        if (arr[i].edad>edadmayor){
            edadmayor=arr[i].edad;
            posicion=i;
        }
        i++;
    }
    return arr[posicion]; 
}
persona_t persona_de_menor_altura(persona_t arr[], unsigned int longitud){
    unsigned int i=0;
    int posicion;
    float menoraltura=INT_MAX;
    while (i<longitud)
    {
        if (arr[i].altura<menoraltura){
            menoraltura=arr[i].altura;
            posicion=i;
        }
        i++;
    }
    return arr[posicion]; 
}

/*main*/
int main(void) {
    persona_t p1 = {"Paola", 21, 1.85, 75};
    persona_t p2 = {"Luis", 54, 1.75, 69};
    persona_t p3 = {"Julio", 40, 1.70, 80};
    unsigned int longitud = 3;
    persona_t arr[] = {p1, p2, p3};
    printf("El peso promedio es %f\n", peso_promedio(arr, longitud));
    persona_t p = persona_de_mayor_edad(arr, longitud);
    printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
    p = persona_de_menor_altura(arr, longitud);
    printf("El nombre de la persona con menor altura es %s\n", p.nombre);
    return 0;
}