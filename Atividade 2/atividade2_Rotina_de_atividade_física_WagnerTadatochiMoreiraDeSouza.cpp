//Autor: Wagner Tadatochi Moreira de Souza
//Matéria: Algoritmos e Pensamento Computacional
//Atividade 2 - Rotina de atividade física

//Incluindo bibliotecas
#include <stdio.h>		//serve para realizar operações de entrada e saída
#include <stdlib.h>	


	//Criação dos contadores globais
	const int contadorA = 7; //contador da Segunda-Feira
	const int contadorB = 6; //contador da Terça-Feira 
	const int contadorC = 5; //contador da Quarta-Feira
	const int contadorD = 6; //contador da Quinta-Feira
	const int contadorE = 6; //contador da Sexta-Feira
	const int contadorF = 1; //contador do Sábado
	const int ContadorG = 0; //contador do Domingo

	//Função para destacar o top day
	void exibeTopDay(){
    	printf("-------------------------------------------------------------\n");
    	printf("                      ANALISE DA SEMANA\n");
    	
    	//Observação: Como não sei exatamente o que é um TopDay ou como decidir qual dia seria, assumi que ele seria o dia com mais exercicios
    	//Dia com maior numero de atividades
    	int maisExercicios = contadorA; //Assume que A é o maior
    	char topDay = 'A';

    	if (contadorB > maisExercicios) { //Se o contador B tiver mais exercicios que o dia A ele passar a ser o topday e a variável maisExercicios recebe o valor do dia B
			maisExercicios = contadorB;
			topDay = 'B';
		}
		
    	if (contadorC > maisExercicios){ //Se o contador C tiver mais exercicios que o dia A ele passar a ser o topday e a variável maisExercicios recebe o valor do dia C
			maisExercicios = contadorC;
			topDay = 'C';
		}
    	if (contadorD > maisExercicios) { //Se o contador D tiver mais exercicios que o dia A ele passar a ser o topday e a variável maisExercicios recebe o valor do dia D
			maisExercicios = contadorD;
			topDay = 'D';
		}
    	if (contadorE > maisExercicios) { //Se o contador E tiver mais exercicios que o dia A ele passar a ser o topday e a variável maisExercicios recebe o valor do dia E
			maisExercicios = contadorE;
			topDay = 'E';
			
		//Observação: Os contadores E e F não foram avaliados pois são dias de descanso, ou seja, não contem exercicio suficiente ou não contem exercicios
		}
	
    // Anuncia o resultado do TopDay
    	printf("O dia com maior numero de atividades (Top Day) e o Treino %c, com %d exercicios.\n", topDay, maisExercicios);
    	printf("-------------------------------------------------------------\n\n");
	}		
	
	//Função para exibir o Menu
	void exibeMenu(){
		
		printf("Lista Semanal de Treinos\n");
		printf("1: Segunda-Feira: Peito, Triceps e Ombro (Enfase em Empurrar) \n");
		printf("2: Terca-Feira: Costas, Biceps e Ombro (Enfase em Puxar)\n");
		printf("3: Quarta-Feira: Pernas Completo (Foco em Quadriceps) \n");
		printf("4: Quinta-Feira: Peito, Triceps e Ombro (Variacao)\n");
		printf("5: Sexta-Feira: Pernas, Costas e Biceps (Foco em Posterior e Gluteos) \n");
		printf("6: Sabado - descanso ativo \n");
		printf("7: Domingo e dia de descansar! \n");
		printf("8: SAIR\n\n");
		printf("Selecione o NUMERO do treino diario: \n\n");
	}

	//Função para exibir o treino A
	void exibeTreinoA(){
				
		printf("*************************************************************\n");
		printf("          Lista de Exercicios do dia A: \n\n");
		printf("Supino Reto (com barra ou halteres) - Peito\n");
		printf("Supino inclinado com Barra - Peito\n");
		printf("Crucifixo Inclinado (com halteres) - Peito (parte superior)\n");
		printf("Desenvolvimento de Ombros (com halteres ou maquina) - Ombros\n");
		printf("Elevacao Lateral (com halteres) - Ombros (parte lateral)\n");
		printf("Triceps na Polia (com corda ou barra) - Triceps\n");
		printf("Flexao de Braço - Ate a falha, para finalizar\n\n");
		printf("*************************************************************\n\n");
	}
	
	//Função para exibir o treino B
	void exibeTreinoB(){
		
		printf("************************************************************************\n");
		printf("          Lista de Exercicios do dia B: \n\n");
		printf("Barra Fixa ou Puxada Frontal na Polia - Costas (largura)\n");
		printf("Remada Curvada ou Remada Cavalinho - Costas (espessura)\n");
		printf("Crucifixo Invertido (com halteres ou maquina) - Ombros (parte posterior)\n");
		printf("Encolhimento de Ombros (com halteres) - Trapezio\n");
		printf("Rosca Direta (com barra ou halteres) - Biceps\n");
		printf("Rosca Martelo - Biceps e Antebraço\n");
		printf("************************************************************************\n\n");
	}
	
	//Função para exibir o treino C
	void exibeTreinoC(){
		
		printf("*************************************************************\n");
		printf("          Lista de Exercicios do dia C: \n\n");
		printf("Agachamento Livre (ou no Smith) - Exercicio principal\n");
		printf("Leg Press 45 Graus - Pernas em geral\n");
		printf("Cadeira Extensora - Quadriceps (frente da coxa)\n");
		printf("Afundo ou Passada (com halteres) - Quadriceps e Gluteos\n");
		printf("Panturrilha em Pe (no Smith ou maquina) - Panturrilhas\n");
		printf("*************************************************************\n\n");
	}
	
	//Função para exibir o treino D
	void exibeTreinoD(){
		
		printf("****************************************************************\n");
		printf("          Lista de Exercicios do dia D: \n\n");
		printf("Supino Inclinado (com barra ou halteres) - Peito (superior)\n");
		printf("Flexão nas Paralelas (ou no banco) - Peito (inferior) e Triceps\n");
		printf("Elevacao Frontal (com halteres ou anilha) - Ombros (frontal)\n");
		printf("Desenvolvimento Militar (com barra) - Ombros\n");
		printf("Triceps Frances (deitado com barra ou halteres) - Triceps\n");
		printf("Triceps Testa - Triceps\n");
		printf("****************************************************************\n\n");
	}
	
	//Função para exibir o treino E
	void exibeTreinoE(){
		
		printf("*************************************************************\n");
		printf("          Lista de Exercicios do dia E: \n\n");
		printf("Levantamento Terra Romeno - Posterior de coxa e Gluteos\n");
		printf("Cadeira Flexora - Posterior de coxa\n");
		printf("Elevacao Pelvica (com barra) - Gluteos\n");
		printf("Remada Unilateral com Halter (Serrote) - Costas\n");
		printf("Rosca Concentrada ou na Polia Baixa - Biceps\n");
		printf("Panturrilha Sentado - Panturrilhas\n");
		printf("*************************************************************\n\n");		
	}		
	
		
	//Funções para exibir o treino F
	void exibeTreinoF(){
	    printf("*************************************************************\n");
	    printf("    	                Descanso Ativo\n\n");
	    printf("     - Caminhada leve de 30-45 minutos ou alongamento.\n\n");
	    printf("*************************************************************\n\n");
	}
	
	//Função para exibir o treino G
	void exibeTreinoG(){
	    printf("*************************************************************\n");
	    printf("     	Descanso Total. Relaxe e se recupere!\n\n");
	    printf("*************************************************************\n\n");
	}

