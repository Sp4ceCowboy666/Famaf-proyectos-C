/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
/*tipos y estructuras*/
typedef char clave_t;
typedef int valor_t;

typedef struct asoc {
    clave_t clave;
    valor_t valor;
}asociacion;

/*funciones*/
void pedirArreglo(asociacion a[], int n_max){
    int i=0;
    char c;
    while (i<n_max)
    {
        printf("valor en el lugar %d del arrreglo \n",i);
        scanf(" %c",&c);
        a[i].clave=c;
        i=i+1;
    }
}
bool asoc_existe(asociacion a[], int tam, clave_t c){
    int i=0,b=0;
    while (i<tam){
        if(c==a[i].clave){
            b=1;
        }
    i++;
    }
    return b;
}
const char* TF (bool a){
    if (a==0){
        return "false";
    }
    else {
        return "true";
    }
}
/*main*/
int main (void){
     int tam;
     clave_t c;
     asociacion s[1000];

    printf("Brother, decime el largo de tu arreglo y despuès te pido los elementos del mismo UwU: ");
    scanf("%d",&tam);
    pedirArreglo (s,tam);
    printf("Dame una letra clave a ver si la escribiste reciénnn.\n");
    scanf(" %c",&c);
    printf("Existe la clave? %s UwU\n",TF (asoc_existe(s,tam,c)));
    return 0;
}