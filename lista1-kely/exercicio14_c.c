#include<stdio.h>
#include<stdlib.h>

/*Esse trecho de codigo ira solicitar dois numeros
inteiro positivo ao usuario.Ao armazenar os dois valores
sera feita uma comparacao se A<=B, caso seja verdadeiro, 
entao o programa ira somar todos os numeros pares entre
os mesmos, caso contrario ele ira somar todos os impares 
entre B e A.
*/

int main(){
	
	int A, B; //guarda o valor inserido
	int soma=0;
	int i;
	float auxiliar; 
	
	do{
    	printf("Digite o primero numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	A=auxiliar;
	
	do{
    	printf("Digite o segundo numero inteiro positivo: \n");
        scanf("%f", &auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	B=auxiliar;
	
	if(A<=B){
		for(i=A;i<=B;++i){
			if((i%2)==0){
				soma+=i; //soma dos pares entre A e B.
			}
		}
		printf("A soma dos numeros pares entre %d e %d e igual a: %d\n", A, B, soma);
	}else{
		for(i=B;i<=A;++i){
			if((i%2)==1){
				soma+=i; //soma dos impares entre B e A.
			}
		}
		printf("A soma dos numeros pares entre %d e %d e igual a: %d\n", B, A, soma);
	}
	
	return 0;
}
