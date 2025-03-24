#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int qtProd;

	printf("Insira a quantidade de produtos (inteiro e positivo):");
	do{
		scanf("%i", qtProd);
		if(qtProd <= 0) {
			printf("Invalido.\nDigite novamente:");
		}
	}while(qtProd <= 0);

	int *storage = (int*) malloc(qtProd, sizeof(int));
	float *prcUn = (double*) malloc(qtProd, sizeof(double));

	for (int i = 0; i < qtProd; i++){
		print("Informe a quantidade de produtos em estoque, do %i° produto:", i+1);
		while(*storage <= 0){
			scanf("%i", *storage);
			if(*storage <= 0){
				printf("Invalido.\nDigite novamente: ");
			}	
		}
		*storage++;

		for(int x = 0; x < qtProd; x++){
			print("Informe o valor do %i° produto em estoque:", i+x);
			while(*prcUn <= 0){
				scanf("%f", *prcUn);
				if(*prcUn <= 0){
					printf("Invalido.\nDigite novamente: ");
				}
			}
		}
		*prcUn++;
	}

	*storage -= qtProd;
	*prcUn -= qtProd;

	float sum = 0;

	for (int i = 0; i < qtProd; i++){

		printf("O %i° produto, possui: %i itens, e um valor unitário %f. Totalizando: %lf.", i, *storage, *prcUn, (float)(*storage * *prcUn));
		
		*storage++;
		*prcUn++;
		
		sum = sum + (*storage * *prcUn);
	}
	printf("Valor total de mercadoria: %lf.", sum);
}












	//double *pointDouble;
	//
	//	pointDouble = (double*) malloc(sizeof(double) * 5);
	//
	//	printf("O endereço de memória do ponteiro é: %p\nO endereço de memória da apontada é: %p\nO conteudo da apontada é: %lf", &pointDouble, pointDouble, *pointDouble);
	//
	//	return 0;
