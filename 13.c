/*inclusión biblioteca estandar */
#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>
/*tipos y estructuras*/
/*funciones*/
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}

int nesimo_primo(int N){
    int i=0,primo,x=2;
    while (i<=N)
    {   if(0==prime(x)){
        primo=x;
        x++;
        i++;
    }
        else {
        x++;
        }
    }
    return primo;
}
/*main*/
int main (void){
    int x;
    printf("Amix que n-esimo primo queres sabes?\n");
    scanf("%d",&x);
    assert(x>=0);
    printf("El primo que buscas es %d\n",nesimo_primo(x));
    return 0;
}