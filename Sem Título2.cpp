#include<stdio.h>
#include<stdlib.h>
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

/*void peao(int numeroDeJogadas, char piece, int jogador){
	char coord[2];
	if(numeroDeJogadas<2){
		printf("O peao so pode movimentar uma casa pra frente e come nas diagonais. Selecione a coordenada do seu peao e onde quer movimenta-lo");
		scanf("%s",&coord);
		bool 
		while()
}
}*/
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
			fflush(stdin);
			printf("Vez do jogador: %d\n",jogador);
			piece = ' ';
			printf("Escolha sua peca: ");
			scanf("%c",&piece);	
			
			if(numeroDeJogadas <2){
				while(piece!='P' && piece!='H'){
				fflush(stdin);
				printf("So pode mover o peão(P) ou o cavalo(H)\n");
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
