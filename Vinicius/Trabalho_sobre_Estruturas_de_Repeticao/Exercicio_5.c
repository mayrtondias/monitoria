#include<stdio.h>
#include<stdlib.h>

/*Construa um programa para encontrar o maior e o menor 
n�mero de uma s�rie de n�meros positivos fornecidos pelo 
usu�rio atrav�s do teclado. O dado finalizador � o n�mero 
�1, e este n�o deve ser considerado na an�lise dos 
n�meros da s�rie.
*/

int main(){
	
	int teste=0;
	int numero;
	int maior=0;
	int menor=0;
	
	do{
		printf("Digite um numero: \n");
		scanf("%d", &numero);
		
		if(numero<=0){
			if(numero==-1){
				teste=1;
			}
			continue;
		}
		if(maior==0){
			maior=numero;
			menor=numero;
		}else{
			if(numero>maior){
				maior=numero;
			}
			if(numero<menor){
				menor=numero;
			}
		}
	}while(teste==0);
	
	printf("O Valor do maior numero e: %d\nO Valor do menor numero e: %d\n", maior, menor);
	
	return 0;
}
