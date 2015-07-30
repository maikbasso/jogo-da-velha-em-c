#include<stdio.h>
#include<stdlib.h>
//corpo do jogo da velha........................................................             
void play(void){
             char mat[3][3];
       int n_jogada1,n_jogada2,resultado=0,confirma;
                 
       //inicializa o game com espaço em branco na matriz
       mat[0][0]=' ';
       mat[0][1]=' ';
       mat[0][2]=' ';
       mat[1][0]=' ';
       mat[1][1]=' ';
       mat[1][2]=' ';
       mat[2][0]=' ';
       mat[2][1]=' ';
       mat[2][2]=' ';
       
       while (resultado!=1){
              
       //matriz resultado
                                printf("\n\t\t C0  C1  C2\n\n");     
              printf("\t     L0");  printf("\t %c | %c | %c\n",mat[0][0],mat[0][1],mat[0][2]);
                                    printf("\t\t-----------\n");
              printf("\t     L1");  printf("\t %c | %c | %c\n",mat[1][0],mat[1][1],mat[1][2]);
                                    printf("\t\t-----------\n");
              printf("\t     L2");  printf("\t %c | %c | %c\n\n",mat[2][0],mat[2][1],mat[2][2]);
       
       
       //pergunta jogada do jogador 1/X
       printf("\t\tJogador 1: \n");
              printf("Digite a sua jogada [L,C]: "); scanf("%d",&n_jogada1);
              confirma=0;
                           do{
                                 if((mat[0][0]==' ') && (n_jogada1==00)){mat[0][0]='X'; confirma=1;}else{
                                 if((mat[0][1]==' ') && (n_jogada1==01)){mat[0][1]='X'; confirma=1;}else{
                                 if((mat[0][2]==' ') && (n_jogada1==02)){mat[0][2]='X'; confirma=1;}else{
                                 if((mat[1][0]==' ') && (n_jogada1==10)){mat[1][0]='X'; confirma=1;}else{
                                 if((mat[1][1]==' ') && (n_jogada1==11)){mat[1][1]='X'; confirma=1;}else{
                                 if((mat[1][2]==' ') && (n_jogada1==12)){mat[1][2]='X'; confirma=1;}else{
                                 if((mat[2][0]==' ') && (n_jogada1==20)){mat[2][0]='X'; confirma=1;}else{
                                 if((mat[2][1]==' ') && (n_jogada1==21)){mat[2][1]='X'; confirma=1;}else{
                                 if((mat[2][2]==' ') && (n_jogada1==22)){mat[2][2]='X'; confirma=1;}
                                 else{
                                      printf("\t\tJogada Invalida!\n");
                                      printf("Digite a sua jogada [L,C]: "); scanf("%d",&n_jogada1);
                                                     
                                      }}}}}}}}}//fecha else
                                      system("cls");
                                      //matriz resultado
                                                         printf("\n\t\t C0  C1  C2\n\n");
                                         printf("\t     L0");  printf("\t %c | %c | %c\n",mat[0][0],mat[0][1],mat[0][2]);
                                                               printf("\t\t-----------\n");
                                         printf("\t     L1");  printf("\t %c | %c | %c\n",mat[1][0],mat[1][1],mat[1][2]);
                                                               printf("\t\t-----------\n");
                                         printf("\t     L2");  printf("\t %c | %c | %c\n\n",mat[2][0],mat[2][1],mat[2][2]);
                              }while(confirma!=1);
                                 
       //pergunta jogada do jogador 2/O
       printf("\t\tJogador 2: \n");
              printf("Digite a sua jogada [L,C]: "); scanf("%d",&n_jogada2);
              confirma=0;
                           do{
                                 if((mat[0][0]==' ') && (n_jogada2==00)){mat[0][0]='O'; confirma=1;}else{
                                 if((mat[0][1]==' ') && (n_jogada2==01)){mat[0][1]='O'; confirma=1;}else{
                                 if((mat[0][2]==' ') && (n_jogada2==02)){mat[0][2]='O'; confirma=1;}else{
                                 if((mat[1][0]==' ') && (n_jogada2==10)){mat[1][0]='O'; confirma=1;}else{
                                 if((mat[1][1]==' ') && (n_jogada2==11)){mat[1][1]='O'; confirma=1;}else{
                                 if((mat[1][2]==' ') && (n_jogada2==12)){mat[1][2]='O'; confirma=1;}else{
                                 if((mat[2][0]==' ') && (n_jogada2==20)){mat[2][0]='O'; confirma=1;}else{
                                 if((mat[2][1]==' ') && (n_jogada2==21)){mat[2][1]='O'; confirma=1;}else{
                                 if((mat[2][2]==' ') && (n_jogada2==22)){mat[2][2]='O'; confirma=1;}
                                 else{
                                      printf("\t\tJogada Invalida!\n");
                                      printf("Digite a sua jogada [L,C]: "); scanf("%d",&n_jogada2);
                                      }}}}}}}}}//fecha else
                                      system("cls");
                                      //matriz resultado
                                                         printf("\n\t\t C0  C1  C2\n\n");
                                         printf("\t     L0");  printf("\t %c | %c | %c\n",mat[0][0],mat[0][1],mat[0][2]);
                                                               printf("\t\t-----------\n");
                                         printf("\t     L1");  printf("\t %c | %c | %c\n",mat[1][0],mat[1][1],mat[1][2]);
                                                               printf("\t\t-----------\n");
                                         printf("\t     L2");  printf("\t %c | %c | %c\n\n",mat[2][0],mat[2][1],mat[2][2]);
                              }while(confirma!=1);
              system("cls");
                  //resultado
              //jogador 1/X
                 if(
                 mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]=='X' ||
                 mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]=='X' ||
                 mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X' ||
                 mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]=='X' ||
                 mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1]=='X' ||
                 mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2]=='X' ||
                 mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]=='X' ||
                 mat[0][2]=='X' && mat[1][1]=='X' && mat[2][0]=='X'
                 ){
                   printf("\nO jogador 1 venceu!");
                   resultado=1;
                   //matriz resultado
                                         printf("\n\n\t\t C0  C1  C2\n\n");
                   printf("\t     L0");  printf("\t %c | %c | %c\n",mat[0][0],mat[0][1],mat[0][2]);
                                         printf("\t\t-----------\n");
                   printf("\t     L1");  printf("\t %c | %c | %c\n",mat[1][0],mat[1][1],mat[1][2]);
                                         printf("\t\t-----------\n");
                   printf("\t     L2");  printf("\t %c | %c | %c\n\n",mat[2][0],mat[2][1],mat[2][2]);
                   }//fim if jogador 1/X
                                 else{
                                      //jogador 2/O
                                      if(
                                      mat[0][0]=='O' && mat[0][1]=='O' && mat[0][2]=='O' ||
                                      mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2]=='O' ||
                                      mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]=='O' ||
                                      mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]=='O' ||
                                      mat[0][1]=='O' && mat[1][1]=='O' && mat[2][1]=='O' ||
                                      mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2]=='O' ||
                                      mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]=='O' ||
                                      mat[0][2]=='O' && mat[1][1]=='O' && mat[2][0]=='O'
                                      ){
                                        printf("\nO jogador 2 venceu!");
                                        resultado=1;
                                        //matriz resultado
                                                          printf("\n\n\t\t C0  C1  C2\n\n");
                                    printf("\t     L0");  printf("\t %c | %c | %c\n",mat[0][0],mat[0][1],mat[0][2]);
                                                          printf("\t\t-----------\n");
                                    printf("\t     L1");  printf("\t %c | %c | %c\n",mat[1][0],mat[1][1],mat[1][2]);
                                                          printf("\t\t-----------\n");
                                    printf("\t     L2");  printf("\t %c | %c | %c\n\n",mat[2][0],mat[2][1],mat[2][2]);
                                        }//fim if jogador 2/O        
                                                    else{
                                                         //finaliza o jogo quando a matriz estiver completa
                                                         if((mat[0][0]!=' ')&&(mat[0][1]!=' ')&&(mat[0][2]!=' ')&&
                                                         (mat[1][0]!=' ')&&(mat[1][1]!=' ')&&(mat[1][2]!=' ')&&
                                                         (mat[2][0]!=' ')&&(mat[2][1]!=' ')&&(mat[2][2]!=' ')
                                                         ){
                                                                       printf("\nO jogo empatou! Deu velha!!!");
                                                                       resultado=1;
                                                                       //matriz resultado
                                                                                             printf("\n\n\t\t C0  C1  C2\n\n");
                                                                       printf("\t     L0");  printf("\t %c | %c | %c\n",mat[0][0],mat[0][1],mat[0][2]);
                                                                                             printf("\t\t-----------\n");
                                                                       printf("\t     L1");  printf("\t %c | %c | %c\n",mat[1][0],mat[1][1],mat[1][2]);
                                                                                             printf("\t\t-----------\n");
                                                                       printf("\t     L2");  printf("\t %c | %c | %c\n\n",mat[2][0],mat[2][1],mat[2][2]);
                                                                       }//fim if empate
                                                         }//fim segundo else
                                      }//fim primeiro else
                                                    
              }//fim while             
             }//fim play
             
