#include <stdio.h>

int bis(int x, int m){
	return (x | (1 << (m - 1)));
}

int bic(int x, int m){
	return (x & (~(1 << (m -1))));
}

/* Calcular x|y usando solo llamadas a las funciones bis y bic */
int bool_or(int x, int y) {
	int resultado  ;
	return resultado;
}

/* Calcula x^y usando solo llamadas a las funciones bis y bic */
int bool_xor(int x, int y) {
	int resultado ;
	return resultado;
}

int main(){
	int x = 5, m = 1;
	printf("%d bis: %d \n", x,bis(x,m));
	printf("%d bic: %d \n", x,bic(x,m));
}
