#include "header.h"

/* La funzione inserimento_tessere si assicura che il valore delle tessere inserite dall'utente sia comtreso tra 1 e 3.
INPUT:  A questa funzione passiamo x e y.
OUTPUT:Se i valori inseriti sono giusti ritornerà 1 ,se l'utente non inserisce un valore adeguato  però, la function ritornerà 0.
*/
int inserimento_tessere(int x,int y)
{
    printf("Inserisci 1 per il colore rosso (Red), 2 per il colore verde (Green) e 3 per il colore blu (Blue).\n");
    int n=1,j,i,s;//n indica il numero della tessera che l'utente inserisce i e j sono indici, s è la tessera(1,2 o 3)
    for(i=0;i<x;i++)//for righe
        {
            for(j=0;j<y;j++)//for colonne
               {
                    printf("Inserisci %d-esima tessera: ",n);
                    scanf_s("%d",&s);//inserisco la tessera
                    n++;
                  switch (s){
                    case 1:
                        puzzle[0].tessere[i][j]='R';//se la il valore inserito era 1, la tessera sarà rossa R
                        break;
                    case 2:
                        puzzle[0].tessere[i][j]='G';//se la il valore inserito era 2, la tessera sarà verde G
                        break;
                    case 3:
                        puzzle[0].tessere[i][j]='B';//se la il valore inserito era 3, la tessera sarà blu B
                        break;
                    default://se il valore inserito non era 1, 2 o 3 il gioco ricomincia
                        printf("Errore nell'inserimento.\n");
                        return 0;
                       }
                }
        }
    system("cls");//puliamo lo schermo
    printf("Il tuo puzzle!\n\n");//stampiamo il puzzle
    for(i=0;i<x;i++)//for righe
        {
            for(j=0;j<y;j++)//for colonne
                {printf("%c", puzzle[0].tessere[i][j]);//Stampo la tessera (R, G, B)
                printf("    ");}// stampo uno spazio tra le tessere
            printf("\n");//vado a capo ogni riga
        }
    return 1;
}
