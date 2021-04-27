//Caio Lucas Lima Carneiro, Matrícula: UC21104476, Curso: Ciência da computação/Algoritmo e programação.
#include<stdio.h> //biblioteca para printf e scanf.
#include<locale.h> //localizar um programa e fazer adaptações às características de um determinado idioma ou região.
#include<string.h> //biblioteca para strlen e strcmp.
#include<conio.h> //biblioteca para stricmp.
#include<stdlib.h> //bilbioteca para system.

int main(){ // Inicialização do código.
    setlocale(LC_ALL, "Portuguese"); // Declaração de variáveis do código.
    printf("====================================\n"); //declaração de variáveis do código.
    printf("Bem-vindo ao CineTom da capital!\n"); // Declaração de variáveis do código.
    printf("====================================\n"); //declaração de variáveis do código.
	int sessoes, idadePessoas, quantidadePessoas, homem, mulher; //serve para digitar números inteiros.
	char filme; //serve para escrever informações de um tema.
	char nomefilme[40]; //serve para escrever informações de um tema.
	char sexoPessoas[30]; //server para escrever informações de um tema.
	
	do{ //responsável por permitir ao usuário digitar os dados de várias pessoas e outros.
	
	printf("Qual a quantidade de sessoes?"); //apresenta texto na tela.
	scanf("%i", &sessoes); //salva a variável e faz parte da coleção de char.
	
	if(sessoes == 2){ //insere a confirmação da variável.
		printf("Sucesso!\n"); //apresenta texto na tela.
	} 
	else { //caso contrário, mostra a mensagem de erro e finaliza o while.
		printf("Erro...\n"); //apresenta texto na tela.
	}
} while(sessoes != 2); //repetição quando um nome for inválido.

  do{ //responsável por permitir ao usuário digitar os dados de várias pessoas e/ou outros.
  
  system("cls"); //limpa a tela.
  
  printf("Qual o nome do filme?"); //apresenta texto na tela.
  printf("Resposta do usuário:\n "); //apresenta texto na tela.
  fflush(stdin); //limpa o buffer de memória.
  fgets(nomefilme, 40, stdin); //recebe string com espaço em branco. fgtes("nome da variável", "tamanho da variável", stdin).
  if(strlen(nomefilme) <= 1){ //insere a confirmação da variável.
  printf("Erro...\n"); //apresenta texto na tela.
  }
  else{ //caso contrário, mostra a mensagem de sucesso e finaliza o while.
	printf("Sucesso!\n"); //apresenta texto na tela.
}
	
	
} while(strlen(nomefilme) <= 1); //repetição quando um nome for inválido.

    printf("Informe a quantidade de pessoas que irão assistir o filme: \n"); //apresenta texto na tela.
  do{ //responsável por permitir ao usuário digitar os dados de várias pessoas e/ou outros.
	fflush(stdin); //limpa o buffer de memória.
	scanf("%d", &quantidadePessoas); //salva a variável e faz parte da coleção de char.
	if(quantidadePessoas < 10){ //insere a confirmação da variável.
		printf("Quantidade inválida, digite novamente: \n"); //apresenta texto na tela.
		
	}else //caso contrário, mostra a mensagem de sucesso e finaliza o while.
	printf("Sucesso!\n"); //apresenta texto na tela.
	
	}
	while(quantidadePessoas < 10); //repetição quando um nome for inválido.

    for(int i=0; i<quantidadePessoas; i++){ //indica qualquer quantidade de uma variável.
	
}

  do{ //responsável por permitir ao usuário digitar os dados de várias pessoas e/ou outros.

  printf("Qual a idade das Pessoas? "); //apresenta texto na tela.
  scanf("%d", &idadePessoas); //salva a variável e faz parte da coleção de char.
  fflush(stdin); //limpa o buffer de memória.

   if((idadePessoas >= 3) && (idadePessoas <= 13)) //insere a confirmação da variável.
	   printf("Crianças\n"); //apresenta texto na tela.
	else if((idadePessoas >= 14) && (idadePessoas <= 17)) //caso contrário, mostra a mensagem de adolescentes e finaliza o while.
	   printf("Adolescentes\n"); //apresenta texto na tela.
	else if((idadePessoas >= 18) && (idadePessoas <= 64)) //caso contrário, mostra a mensagem de adultos e finaliza o while.
	   printf("Adultos\n"); //apresenta texto na tela.
	else if((idadePessoas >= 65) && (idadePessoas <= 100)) //caso contrário, mostra a mensagem de idosos e finaliza o while.
	   printf("Idosos\n"); //apresenta texto na tela.
} while((idadePessoas > 3) && (idadePessoas < 100)); //repetição quando um nome for inválido.

  system("pause"); //o código será pausado.

  system("cls"); //limpa a tela.
   
   printf ("Informe o sexo de cada pessoa das sessões: \n"); //apresenta texto na tela.
   fgets(sexoPessoas, 30, stdin); //recebe string com espaço em branco. fgtes("nome da variável", "tamanho da variável", stdin).
   fflush(stdin); //limpa o buffer de memória.

   if(stricmp(("%s", sexoPessoas), "mulher\n")==0){ //insere a confirmação da variável.
   	printf("Feminino"); //apresenta texto na tela.
   }

   else if(stricmp(("%s", sexoPessoas), "homem\n")==0){ //caso contrário, mostra a mensagem de homem e finaliza o while
   	printf("Masculino"); //apresenta texto na tela
   }

   return 0; //retorno do código.
}
