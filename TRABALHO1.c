#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 8
#define N 10
#define K 20 

void menutotal ();
int busca_seq(int coluna, int matriz[coluna], int chave); //Usada na inserir dados.
void insere_dados(int i_matriz, int n, int conjunto[n]); //2
void remover_conjunto(int ind, int m, int n, int conjunto[m][n]); //3
void uniao(int i1, int i2, int n, int conjunto[M][n], int *contador, int vet_aux[K]); //4
void intersecao(int i1, int i2, int i3, int n, int conjunto[M][n]); //5
void mostra_conjunto(int i_matriz, int n, int conjunto[i_matriz][n]); //6
void mostra_todos(int m, int n, int conjunto[m][n]); //7
void busca_valor(int busca, int m, int n, int conjunto[m][n]); //8

int main (){
	int matriz_conjuntos[M][N] = {0};
	int cont = 0, condicao = 1, menu;
	int indice, indice1, indice2; //Variáveis de indice que usamos nas funções que o usuário precisa dizer o indice 
	int chave; //Variável usada na função de busca valor 
	int vetor_auxiliar_uniao[K]; //Vetor auxiliar para união 
	
	while(condicao){ //Enquanto a condição não zera no caso 9, o menu continua aparecendo 
		menutotal ();
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				if(cont < M){ //Condição para que não haja mais conjuntos do que cabe na matriz. Enquanto cont é menor que o 8, dá pra pôr mais conjuntos 
					cont++; //Adicionando mais um conjunto...
					printf("Ha %d conjunto(s) criado(s). Sua posicao eh %d.\n", cont, (cont-1));
				} else {
					printf("Limite de conjuntos cheio! Ha 8 conjuntos criados.\n");
				}
				break;
			case 2:
				printf("Qual o indice do conjunto desejado para funcao inserir?\n");
				scanf("%i", &indice);
				if(indice >= 0 && indice < cont){ //Se o conjunto existe, seu indice sempre será menor que a quantidade de conjuntos criados.
					insere_dados(indice, N, matriz_conjuntos[indice]); //Chamando a função para os parâmetros: indice do conjunto, capacidade da linha (constante N), e a própria matriz 	
				} else {
					printf("Conjunto inexistente\n");
				}
				break;
			case 3:
				printf("Qual o indice do conjunto que deseja remover?\n");
				scanf("%i", &indice);
				if(indice < cont && indice >= 0){//De novo, apenas um if caso a pessoa ponha um indice negativo ou que não existe ainda 
					cont--; // Decrementando um conjunto, pois esse é o objetivo da função 
					remover_conjunto(indice, M, N, matriz_conjuntos); //Chamando a função para o indice do conjunto que é pra remover, as constantes, e a matriz 
				} else {
					printf("Conjunto inexistente.\n");
				}
				break;
			case 4:
				printf("Quais conjuntos deseja unir? Digite seus indices:\n"); 
				scanf("%i", &indice1);
				scanf("%i", &indice2);
				if(indice1 < cont && indice2 < cont && cont < M){ //Condição se o conjunto existe i < cont. E se há espaço para criar +1 conj
					uniao(indice1, indice2, N, matriz_conjuntos, &cont, vetor_auxiliar_uniao);	
				} else {
					printf("Impossivel fazer a uniao. Conjuntos inexistentes ou espaco na matriz excedido.\n");	
				}
				break;
			case 5: 
				printf("Quais conjuntos deseja interseccionar? Digite seus indices:\n");
				scanf("%i", &indice1);
				scanf("%i", &indice2);
				if(indice1 < cont && indice2 < cont && cont < M){ //Condição se o conjunto existe i < cont. E se há espaço para criar +1 conj
					cont++; //Adicionando mais um conjunto, que é o resultante da intercessão 
					intersecao(indice1, indice2, (cont - 1), N, matriz_conjuntos); //Função chama os dois indices dados pelo usuario, o novo indice do conjunto resultante (cont - 1, pq a posição dele vai ser a qtd de conjuntos -1), N como constante de tamanho do vetor, e a própria matriz 
				} else {
					printf("Impossivel fazer a intersecao. Conjuntos inexistentes ou espaco na matriz excedido\n");	
				}
				break;
			case 6:
				printf("Qual conjunto deseja ver? Insira seu indice:\n");
				scanf("%i", &indice);
				if(indice < cont){
					mostra_conjunto(indice, N, matriz_conjuntos); //Já que a função deseja ver só um conjunto, é passada a coordenada do indice desse conjunto, o N, e a matriz inteira
				} else {
					printf("Conjunto inexistente\n");
				}
				break;
			case 7:
				printf("\nHa %d conjuntos.\n", cont);
				if(cont != 0){
					mostra_todos(cont, N, matriz_conjuntos); //Aqui, o que diferencia pra função 6 é que eu passamos o contador, pra saber quantos conjuntos existem. Não dá pra simplesmente passar o M, pois printaria a matriz inteira, e não sabemos se há todos esses conjuntos. Queremos só a quantidade de conjuntos que foram criados	
				} 
				break;
			case 8: 
				printf("Informe qual valor deseja procurar:\n");
				scanf("%d", &chave);
				busca_valor(chave, M, N, matriz_conjuntos); //Parâmetros são o numero dado para busca, a matriz e suas constantes
				break;						
			case 9: 
				condicao = 0; //Condição passa a ser zero, logo o programa se encerra, pois o while não vai repetir 
				break;
		}
	}
	return 0; 
}

