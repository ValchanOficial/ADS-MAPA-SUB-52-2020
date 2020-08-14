#include <iostream>
#include <stdio.h>

// Valeria Padilha de Vargas
// ADS - Estrutura de Dados I
// RA 1910099-5

#define max 5 // Tamanho maximo da pilha
#define maxSizeName 100 // Tamanho maximo de caracteres do nome

struct Pilha {
	int * pid;
	char nome[max][maxSizeName];
	int maxTam;
	int topo;
	
	Pilha() {
		pid = new int[max];
		maxTam = max - 1;
		topo = -1;
	}
	
	void empilhar(char nome[]){
		if(topo == maxTam) {
			printf("\nPilha cheia, impossivel empilhar mais elementos.\n");
		} else {
			++topo;
			this->pid[topo] = topo;
			for(int i=0; i<maxSizeName; i++){
				this->nome[topo][i] = nome[i];
			}
			mostrarTopo();
		}
	}
	
	void remover() {
		if(topo == -1) {
			printf("\nPilha vazia, impossivel desempilhar elementos.\n");
		} else {
			mostrarTopo();
			topo--;
		}
	}
	
	void mostrarPilha() {
		printf("\nPilha:\n");
		if(topo == -1) {
			printf("Pilha vazia.\n");
		} else {
			int tamanhoAtual = topo + 1;
			for(int i=0; i<tamanhoAtual; i++){
				printf("PID: %d - Nome: %s.\n", pid[i], nome[i]);
			}
		}		
	}
	
	void mostrarTopo() {
		printf("\nPID: %d - Nome: %s.\n", pid[topo], nome[topo]);
	}
	
	void esvaziar() {
		if(topo == -1) {
			printf("\nPilha vazia, impossivel desempilhar elementos.\n");
		} else {
			while(topo != -1) {
				remover();
			}
			printf("\nPilha esvaziada.\n");
		}
	}
};

int main() {
	Pilha p;
	int opcao;
	char nome[maxSizeName];
	
	while(opcao != 4) {
		p.mostrarPilha();
		printf("\nEscolha uma opcao: \n 1 - Inserir um elemento na pilha\n 2 - Remover um elemento da pilha\n 3 - Esvaziar a pilha\n 4 - Encerrar o programa\n");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				printf("\nInserindo um elemento na pilha..\n");
				printf("Informe o nome do programa ou comando:\n");
				scanf("%s", &nome);				
				p.empilhar(nome);
				break;
			case 2:
				printf("\nRemovendo um elemento da pilha..\n");
				p.remover();
				break;
			case 3:
				printf("\nEsvaziando a pilha..\n");
				p.esvaziar();
				break;
			case 4:
				printf("\nEncerrando o programa..\n");
				break;
			default:
				printf("\nOpcao invalida\n");
				break;
		}
	}
	
	return 0;
}
