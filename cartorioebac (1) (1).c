#include <stdio.h> //biblioteca de comunicao com o usuario
#include <stdlib.h> //biblioteca de aloca�ao de espaço em memoria
#include <locale.h> //biblioteca de aloca�ao de texto por regiao
#include <string.h> //biblioteca responsavel por cuidar das string
		
int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
    system("pause");

}

int consulta()
{   setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file; 
	file = fopen(cpf,"r"); 
	
	if(file == NULL)
	{
	    printf("N�o foi poss�vel abrir o arquivo, n�o localizado\n");
	 }
	 
	 while(fgets(conteudo, 200, file) != NULL)
	 {  
	    printf("\nEssas sao as informacoes do usuario: ");
	    printf("%s", conteudo);
	    printf("\n\n");
	 }
	 
    system("pause");
	    
	
}

int deletar()
{
	printf("Voce escolheu deletar nomes!\n");
	system("pause");	
}


	
int main()
	{
	int opcao=0; //Definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{

		system("cls");

		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
			
		printf("### Cartorio da EBAC ###\n\n"); //inicio do menu
		printf("Escolha a op�ao desejada do menu\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n"); 
        printf("Op�ao: ");//fim do menu
				
		scanf("%d", &opcao); //armazenando a escolha do usuario
		
		system("cls");
	
		switch(opcao) 
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
		
			case 3:
			deletar();
			break;
		
		
			default:
			printf("Essa opcao nao esta disponivel!\n");
			system("pause");
			break;
		} 
			
	}	
}