void menutotal () {
		printf("Menu-----------------------\n");
		printf("\nDigite:\n");
		printf("[1] Criar novo conjunto\n");
		printf("[2] Inserir dados em um conjunto\n");
		printf("[3] Remover um conjunto\n");
		printf("[4] Fazer a uniao entre dois conjuntos\n"); 
		printf("[5] Fazer a intersecao entre dois conjuntos\n");
		printf("[6] Mostrar um conjunto\n"); 
		printf("[7] Mostrar todos os conjuntos\n"); 
		printf("[8] Busca por um valor\n"); 
		printf("[9] Sair do programa\n");  
	
	printf ("\n");
}

void insere_dados(int i_matriz, int n, int conjunto[n]){ 
	int j, cont, aux;
	
	for(cont = 0; cont < n && conjunto[cont] != 0; cont++){ //Achando o 0 no conjunto, para então inserir dados a partir dele 
	}
	
	if (cont == n){ 
		printf("Conjunto cheio. Impossivel inserir\n");
	} else {
		j = cont; // j recebe a posição do primeiro zero do conjunto, para então inserir dados até o limite n
		printf("Digite o(s) valor(es) desejado(s) para inserir:\n");
		while (j < n){
			scanf(" %i", &aux); //o que foi digitado pelo usuario é guardado em um auxiliar, pra podermos fazer os testes primeiro SE ele pode entrar no conjunto   
			if(aux == 0){ //Se digitar zero, sai do while, ou seja, volta pra main 
				break;
			}
			if(busca_seq(j, conjunto, aux) != -1){ //aqui chamamos a busca sequencial pro indice da matriz dos conjuntos, ou seja, o indice do conjunto que eu estamos manipulando; chamamos o i para usar de parametro no vetor como limitador; o conjunto, que é o nome da nossa matriz dentro dessa função e o aux que é a chave de busca
				printf("\nValor anterior ja existe no conjunto. Seu limite de dados continua o mesmo\n");
			} else {
				conjunto[j] = aux; // se a busca não achar o aux no vetor conjunto, é pq ele pode ser adicionado. Então que assim seja! E chamamos i++ pra o proximo numero entrar na proxima posição, e não na mesma 
				j++;
			}
		}	
	}	
}

