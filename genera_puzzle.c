#include "header.h"

/* La procedura genera_puzzle genera 1000 puzzle casuali con lo stesso numero di tessere del puzzle dell utente.
INPUT:A questa procedura passiamo x e y
OUTPUT: nessuno*/
void genera_puzzle(int x,int y)
{
    int nc,i,j,h;//nc è la variabile per un numero casuale
    srand ((unsigned int) time(0));
    printf("Sta per iniziare la generazione di 1000 puzzle casuali. ");
    system("\nPAUSE");//mette in pausa l'esecuzione del programma fin quando l'utente non preme un tasto
    system("cls");//puliamo lo schermo
    for (i=1;i<=1000;i++)//for generazione 1000 puzzle
        {puzzle[i].punteggio_matching=0;//inizializzo il punteggio_matching del nuovo puzzle a 0
                for (j=0;j<x;j++)//for righe
                    {
                        for (h=0;h<y;h++)//for colonne
                            {
                               nc=1+rand()%3;//genero un nuomro casuale da 1 a 3
                               switch (nc)
                               {
                                case 1://se nc=1 assegnamo alla tessera il colore rosso
                                    puzzle[i].tessere[j][h]='R';
                                    break;
                                case 2://se nc=2 assegnamo alla tessera il colore verde
                                    puzzle[i].tessere[j][h]='G';
                                    break;
                                case 3://se nc=3 assegnamo alla tessera il colore blu
                                    puzzle[i].tessere[j][h]='B';
                                    break;
                               }

                            }
                    }
        }
    int controllo;
    printf("\n\aPuzzle casuali creati!\nInserisci 1 se vuoi che vangano stampati a schermo, altrimenti inserisci un numero qualsiasi per vedere i 10 puzzle casuali piu' simili al tuo: ");
    scanf_s("%d",&controllo);//l'utente puo scegliere se visualizzare le 1000 matrici create inserendo 1
    if(controllo==1)
        {for (i=1;i<=1000;i++){// for puzzle
         printf("Puzzle casuale numero %d:\n",i);
         for (j=0;j<x;j++){//for righe
             for (h=0;h<y;h++)//for colonne
                   {printf("%c", puzzle[i].tessere[j][h]);
                    printf("    ");}
        printf("\n");}
        printf("\n");}
        printf("Stanno per essere visualizzati i 10 puzzle casuali piu' simili al tuo. ");
        system("\nPAUSE");//mettiamo in pausa il programma
        }
    return ;
}
