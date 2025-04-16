#include <stdio.h>

int fibo(int n)
{
    int x = 0;
    if (n == 1 || n == 2){
        //~ printf("1\n");//~ 
        x = 1;
    }
    else if (n > 2){
        //~ printf("%d\n",fibo(n-1) + fibo(n-2));
        x = (fibo(n-1) + fibo(n-2));
        //~ printf("%d\n",x);
    }
    
    return x;
}

int main(int argc, char **argv)
{
	int i = 0, n;
    printf("Qual posição de Fibonacci vc quer mostrar?\n");
    scanf("%d",&n);
    printf("Sequencia = \n");
    for (i = 1; i <= n; i++){
        printf(" %d\n", fibo(i));
    }
	return 0;
}