int busca_seq(int coluna, int matriz[coluna], int chave){ 
 	int i;
 	for(i = 0; i < coluna; i++){ 
 		if(matriz[i] == chave){
 			return i; // Encontrado em i!
 		}
 	}
 	return -1; // Não encontrado!
}
void mostra_conjunto(int i_matriz, int n, int conjunto[i_matriz][n]){ //Aqui passamos o parametro i_matriz sendo o indice do conjunto que eu quero na matriz, ou seja, no for de printar eu não mudo ele, logo a função vê essa matriz só como essa linha do indice passado, ou seja, como um vetor. Então é usado só um for 
	int i;
	printf("\nCONJUNTO INDICE %d------\n", i_matriz);
	if(conjunto[i_matriz][0] == 0){
		printf("Vazio.\n");
	} else {
		for(i = 0; conjunto[i_matriz][i] != 0; i++){
			printf("%i\t", conjunto[i_matriz][i]);
		}	
	}
	printf("\n\n");
}
void mostra_todos (int m, int n, int conjunto[m][n]){ 
	int i, j;
	
	printf("\nTODOS OS CONJUNTOS------"); 
	for(i=0; i < m;i++){
		printf("\n");
		printf("Conjunto indice %i: ", i);
		if(conjunto[i][0] == 0){
			printf("Vazio.");
		} else {
			for(j=0; conjunto[i][j] != 0; j++){
				printf("%i\t", conjunto[i][j]);
			}	
		}
	}
	printf("\n\n"); 
}
void busca_valor(int busca, int m, int n, int conjunto[m][n]){
	int i, j;
	
	printf("Caso seu numero esteja presente em conjunto(s), seu(s) indice(s) eh(sao):\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(busca == conjunto[i][j]){
				printf("%i\t", i); //Quando acha, já printa, não precisa usar vetor pra guardar indices
			}
		}
	}
	printf("\n\n");
}
void remover_conjunto(int ind, int m, int n, int conjunto[m][n]){
	int i, j;
	
	for(i = ind; i < m-1; i++){
		for(j = 0; j < n; j++){
			conjunto[i][j] = conjunto[i+1][j];
		}
	}
	for(j = 0; j < n; j++){
		conjunto[m-1][j] = 0;
	}
}
void intersecao(int i1, int i2, int i3, int n, int conjunto[M][n]){
	int i, j = 0;
	for(i = 0; i < n; i++){
		if(busca_seq(n, conjunto[i1], conjunto[i2][i]) != -1){ //Aqui é a busca sequencial de cada elemento do conjunto 2 no conjunto 1. Cada laço do for muda o indice da coluna do conjunto 2, e o j é só pra ter o controle dos indices do conjunto resultante 
			conjunto[i3][j]	= conjunto[i2][i];
			j++;
		}
	}
}
void uniao(int i1, int i2, int n, int conjunto[M][n], int *contador, int vet_aux[K]){
	int i, j, tam_aux = 0;
	
	for(j = 0; conjunto[i1][j] != 0; j++){
		vet_aux[j] = conjunto[i1][j];
	}
	for(i = 0; conjunto[i2][i] != 0; i++){
		if(busca_seq(n, conjunto[i1], conjunto[i2][i]) == -1){
			vet_aux[j] = conjunto[i2][i];
			j++;	
		}
	}
	vet_aux[j] = 0;
	for(i = 0; vet_aux[i] != 0; i++){
		tam_aux++;
	}
	if(tam_aux > 10){
		printf("Impossivel gerar novo conjunto. Uniao eh maior que a capacidade N.\n");
	} else {
		(*contador)++; //Modificando o contador aqui dentro, pois precisava ver se a uniao seria possivel ou não. Aqui foi interessante usar ponteiro 
		for(i = 0; i < tam_aux; i++){
			conjunto[(*contador) - 1][i] = vet_aux[i]; 
		}
		if(i < 10){
			conjunto[(*contador) - 1][i] = 0; //Para que seja possivel inserir mais dados depois	
		}
	}
	
}

