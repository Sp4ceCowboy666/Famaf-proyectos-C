/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
/*funciones*/

int sumatoria (int a){
    assert(a>=0);
    a= (a*(a+1))/2;
    return a;
}

int main (void){
    int x;
    printf("sale esa sumatoria capo?\nDecime hasta que numero queres hacerla, genio: ");
    scanf("%d",&x);
    if (x<0){
        printf("Amigo que te pasa como me vas a dar un numero negativo >:C\n");
    }
    else {
    printf ("El resultado es %d :-)\n",sumatoria (x));
    }
    return 0;
}