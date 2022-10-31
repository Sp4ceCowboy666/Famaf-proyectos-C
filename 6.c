/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
/*tipos y estructuras*/
/*funciones*/
void imprimesumatoria(int a){
        printf ("valor %d \n",a);
}
void pedirArreglo(int a[], int n_max){
    int i;
    int c;
    i=0;
    while (i<n_max)
    {
        printf("valor en el lugar %d del arrreglo \n",i);
        scanf("%d",&c);
        a[i]=c;
        i=i+1;
    }
}
int sumatoria(int a[], int tam){
    int i;
    int c;
    c=0;
    i=0;
    while (i<tam){
        c=c+a[i];
        i=i+1;
    }
    return c;
}
/*main*/
int main (void){
    int tam,a[1000];
    printf("sale esa sumatoria capo?\nDecime la cantidad de numeros, genio: ");
    scanf("%d",&tam);
    pedirArreglo (a,tam);
    imprimesumatoria(sumatoria(a,tam));
}