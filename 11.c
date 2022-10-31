/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
/*tipos y estructuras*/
typedef struct datos {
    float maximo;
    float minimo;
    float promedio;
}data;

/*funciones*/
void pedirArreglo(float a[], int n_max){
    int i;
    float c;
    i=0;
    while (i<n_max)
    {
        printf("valor en el lugar %d del arrreglo \n",i);
        scanf("%f",&c);
        a[i]=c;
        i=i+1;
    }
}
data stats(float a[], int tam){
    int i=0;
    float max, min,promedio,sum=0;
    data s;
    max=min=a[0];
    while (i<tam){
        if(max<=a[i]){
            max=a[i];
        }
            else if (min>=a[i]){
            min=a[i];
            }
        sum=sum+a[i];
        i++;
    }
    promedio=sum/tam;
    s.maximo=max;
    s.minimo=min;
    s.promedio=promedio;
    return s;
}
/*main*/
int main (void){
     int tam;
     float a[1000];
     data s;
    printf("Brother, decime el largo de tu arreglo y despuès te pido los elementos del mismo UwU: ");
    scanf("%d",&tam);
    pedirArreglo (a,tam);
    s=stats(a,tam);
    printf("maximo=%f minimo=%f promedio=%f\nUn gusto mi loco\n",s.maximo,s.minimo,s.promedio);
    return 0;
}