/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
/*funciones*/
void pedirArreglo(int a[], int n_max)
{
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

int minimo_pares(int a[], int tam)
{
    int i=0, n=INT_MAX;
    while (i<tam){
        if ((a[i]%2)==0){
            n= min (n,a[i]);
        }
        i++;
    }
    return n;
}
int minimo_impares(int a[], int tam)
{
    int i=0, n=INT_MAX;
    while (i<tam){
        if (a[i]%2==1){
            n= min (a[i],n);
            }
        i++;
    }
    return n;
}

/*main*/
int main (void)
{
    int a[1000], tam;
    printf("Brotherrr, el largo del arreglo seguido de los elementos, otra vez, como 5ta vez en el practico x.x\n");
    scanf("%d",&tam);
    pedirArreglo(a,tam);
    printf("mi loco, el minimo de los impares es %d, los impares %d y de ambos %d\n",minimo_impares(a,tam),minimo_pares(a,tam),min(minimo_impares(a,tam),minimo_pares(a,tam)));

    return 0;
}