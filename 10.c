/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
/*tipos y estructuras*/
typedef struct comp_t {
    int menores;
    int iguales;
    int mayores;
}comp;

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
comp cuantos(int a[], int tam, int elem)
{
    int i=0, x=0, y=0, z=0;
    comp s;
    while (i<tam)
    {
        if (a[i]<elem){
            x=x+1;
        }
        else if (a[i]>elem){
            y=y+1;
        }
        else {
            z=z+1;
        }
        i++;
    }
    s.menores=x;
    s.mayores=y;
    s.iguales=z;
    return s;
};

/*main*/
int main (void){
     int tam,a[1000],c;
     comp s;
    printf("Brother, decime el largo de tu arreglo y despuès te pido los elementos del mismo UwU: ");
    scanf("%d",&tam);
    pedirArreglo (a,tam);
    printf("Ahora me vas a decir que numero queres comparar con los elementos, y te digo cuantos son mayores, menores e iguales.\n");
    scanf("%d",&c);
    s=cuantos(a,tam,c);
    printf("mayores=%d menores=%d iguales=%d\nUn gusto mi loco\n",s.mayores,s.menores,s.iguales);


    return 0;
}