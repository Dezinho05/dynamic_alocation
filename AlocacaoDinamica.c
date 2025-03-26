#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int qtProd;

	printf("Insira a quantidade de produtos (inteiro e positivo):");
	do{
		scanf("%i", &qtProd);
		if(qtProd <= 0) {
			printf("Invalido.\nDigite novamente:");
		}
	}while(qtProd <= 0);

	int *storage = (int*) malloc(qtProd * sizeof(int));
	float *prcUn = (float*) malloc(qtProd * sizeof(float));

	for (int i = 0; i < qtProd; i++){
		printf("Informe a quantidade de produtos em estoque, do %i° produto:", i+1);
		while(*storage <= 0){
			scanf("%i", storage);
			if(*storage <= 0){
				printf("Invalido.\nDigite novamente: ");
			}	
		}
		storage++;

		printf("Informe o valor do %i° produto em estoque:", i+1);
		while(*prcUn <= 0){
			scanf("%f", prcUn);
			if(*prcUn <= 0){
				printf("Invalido.\nDigite novamente: ");
			}
		}
		prcUn++;
	}
	printf("Esse é o valor do 'storage'%p\n", storage);
	printf("Esse é o valor do 'prcUn'%p\n", prcUn);
	storage -= qtProd;
	prcUn -= qtProd;
	printf("Esse é o valor do '*storage'%i\n", *storage);
	printf("Esse é o valor do '*prcUn'%f\n", *prcUn);

	float sum = 0;

	for (int i = 0; i < qtProd; i++){

		printf("O %i° produto, possui: %i itens, e um valor unitário %f.\nTotalizando: %lf.\n", i+1, *storage, *prcUn, (storage[i] * prcUn[i]));
				
		sum += storage[i] * prcUn[i];
	}
	printf("Valor total de mercadoria: %lf.\n", sum);
}












	//double *pointDouble;
	//
	//	pointDouble = (double*) malloc(sizeof(double) * 5);
	//
	//	printf("O endereço de memória do ponteiro é: %p\nO endereço de memória da apontada é: %p\nO conteudo da apontada é: %lf", &pointDouble, pointDouble, *pointDouble);
	//
	//	return 0;
