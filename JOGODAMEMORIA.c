#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>
void easy(){
  char carta[7][20];
  int verif, ind, pontos = 0, pri, seg, erros = 0, i, nc=7;
  for ( i = 1; i < nc; i++) {
    strcpy(carta[i], "vazio");
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The World");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Star");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Chariot");
    }
    if (verif==2) {
      break;
    }
  }

  while (1) {
    do {
      system("cls");
      printf("escolha a primeira carta:\n");
      for (i = 1; i < nc; i++) {
        if (strcmp(carta[i], "vazio")!=0) {
          printf("|%i|  ", i);
        }
      }
      printf("\n");
      scanf("%i", &pri);
      getc(stdin);
    } while(pri >= nc || pri<0 );
    do {
      system("cls");
      printf("escolha a segunda carta:\n");
      for (i = 1; i < nc; i++) {
        if (strcmp(carta[i], "vazio")!=0) {
          if (i == pri) {
            printf("|%s|  ", carta[pri]);
          } else {
            printf("|%i|  ", i);

          }
        }
      }
      printf("\n");
      scanf("%i", &seg);
      getc(stdin);
    } while(seg >= nc || seg<0 );
    for (i = 1; i < nc; i++) {
      if (strcmp(carta[i], "vazio")!=0) {
        if (i == pri) {
          printf("|%s|  ", carta[pri]);
        } else if (i == seg){
          printf("|%s|  ", carta[seg]);
        } else {
          printf("|%i|  ", i);

        }
      }
    }
    printf("\n");
    if (strcmp(carta[pri], carta[seg]) == 0) {
      strcpy(carta[pri], "vazio");
      strcpy(carta[seg], "vazio");
      pontos = pontos + 50;
      printf("cartas iguais =D\n");
    } else {
      printf("cartas diferentes =/ \n");
      erros++;
    }
    printf("enter para continuar\n");
    getc(stdin);
    system("cls");
    if (pontos == 150) {
      break;
    }
  }
  pontos = pontos - erros*5;
  printf("sua pontuacao foi de %i pontos, Muito bem!\n", pontos);
  if (erros>0) {
    printf("voce errou %ix\n", erros);
  } else {
    printf("uau voce nao errou nenhuma vez, um verdadeiro TrueGamer B)\n");
  }

}
void medium(){
  char carta[9][20];
  int verif, ind, pontos = 0, pri, seg, erros = 0, i, nc= 9;
  for ( i = 1; i < nc; i++) {
    strcpy(carta[i], "vazio");
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The World");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Star");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Chariot");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Magician");
    }
    if (verif==2) {
      break;
    }
  }

  while (1) {
    do {
      system("cls");
      printf("escolha a primeira carta:\n");
      for (i = 1; i < nc; i++) {
        if (strcmp(carta[i], "vazio")!=0) {
          printf("|%i|  ", i);
        }
      }
      printf("\n");
      scanf("%i", &pri);
      getc(stdin);
    } while(pri >= nc || pri<0 );
    do {
      system("cls");
      printf("escolha a segunda carta:\n");
      for (i = 1; i < nc; i++) {
        if (strcmp(carta[i], "vazio")!=0) {
          if (i == pri) {
            printf("|%s|  ", carta[pri]);
          } else {
            printf("|%i|  ", i);

          }
        }
      }
      printf("\n");
      scanf("%i", &seg);
      getc(stdin);
    } while(seg >= nc || seg<0 );
    for (i = 1; i < nc; i++) {
      if (strcmp(carta[i], "vazio")!=0) {
        if (i == pri) {
          printf("|%s|  ", carta[pri]);
        } else if (i == seg){
          printf("|%s|  ", carta[seg]);
        } else {
          printf("|%i|  ", i);

        }
      }
    }
    printf("\n");
    if (strcmp(carta[pri], carta[seg]) == 0) {
      strcpy(carta[pri], "vazio");
      strcpy(carta[seg], "vazio");
      pontos = pontos + 50;
      printf("cartas iguais =D\n");
    } else {
      printf("cartas diferentes =/ \n");
      erros++;
    }
    printf("enter para continuar\n");
    getc(stdin);
    system("cls");
    if (pontos == 200) {
      break;
    }
  }
  pontos = pontos - erros*10;
  printf("sua pontuacao foi de %i pontos, Muito bem!\n", pontos);
  if (erros>0) {
    printf("voce errou %ix\n", erros);
  } else {
    printf("uau voce nao errou nenhuma vez, um verdadeiro TrueGamer B)\n");
  }

}
void hard(){
  char carta[11][20];
  int verif, ind, pontos = 0, pri, seg, erros = 0, i, nc= 11;
  for ( i = 1; i < nc; i++) {
    strcpy(carta[i], "vazio");
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The World");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Star");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Chariot");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Magician");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Hierophant");
    }
    if (verif==2) {
      break;
    }
  }

  while (1) {
    do {
      system("cls");
      printf("escolha a primeira carta:\n");
      for (i = 1; i < nc; i++) {
        if (strcmp(carta[i], "vazio")!=0) {
          printf("|%i|  ", i);
        }
      }
      printf("\n");
      scanf("%i", &pri);
      getc(stdin);
    } while(pri >= nc || pri<0 );
    do {
      system("cls");
      printf("escolha a segunda carta:\n");
      for (i = 1; i < nc; i++) {
        if (strcmp(carta[i], "vazio")!=0) {
          if (i == pri) {
            printf("|%s|  ", carta[pri]);
          } else {
            printf("|%i|  ", i);

          }
        }
      }
      printf("\n");
      scanf("%i", &seg);
      getc(stdin);
    } while(seg >= nc || seg<0 );
    for (i = 1; i < nc; i++) {
      if (strcmp(carta[i], "vazio")!=0) {
        if (i == pri) {
          printf("|%s|  ", carta[pri]);
        } else if (i == seg){
          printf("|%s|  ", carta[seg]);
        } else {
          printf("|%i|  ", i);

        }
      }
    }
    printf("\n");
    if (strcmp(carta[pri], carta[seg]) == 0) {
      strcpy(carta[pri], "vazio");
      strcpy(carta[seg], "vazio");
      pontos = pontos + 50;
      printf("cartas iguais =)\n");
    } else {
      printf("cartas diferentes =/ \n");
      erros++;
    }
    printf("enter para continuar\n");
    getc(stdin);
    system("cls");
    if (pontos == 250) {
      break;
    }
  }
  pontos = pontos - erros*20;
  printf("sua pontuacao foi de %i pontos, Muito bem!\n", pontos);
  if (erros>0) {
    printf("voce errou %ix\n", erros);
  } else {
    printf("uau voce nao errou nenhuma vez, um verdadeiro TrueGamer B)\n");
  }

}
void insane(){
  char carta[21][20];
  clock_t inicio, fim;
  int verif, ind, pontos = 0, pri, seg, erros = 0, i, nc= 21;
  for ( i = 1; i < nc; i++) {
    strcpy(carta[i], "vazio");
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The World");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Star");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Chariot");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Magician");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Hierophant");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Hermit");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Fool");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "The Lovers");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "Death");
    }
    if (verif==2) {
      break;
    }
  }
  for (verif = 0; ; ) {
    ind = rand() % nc;
    if (strcmp(carta[ind], "vazio")==0) {
      verif++;
      strcpy(carta[ind], "Wheel of Fortune");
    }
    if (verif==2) {
      break;
    }
  }
  inicio = clock();

  while (1) {
    do {
      system("cls");
      printf("escolha a primeira carta:\n");
      for (i = 1; i < nc; i++) {
        if (strcmp(carta[i], "vazio")!=0) {
          printf("|%2i|  ", i);
        }
        if (i == 10) {
          printf("\n");
        }
      }
      printf("\n");
      scanf("%i", &pri);
      getc(stdin);
    } while(pri >= nc || seg<0 );
    do {
      system("cls");
      printf("escolha a segunda carta:\n");
      for (i = 1; i < nc; i++) {
        if (strcmp(carta[i], "vazio")!=0) {
          if (i == pri) {
            printf("|%s|  ", carta[pri]);
          } else {
            printf("|%2i|  ", i);
          }

        }
        if (i == 10) {
          printf("\n");
        }
      }
      printf("\n");
      scanf("%i", &seg);
      getc(stdin);
    } while(seg >= nc || pri<0 );
    for (i = 1; i < nc; i++) {
      if (strcmp(carta[i], "vazio")!=0) {
        if (i == pri) {
          printf("|%s|  ", carta[pri]);
        } else if (i == seg){
          printf("|%s|  ", carta[seg]);
        } else {
          printf("|%2i|  ", i);
        }
      }
      if (i == 10) {
        printf("\n");
      }
    }
    printf("\n");
    if (strcmp(carta[pri], carta[seg]) == 0) {
      strcpy(carta[pri], "vazio");
      strcpy(carta[seg], "vazio");
      pontos = pontos + 75;
      printf("cartas iguais =D\n");
    } else {
      printf("cartas diferentes =/ \n");
      erros++;
    }
    printf("enter para continuar\n");
    getc(stdin);
    system("cls");
    if (pontos == 750) {
      break;
    }
  }
  fim = clock();
  fim = (fim-inicio)/CLOCKS_PER_SEC;
  printf("vc terminou em %ld segundos\n", fim);
  pontos = pontos - erros*40 - fim;
  printf("sua pontuacao foi de %i pontos, Muito bem!\n", pontos);
  if (erros>0) {
    printf("voce errou %ix\n", erros);
  } else {
    printf("uau voce nao errou nenhuma vez, um verdadeiro TrueGamer B)\n");
  }
}
void info(){
  printf("No JOGO DA MEMORIA voce deve usar a sua memoria para encontrar todos os pares das cartas.\n");
  printf("escolha as cartas por seu numero, uma de cada vez, e sera verificado se sao iguais.\n");
  printf("Quanto maior a dificuldade maior sera a punicao por erros e sua quantidade de cartas.\n");
  printf("Sobre a dificuldade INSANE: Maior quantidade de cartas e maior pontuacao;\nQuanto mais tempo voce levar para concluir, maior sera sua penalizacao final.\n");
  printf("\n");
}
int main(){
  int op;
  srand (time(NULL));
  while (1) {

    do {
      system("cls");
      printf("Bem Vindo ao JOGO DA MEMORIA\n");
      printf("1=Jogar\n2=Informacoes\n3=Sair\n");
      scanf("%i", &op);
      getc(stdin);
    } while(op <1 || op>3);
    switch (op) {
      case 1:
      do {
        system("cls");
        printf("Selecione uma dificuldade:\n");
        printf("1=Easy\n2=Medium\n3=Hard\n4=INSANE\n5=voltar\n");
        scanf("%i", &op);
        getc(stdin);
      } while(op <1 || op>5);

        switch (op) {
          case 1:
            easy();
            printf("\n");
            printf("pressione enter para voltar ao menu principal\n");
            getc(stdin);
            break;
            case 2:
            medium();
            printf("\n");
            printf("pressione enter para voltar ao menu principal\n");
            getc(stdin);
            break;
            case 3:
            hard();
            printf("\n");
            printf("pressione enter para voltar ao menu principal\n");
            getc(stdin);
            break;
            case 4:
            insane();
            printf("\n");
            printf("pressione enter para voltar ao menu principal\n");
            getc(stdin);
            break;
            default:
            break;
        }
        break;
      case 2:
        system("cls");
        info();
        printf("pressione enter para voltar ao menu principal\n");
        getc(stdin);
        break;
      case 3:
        printf("Ate a proxima :)\n" );
        exit(1);
    }

  }
  return 0;
}