int main(){
	
	//variáveis
	int menu = 0; //Variável que vai receber a escolha do treino do cliente
	
	//Apresentação do programa
	printf("          /***************************************************\\\n");
	printf("          |      Sistema de geracao de treinos semanais       |\n");
	printf("          |  Aqui voce vai encontrar uma sequencia de treinos |\n");
	printf("          |    diarios, para a melhora de sua saude fisica    |\n");
	printf("          \\***************************************************/\n");
	
	//Exibe o TopDay
	exibeTopDay();
		
	//menu de opções
	do{
		
		exibeMenu(); // Aqui será exibido a função menu	
		//Recebe a opção selecionada pelo usuário e armazena na variável resultScanf
		int resultScanf = scanf("%d", &menu);
		
		if(resultScanf == 1){
				
			
		//	scanf("%d", &menu);  // aqui será coletado a escolha do usuário
					
			switch(menu){
				case 1:
					exibeTreinoA(); // aqui será exibido a função do treino de Segunda-feira
					break;
				case 2:
					exibeTreinoB(); //Aqui será exibido a função do treino Terça-feira
					break;
				case 3:
					exibeTreinoC(); //Aqui será exibido a função do treino Quarta-feira
					break;
				case 4:
					exibeTreinoD(); // Aqui será exibido a função do treino Quinta-feira
					break;
				case 5:
					exibeTreinoE(); //Aqui será exibido a função do treino Sexta-feira
					break;
				case 6:
					exibeTreinoF(); //Aqui será exibido a função do treino de Sábado
					break;
				case 7:
					exibeTreinoG(); //Aqui será exibido a função do Domingo
					break;
				case 8:
					printf("Encerrando o programa!!\n\n");
					break;
				default:
					printf("\nOpcao invalida. Tente novamente.\n\n");
			        break;	
			}			
						
		}
		else{
			//Se o resultado for diferente de 1
			printf("ERRO! Por favor digite apenas numeros.\n\n");
							
			int c;
			//Limpando qualquer caractere digitado
			while((c = getchar()) != '\n' && c != EOF) //a sigla "EOF" usada como um sinal para indicar que não há mais dados para serem lidos de uma fonte de entrada.
					
			//garantindo que o menu vai conter um número inteiro
			menu = 0;
		}
	}			
	while(menu != 8);{
			
		//Mensagem felicitando a meta semanal
		printf("*************************************************************\n");
		printf("|            Parabens por cumprir sua meta semanal           |\n");
		printf("*************************************************************\n\n");
	}
	
	system("pause");
	return 0;
}