//instrucoes....................................................................
void instrucoes(void){
     int jogar;
              printf("\t\tInstrucoes:\n\n");
              printf("1- Observe todas as jogadas possiveis:\n\n");
       
                                    printf("\t\t C0   C1   C2\n\n");
                                    
              printf("\t     L0");  printf("\t 00 | 01 | 02\n");
                                    printf("\t\t--------------\n");
              printf("\t     L1");  printf("\t 10 | 11 | 12\n");
                                    printf("\t\t--------------\n");
              printf("\t     L2");  printf("\t 20 | 21 | 22\n\n");
       
              printf("2- As jogadas sao compostas de 2 numeros sendo o primeiro indicando a linha");
              printf("\n[0,1,2] e um segundo indicando a coluna [0,1,2].\n\n");
              printf("3- Apos digitar tecle enter para concluir a jogada.\n\n");
              
              printf(">>> Deseja jogar agora?(1-sim, 2-nao)");scanf("%d",&jogar);
              if(jogar==1){system("cls");play();}
              
              }
              
//creditos......................................................................
void creditos(void){
     int jogar;
                printf("\n\n\n\t\tCreditos:\n\n");
                printf("\tNome do programa: Jogo da velha\n");
                printf("\tNome do autor:    Maik Basso\n");
                printf("\tE-mail do autor:  maik@maikbasso.com.br\n");
                printf("\tAno:              2011\n");
                printf("\tVersao:           1.0\n");
                
                printf("\n\n>>> Deseja jogar agora?(1-sim, 2-nao)");scanf("%d",&jogar);
              if(jogar==1){system("cls");play();}
                }
             
//tela principal................................................................
void inicio(void){
              int opcao;
              
              printf("\n\n\t\t\tJOGO DA VELHA");
              printf("\n\t\t\t\t    by Maik Basso");
                            
              printf("\n\n\nOpcoes: 1- Play | 2- Instrucoes | 3- Creditos | Outro valor- Finalizar Programa\n");
              printf("Digite a sua opcao: "); scanf("%d",&opcao);
                             
                             if(opcao==1){system("cls");play();}
                             if(opcao==2){system("cls");instrucoes();}
                             if(opcao==3){system("cls");creditos();}
                                                                         
                                                                                                                
              }
                          
//programa principal............................................................
main(){
       system("title Jogo da velha - maik@maikbasso.com.br");
       system("color 03");
       inicio();         
       printf("\n\n\n");
       system("pause");
       }
