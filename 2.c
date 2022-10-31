/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
/*funciones*/
void A (int a, int b){
    int aux;
    aux=a;
    a=a+1;
    b=b+aux;
    printf ("Resultados de tu wea x=%d y =%d\n",a,b);
}
void B (int a, int b, int c){
    int aux;
    aux=a;
    a=b;
    b=aux+b+c;
    c=a+aux;
    printf("Aca tenei tus valores aweonaos x=%d y=%d Z=%d\n",a,b,c);
}
int main (void){
    int x,y,z;
    printf("primera operacion. Pasame x e y uwu\n");
    scanf("%d%d",&x,&y);
    A (x,y);
    printf("segunda operacion. Pasame x,y,z >:)\n");
    scanf("%d%d%d",&x,&y,&z);
    B (x,y,z);
    return 0;
}