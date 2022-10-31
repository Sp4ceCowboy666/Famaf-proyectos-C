/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
/*funciones*/
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
void imprimeArreglo(int a[], int n_max){
    int i;
    i=0;
    while (i<n_max){
        printf ("valor %d = %d \n",i,a[i]);
        i=i+1;
    }
}
void intercambiar(int a[], int i, int j){
    int aux;
    aux = a[i];
    a[i]=a[j];
    a[j]=aux;
}
int main (void){
    int tam,y,z,a[1000];
    printf("Pibe, dame el tamaño del arreglo, te parece?\n");
    scanf("%d",&tam);
    printf("Buenisimo, ahora me vas a dar los valores del arreglo\n");
    pedirArreglo (a,tam);
    printf("Ahora me vas a dar los lugares que queres intercambiar, acordate que arranca desde '0' espero que te quede claro\n");
    scanf("%d%d",&y,&z);
    assert (y<tam&&z<tam);
    intercambiar(a,y,z);
    imprimeArreglo(a,tam);

    return 0;
}