/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
/*tipos y estructuras*/

/*funciones*/

void imprimeArreglo(int a[], int n_max){
    int i;
    i=0;
    while (i<n_max){
        printf ("valor %d = %d \n",i,a[i]);
        i=i+1;
    }
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

/*main*/
int main (void){
    int n_max,a[60];
    printf("Mi loco, me das ya mismo el largo del arreglo\n");
    scanf("%d",&n_max);
    pedirArreglo(a,n_max);
    imprimeArreglo (a,n_max);
    return 0;
}