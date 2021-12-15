#include "header.h"
/* La procedura confronta_puzzle confronta le tessere dei 1000 puzzle casuali con le tessere del puzzle dell utente. e stampa i 10 puzzle più simili
INPUT:A questa procedura passiamo x e y
OUTPUT: nessuno*/
void confronta_puzzle(int x,int y)
{
    system("cls");//puliamo lo schermo
    int i,j,h;
    int max[]={1,2,3,4,5,6,7,8,9,10};//inizializzo l'array max[] che conterrà gli indici dei puzzle che hanno il matching migliore
    for (i=1;i<=1000;i++)//for puzzle
    {
        for (j=0;j<x;j++)//for righe
        {
            for (h=0;h<y;h++)//for colonne
            {
                if(puzzle[0].tessere[j][h]==puzzle[i].tessere[j][h])//se la tessera del puzzle casuale è uguale a quella dell' utente aggiunge un punto al matching
               {puzzle[i].punteggio_matching++;}
            }
        }
    }
    //inseriamo nell array max gli indici dei puzzle col punteggio_matching migliore
    int min=100;
    for(h=11;h<=1000;h++){//for puzzle(iniziamo dall'11 perche gli altri sono stati inizializzati nel max[])
        for(i=0;i<10;i++)//for scorrimento max[]
        {//individuo il valore presente nel valore max[] più piccolo
            if(puzzle[max[i]].punteggio_matching<min)
                {min=i;}
        }
        if(puzzle[h].punteggio_matching>puzzle[max[min]].punteggio_matching)//confronto puzzle[h].punteggio_matching con puzzle[max[min]].punteggio_matching e se maggiore salviamo l'indice
            max[min]=h;
        }

    for (i=1;i<=10;i++)
    {
//stampo i 10 puzzle più simili all'originale
        printf("Puzzle piu' simile numero %d. Punteggio matching: %d\n",i,puzzle[max[i-1]].punteggio_matching);
        for (j=0;j<x;j++){//for righe
            for (h=0;h<y;h++)//for colonne
                   {printf("%c", puzzle[max[i-1]].tessere[j][h]);
                    printf("    ");}
            printf("\n");}
        printf("\n");}


//ristampo il puzzle originale
    printf("Il tuo puzzle!\n");
    for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
                {printf("%c", puzzle[0].tessere[i][j]);
                printf("    ");}
            printf("\n");
        }
}

