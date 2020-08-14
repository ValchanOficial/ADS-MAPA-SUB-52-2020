# MAPA SUB - ADS - ESTRUTURA DE DADOS I - 2020

O PID do cada processo (Process ID, é um código gerado automaticamente pelo sistema – cada processo tem seu próprio PID); 

O nome do programa/comando que gerou o processo.

O programa deve ter um menu principal em forma de laço de repetição que atenda aos seguintes requisitos:

O menu sempre deve imprimir o conteúdo da pilha (da base em direção ao topo);
Após a impressão do conteúdo da pilha, o usuário deve ser informado de que pode realizar as seguintes operações:
- Inserir um elemento na pilha;
- Remover um elemento da pilha;
- Esvaziar a pilha;
- Encerrar o programa.

A operação “Inserir um elemento na pilha” deve pedir para que o usuário informe o nome do programa ou comando que será empilhado. O programa deve associar um PID a esse nome automaticamente, e empilhar ambos os dados: PID + nome. 
Caso a pilha esteja cheia, o usuário deve receber uma mensagem informando: “Pilha cheia, impossível empilhar mais elementos.”.

A operação “Remover um elemento da pilha” tentar remover um elemento da pilha. Caso haja elemento para ser removido, o PID e o nome do elemento desempilhado devem ser impressos na tela. 
Caso não seja possível desempilhar elementos, o programa deve imprimir a mensagem “Pilha vazia, impossível desempilhar elementos.”, na tela.

A operação “Esvaziar a pilha” deve remover todos os elementos da pilha.

A operação “Encerrar programa” deve finalizar o processo.

A pilha deverá ter, no máximo 5 posições para armazenar elementos (tamanho igual a 5);
