/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
/*tipos y estructuras*/
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

bool existe_positivo(int a[], int tam){
    int i,c;
    i=0;
    c=0;
    while (i<tam){
    if (a[i]>0){
        c=1;
        return c;
    }
    else {
        i=i+1;
    }
    }
    return c;
}
bool todos_positivos(int a[], int tam){
    int i,c;
    i=0;
    c=1;
    while (i<tam){
        if (a[i]<=0){
            c=0;
            return c;
        }
        else{
        i=i+1;
        }
    }
    return c;
}
    
/*main*/
int main (void){
     int tam,a[1000],c;
    printf("Brother, decime el largo de tu arreglo y despuès te pido los elementos del mismo UwU: ");
    scanf("%d",&tam);
    pedirArreglo (a,tam);
    printf("ahora te pido que me digas que funcion queres\n1 para 'existe positivo'\n2 para 'todos positivos'");
    scanf("%d",&c);
    assert (c==1||c==2);
    if (c==1){
        printf ("0 no 1 si xd, existe?: %d\nFelicidades\n",existe_positivo(a,tam));
    }
    else if (c==2){
        printf ("0 no 1 si xd, Lo son todos?: %d\nFelicidades\n",todos_positivos(a,tam));
    }
    else {
        printf("AMIGO ME ESTAS TOMANDO EL PELO? TE DIJE 1 O 2. NOS VEMOS\n");
    }
    return 0;
}