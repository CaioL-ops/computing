//Caio Lucas Lima Carneiro, Matr�cula: UC21104476, Curso: Ci�ncia da computa��o/Algoritmo e programa��o.
#include<stdio.h> //biblioteca para printf e scanf.
#include<locale.h> //localizar um programa e fazer adapta��es �s caracter�sticas de um determinado idioma ou regi�o.
#include<string.h> //biblioteca para strlen e strcmp.
#include<conio.h> //biblioteca para stricmp.
#include<stdlib.h> //bilbioteca para system.

int main(){ // Inicializa��o do c�digo.
    setlocale(LC_ALL, "Portuguese"); // Declara��o de vari�veis do c�digo.
    printf("====================================\n"); //declara��o de vari�veis do c�digo.
    printf("Bem-vindo ao CineTom da capital!\n"); // Declara��o de vari�veis do c�digo.
    printf("====================================\n"); //declara��o de vari�veis do c�digo.
	int sessoes, idadePessoas, quantidadePessoas, homem, mulher; //serve para digitar n�meros inteiros.
	char filme; //serve para escrever informa��es de um tema.
	char nomefilme[40]; //serve para escrever informa��es de um tema.
	char sexoPessoas[30]; //server para escrever informa��es de um tema.
	
	do{ //respons�vel por permitir ao usu�rio digitar os dados de v�rias pessoas e outros.
	
	printf("Qual a quantidade de sessoes?"); //apresenta texto na tela.
	scanf("%i", &sessoes); //salva a vari�vel e faz parte da cole��o de char.
	
	if(sessoes == 2){ //insere a confirma��o da vari�vel.
		printf("Sucesso!\n"); //apresenta texto na tela.
	} 
	else { //caso contr�rio, mostra a mensagem de erro e finaliza o while.
		printf("Erro...\n"); //apresenta texto na tela.
	}
} while(sessoes != 2); //repeti��o quando um nome for inv�lido.

  do{ //respons�vel por permitir ao usu�rio digitar os dados de v�rias pessoas e/ou outros.
  
  system("cls"); //limpa a tela.
  
  printf("Qual o nome do filme?"); //apresenta texto na tela.
  printf("Resposta do usu�rio:\n "); //apresenta texto na tela.
  fflush(stdin); //limpa o buffer de mem�ria.
  fgets(nomefilme, 40, stdin); //recebe string com espa�o em branco. fgtes("nome da vari�vel", "tamanho da vari�vel", stdin).
  if(strlen(nomefilme) <= 1){ //insere a confirma��o da vari�vel.
  printf("Erro...\n"); //apresenta texto na tela.
  }
  else{ //caso contr�rio, mostra a mensagem de sucesso e finaliza o while.
	printf("Sucesso!\n"); //apresenta texto na tela.
}
	
	
} while(strlen(nomefilme) <= 1); //repeti��o quando um nome for inv�lido.

    printf("Informe a quantidade de pessoas que ir�o assistir o filme: \n"); //apresenta texto na tela.
  do{ //respons�vel por permitir ao usu�rio digitar os dados de v�rias pessoas e/ou outros.
	fflush(stdin); //limpa o buffer de mem�ria.
	scanf("%d", &quantidadePessoas); //salva a vari�vel e faz parte da cole��o de char.
	if(quantidadePessoas < 10){ //insere a confirma��o da vari�vel.
		printf("Quantidade inv�lida, digite novamente: \n"); //apresenta texto na tela.
		
	}else //caso contr�rio, mostra a mensagem de sucesso e finaliza o while.
	printf("Sucesso!\n"); //apresenta texto na tela.
	
	}
	while(quantidadePessoas < 10); //repeti��o quando um nome for inv�lido.

    for(int i=0; i<quantidadePessoas; i++){ //indica qualquer quantidade de uma vari�vel.
	
}

  do{ //respons�vel por permitir ao usu�rio digitar os dados de v�rias pessoas e/ou outros.

  printf("Qual a idade das Pessoas? "); //apresenta texto na tela.
  scanf("%d", &idadePessoas); //salva a vari�vel e faz parte da cole��o de char.
  fflush(stdin); //limpa o buffer de mem�ria.

   if((idadePessoas >= 3) && (idadePessoas <= 13)) //insere a confirma��o da vari�vel.
	   printf("Crian�as\n"); //apresenta texto na tela.
	else if((idadePessoas >= 14) && (idadePessoas <= 17)) //caso contr�rio, mostra a mensagem de adolescentes e finaliza o while.
	   printf("Adolescentes\n"); //apresenta texto na tela.
	else if((idadePessoas >= 18) && (idadePessoas <= 64)) //caso contr�rio, mostra a mensagem de adultos e finaliza o while.
	   printf("Adultos\n"); //apresenta texto na tela.
	else if((idadePessoas >= 65) && (idadePessoas <= 100)) //caso contr�rio, mostra a mensagem de idosos e finaliza o while.
	   printf("Idosos\n"); //apresenta texto na tela.
} while((idadePessoas > 3) && (idadePessoas < 100)); //repeti��o quando um nome for inv�lido.

  system("pause"); //o c�digo ser� pausado.

  system("cls"); //limpa a tela.
   
   printf ("Informe o sexo de cada pessoa das sess�es: \n"); //apresenta texto na tela.
   fgets(sexoPessoas, 30, stdin); //recebe string com espa�o em branco. fgtes("nome da vari�vel", "tamanho da vari�vel", stdin).
   fflush(stdin); //limpa o buffer de mem�ria.

   if(stricmp(("%s", sexoPessoas), "mulher\n")==0){ //insere a confirma��o da vari�vel.
   	printf("Feminino"); //apresenta texto na tela.
   }

   else if(stricmp(("%s", sexoPessoas), "homem\n")==0){ //caso contr�rio, mostra a mensagem de homem e finaliza o while
   	printf("Masculino"); //apresenta texto na tela
   }

   return 0; //retorno do c�digo.
}
