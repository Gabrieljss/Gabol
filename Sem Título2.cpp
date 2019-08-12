#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
void showTabu(char casas[8][8]){
	//NESSA FUNCAO IREMOS MOSTRAR O TABULEIRO NO CONSOLE
	printf("\t    A B C D E F G H\n");
	printf("\t 1 |%c|%c|%c|%c|%c|%c|%c|%c|\n",casas[0][0],casas[0][1],casas[0][2],casas[0][3],casas[0][4],casas[0][5],casas[0][6],casas[0][7]);
	printf("\t 2 |%c|%c|%c|%c|%c|%c|%c|%c|\n",casas[1][0],casas[1][1],casas[1][2],casas[1][3],casas[1][4],casas[1][5],casas[1][6],casas[1][7]);
	printf("\t 3 |%c|%c|%c|%c|%c|%c|%c|%c|\n",casas[2][0],casas[2][1],casas[2][2],casas[2][3],casas[2][4],casas[2][5],casas[2][6],casas[2][7]);
	printf("\t 4 |%c|%c|%c|%c|%c|%c|%c|%c|\n",casas[3][0],casas[3][1],casas[3][2],casas[3][3],casas[3][4],casas[3][5],casas[3][6],casas[3][7]);
	printf("\t 5 |%c|%c|%c|%c|%c|%c|%c|%c|\n",casas[4][0],casas[4][1],casas[4][2],casas[4][3],casas[4][4],casas[4][5],casas[4][6],casas[4][7]);
	printf("\t 6 |%c|%c|%c|%c|%c|%c|%c|%c|\n",casas[5][0],casas[5][1],casas[5][2],casas[5][3],casas[5][4],casas[5][5],casas[5][6],casas[5][7]);
	printf("\t 7 |%c|%c|%c|%c|%c|%c|%c|%c|\n",casas[6][0],casas[6][1],casas[6][2],casas[6][3],casas[6][4],casas[6][5],casas[6][6],casas[6][7]);
	printf("\t 8 |%c|%c|%c|%c|%c|%c|%c|%c|\n",casas[7][0],casas[7][1],casas[7][2],casas[7][3],casas[7][4],casas[7][5],casas[7][6],casas[7][7]);

}
void tabuleiro(){
	
		int i = 254;
		//MATRIZ QUE IRA REPRESENTAR NOSSO TABULEIRO
	char tabu[8][8] = 	{{'T','H','B','Q','K','B','H','T'},
                    	{'P','P','P','P','P','P','P','P'},
						{i,' ',i,' ',i,' ',i,' '}, 
						{' ',i,' ',i,' ',i,' ',i},
						{i,' ',i,' ',i,' ',i,' '},
						{' ',i,' ',i,' ',i,' ',i},
						{'p','p','p','p','p','p','p','p'},
						{'t','h','b','q','k','b','h','t'}};
		//NA LINHA ABAIXO ESTAMOS MOSTRANDO NOSSA MATRIZ
   showTabu(tabu);

}
void checarExistenciaDeCasa(char coord[2]){
		 while(strcmp(coord,"A1")!=0 && strcmp(coord,"A7")!=0 && strcmp(coord,"B6")!=0 && strcmp(coord,"C4")!=0  && strcmp(coord,"D2")!=0 && strcmp(coord,"D7")!=0 && strcmp(coord,"E4")!=0 && strcmp(coord,"F1")!=0 && strcmp(coord,"F6")!=0 && strcmp(coord,"G3")!=0 && strcmp(coord,"G7")!=0 &&
		       strcmp(coord,"A2")!=0 && strcmp(coord,"B2")!=0 && strcmp(coord,"B7")!=0 && strcmp(coord,"C5")!=0  && strcmp(coord,"D3")!=0 && strcmp(coord,"D8")!=0 && strcmp(coord,"E5")!=0 && strcmp(coord,"F2")!=0 && strcmp(coord,"F7")!=0 && strcmp(coord,"G4")!=0 && strcmp(coord,"G8")!=0 && 
		       strcmp(coord,"A3")!=0 && strcmp(coord,"B3")!=0 && strcmp(coord,"B8")!=0 && strcmp(coord,"C6")!=0  && strcmp(coord,"D4")!=0 && strcmp(coord,"E1")!=0 && strcmp(coord,"E6")!=0 && strcmp(coord,"F3")!=0 && strcmp(coord,"F8")!=0 && strcmp(coord,"G5")!=0 && strcmp(coord,"H1")!=0 && 
		       strcmp(coord,"A4")!=0 && strcmp(coord,"B4")!=0 && strcmp(coord,"C1")!=0 && strcmp(coord,"C7")!=0  && strcmp(coord,"D5")!=0 && strcmp(coord,"E2")!=0 && strcmp(coord,"E7")!=0 && strcmp(coord,"F4")!=0 && strcmp(coord,"G1")!=0 && strcmp(coord,"G6")!=0 && strcmp(coord,"H2")!=0 &&
		       strcmp(coord,"A5")!=0 && strcmp(coord,"A8")!=0 && strcmp(coord,"C3")!=0 && strcmp(coord,"D1")!=0  && strcmp(coord,"D6")!=0 && strcmp(coord,"E3")!=0 && strcmp(coord,"E8")!=0 && strcmp(coord,"F5")!=0 && strcmp(coord,"G2")!=0 && strcmp(coord,"H3")!=0&& 
			   strcmp(coord,"H4")!=0&& strcmp(coord,"H5")!=0 && strcmp(coord,"H6")!=0 && strcmp(coord,"H7")!=0 && strcmp(coord,"H8")!=0 && strcmp(coord,"A6")!=0 && strcmp(coord,"B1")!=0 && strcmp(coord,"B5")!=0 && strcmp(coord,"C2")!=0 && strcmp(coord,"C8")!=0){
			   printf("Coordenada invalida");
			   gets(coord);
			   }
}				
void peao(int numeroDeJogadas, char piece, int jogador, char casas[8][8]){
	char coord[2];
	if(piece == 'P'||piece == 'p'){
	if(numeroDeJogadas<2){
		printf("O peao so pode movimentar uma casa pra frente e come nas diagonais. Selecione a coordenada do seu peao e onde quer movimenta-lo");
		scanf("%s",&coord);
		checarExistenciaDeCasa(coord);
		/*
			FALTA VERIFICAR SE A CASA ESCOLHIDA EH UM PEAO
		
		
		
		*/
		switch(coord[0]){
			case 'A':
				switch(coord[1]){
					case'1':
						if(jogador==1){
						   //if(casas[0][1])	
					//	}
						break;
					case '2':
						
						break;
					case '3':
						
						break;
					case '4':
						
						break;
					case'5':
						
						break;
					case '6':
						
						break;
					case'7':
						
						break;
					case '8':
						
						break;
					default:
						printf("invalido");
						break;				
				}
					
				break;
		}
	}
 }
}
}
void rodarJogo(){
	int emJogo = 1;
	int jogador = 1;
	tabuleiro();
	/*
	NA PRIMEIRA LINHA DA FUNCAO, ESTAMOS CRIANDO UMA VARIAVEL QUE IRA VERIFICAR SE O XADREZ ESTA EM JOGO (1: SIM, 0:NAO)
	NA SEGUNDA LINHA, CRIAMOS UMA OUTRA VARIAVEl PARA DECIDIR A VEZ DO JOGADOR (1 OU 2)
	NA TERCEIRA LINHA, CHAMAMOS O NOSSO TABULEIRO
	NO WHILE ABAIXO, ENQUANTO O XADREZ ESTIVER EM JOGO(emJogo=1), IREMOS REALIZAR OS SEGUINTES COMANDOS:
	*/
	int numeroDeJogadas = 0; 
	char piece;
	while(emJogo==1){
		
setlocale(LC_ALL, "portuguese");
			fflush(stdin);
			printf("Vez do jogador: %d\n",jogador);
			printf("Escolha sua peça: ");
			scanf("%c",&piece);	
			
			if(numeroDeJogadas <2){
				while(piece!='P' && piece!='H'){
				fflush(stdin);
				printf("So pode mover o peao(P) ou o cavalo(H)\n");
				scanf("%c",&piece);
			}
		
		}else{
			while(piece!='P' && piece!='H'&& piece!='T'&& piece!='K'&& piece!='Q' && piece!='P'){
			fflush(stdin);	
			printf("So pode mover peões(P), cavalo(H), Bis") ;
		}
		
		}
	if(jogador==1){
			jogador=2;
		}else{
			jogador=1;
		}
		numeroDeJogadas++;
			}
}

int main(){
rodarJogo();
return 0;
}
