#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int parametroL, parametroM, parametroR, parametro_construtor, image[9], count_player, verificador,verificar_fim_do_jogo, contar_velha;
char escolha[10];
void left_image(int countL){
    if(countL==0){
    /*left*/
    if(parametroL==0 || parametroL==2){
    printf("       ------- ");
    }
    else{
        printf("   ------- ");
    }
    /*printf("       ''''''' ");
    printf("       ''''''' ");*/
    }
    if(countL==1){
    if(parametroL==0 || parametroL==2){ 
           /*X*/
    printf("        **  ** "); 
    }
    else{
    printf("      **   ");
    }
    /*printf("       **  ** ");*/
    }
    /*0*/
    if(countL==2){
    if(parametroL==0 || parametroL==2){ 
    printf("        *****  ");
    }
    else{
    printf("   *     * ");
    }
    /*printf("        *****  ");*/
    }
      parametroL++;
    if(parametroL ==3){
        parametroL=0;
    }
}
void mid_image(int countM){
    if(countM==0){
    /*mid VAZIO*/
    printf("+ ------- ");
    /*printf("+ ''''''' ");
    printf("+ ''''''' ");*/
    }
    if(countM==1){
    /*mid X*/
    if(parametroM==0 || parametroM==2){
    printf("+ **  **  ");
    }
    else{
    printf("+   **    ");
    }
    /*printf("+ **  **  ");*/
    }
    if(countM==2){
    /*mid 0*/
    if(parametroM==0 || parametroM==2){
    printf("+  *****  ");
    }
    else{
    printf("+ *     * ");
    }
    /*printf("+  ***** ");*/
    }
     parametroM++;
    if(parametroM ==3){
        parametroM=0;
    }
}
void right_image(int countR){
     /*right VAZIO*/
    if(countR==0){
    printf("+ -------   \n");
    }
    if(countR==1){
    /*right X*/
    if(parametroR==0 || parametroR==2){
    printf("+ **  **   \n");
    }
    else{
    printf("+   **     \n");
    }
    }
    if(countR==2){
    /*right 0*/
    if(parametroR==0 || parametroR==2){
    printf("+  *****    \n");
    }
    else{
    printf("+ *     *   \n");
    }
    }
    parametroR++;
    if(parametroR ==3){
        parametroR=0;
    }
    
}
void construtor_image(int left, int mid, int right){

    int contador=2;
    if(parametro_construtor==1 || parametro_construtor==2){
        printf("       +++++++++++++++++++++++++++   \n");
    }
    for (int time = 0; time <= contador; time++)
    {
        if(time==1){
            printf("   %d", parametro_construtor+1);
        }
        left_image(left);
        mid_image(mid);
        right_image(right);
    }
    parametro_construtor++;
    if(parametro_construtor==3){
        parametro_construtor=0;
    }
}
void init_image(){
    int count=6;
    system("cls");

    printf(" \n\n       >>>>  JOGO DA VELHA  <<<<    \n\n");
    printf("         A         B           C\n\n");
    for (int i = 0; i <= count; i=i+3)
    {
         construtor_image(image[i], image[i+1], image[i+2]);   
    }

}
int game_inicio(){
    int A;
    printf(" \n\n       >>>>  JOGO DA VELHA  <<<<    \n\n");
    printf("       Bem-vindo ao game    \n\n ");
    printf("       Deseja começar uma nova rodade?\n");
    printf("       Digite digite 1 para comecar: ");
    scanf("%d", &A);
    return A;
}
void posicao_game(){
    if(strcmp(escolha, "A1")==0 || strcmp(escolha, "A2")==0 || strcmp(escolha, "A3")==0 || strcmp(escolha, "B1")==0 || strcmp(escolha, "B2")==0 || strcmp(escolha, "B3")==0 || strcmp(escolha, "C1")==0 || strcmp(escolha, "C2")==0 || strcmp(escolha, "C3")==0){
    if(strcmp(escolha, "A1")==0){
        if(image[0]==0){
        image[0]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
       if(strcmp(escolha, "A2")==0){
              if(image[3]==0){
        image[3]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
       if(strcmp(escolha, "A3")==0){
           if(image[6]==0){
        image[6]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
       if(strcmp(escolha, "B1")==0){
            if(image[1]==0){
        image[1]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
       if(strcmp(escolha, "B2")==0){
        if(image[4]==0){
        image[4]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
       if(strcmp(escolha, "B3")==0){
        if(image[7]==0){
        image[7]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
       if(strcmp(escolha, "C1")==0){
        if(image[2]==0){
        image[2]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
       if(strcmp(escolha, "C2")==0){
          if(image[5]==0){
        image[5]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
       if(strcmp(escolha, "C3")==0){
        if(image[8]==0){
        image[8]=count_player+1;
        verificador=0;
        printf("\n\n        Posicao processada com sucesso");
        }
        else{
            printf("\n\n        Esta posicao ja foi jogava\n\n        Tente novamente");
            verificador=1;
        }
    }
    }
    else{
        printf("\n\n        Esta posicao e invalida\n\n        Tente novamente");
        verificador=1;
    }
}
void verificar_ganhador(char player1[10], char player2[10]){
    int contador=1;
    while(contador!=3){
    if((image[0]==contador && image[1]==contador && image[2]==contador ) ||
       (image[3]==contador && image[4]==contador && image[5]==contador ) || 
       (image[6]==contador && image[7]==contador && image[8]==contador ) ||
       (image[0]==contador && image[3]==contador && image[6]==contador ) ||
       (image[1]==contador && image[4]==contador && image[7]==contador ) ||
       (image[2]==contador && image[5]==contador && image[8]==contador ) ||
       (image[0]==contador && image[4]==contador && image[8]==contador ) ||
       (image[2]==contador && image[4]==contador && image[6]==contador ) )
       {
            system("cls");
            printf(" \n\n       >>>>  JOGO DA VELHA  <<<<    \n\n");

           if(contador==1){
            
           printf("\n\n         O PLAYER %s VENCEU A PARTIDA\n\n      ", player1);}
           else{
               printf("\n\n         O PLAYER %s VENCEU A PARTIDA\n\n     ", player2);
           }
           verificar_fim_do_jogo=1; 
           system("pause");
       }
       contador++;
    }
    contar_velha++;
    if(contar_velha==9){
        system("cls");
        printf(" \n\n       >>>>  JOGO DA VELHA  <<<<    \n\n");
        printf("\n\n       O JOGO ACABOU O RESULTADO FOI VELHA\n\n      ");
        verificar_fim_do_jogo=1; 
    }
}
int main (){
    system("color F0");
    int A, contador=8, parar/*, new_game*/;
    char Player[1][10];
    parametroL=0;parametroM=0;parametroR=0;parametro_construtor=0;
    count_player=0;contar_velha=0;/*verificar_fim_do_jogo=0;*/
       for (int k = 0; k <= contador; k++)
    {
        image[k]=0;
    }

    A= game_inicio();

    if(A==1){

    system("cls");

    printf(" \n\n       >>>>  JOGO DA VELHA  <<<<    \n\n");
    printf("       Qual o nome do jogador 1: ");
    scanf(" %[^\n]s", Player[0]);
    fflush(stdin);
    printf("       Qual o nome do jogador 2: ");
    scanf(" %[^\n]s", Player[1]);
   
    do
    {
    do{
    init_image();

    printf("\n\n       E a vez do player %s", Player[count_player]);
    printf("\n       Qual posicao deseja jogar: ");
    scanf(" %[^\n]s", escolha);
    posicao_game();
    printf("\n\n     ");
    system("pause");
    }
    while(verificador==1);
    verificar_ganhador(Player[0], Player[1]);
    if(verificar_fim_do_jogo==0){
    printf("\n\n      Deseja continuar digite 1: ");
    scanf("%d", &parar);
    count_player++;
    if(count_player==2){
        count_player=0;
    }
    }
    else{
        parar=0;
    }
    }
    while (parar==1) ;
    }
    return 0;
}