/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
/*tipos y estructuras*/
typedef struct div_t {
    int cociente;
    int resto;
}par;
/*funciones*/
int div (int a, int b){
    int c;
    assert(a>0&&b>0);
    c=a/b;
    return c;
}

int resto(int a, int b){
    int c;
    assert(a>0&&b>0);
    c=a%b;
    return c;
}

par division(int x, int y){
    struct div_t a;
    a.cociente= div (x,y);
    a.resto= resto (x,y);
    return a;
}
/*main*/
int main (void){
    struct div_t s;
    int x,y;
    printf("division entre que numeros?\n");
    scanf("%d%d",&x,&y);
    if (x<0||y<=0){
        printf("Pero que te pasa como me vas a dar numeros imposibles? >:C\n");
    }
    else {
        s=division (x,y);
        printf("Cociente: %d\nResto: %d\n",s.cociente,s.resto);
    }
    return 0;
}