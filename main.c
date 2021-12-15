#include "header.h"//includiamo l'header creato header.h

void main(){
    int x=0,y=0;//x e y sono le variabili che indicano il numero di righe e colonne del puzzle
    int scelta_menu,a=0;//scelta menu permette di scegliere cosa l'utente vuol fare. a ci permette di includere un ciclo while
    while (a==0)//quando a!=0 il programma potrà terminare
    {
        fflush(stdin);//puliamo il buffer
        printf("\n  [ GIOCO DEL PUZZLE ]\n\n 1 - Inizia a giocare.\n 2 - Chiudi il gioco.\n");//stampo il menù
        printf("La tua scelta: ");
        scanf_s("%d",&scelta_menu);//inserisco la scelta
        switch (scelta_menu)//con uno switch do le istruzioni in base alla scelta effettuata.
       {
            case 1://se ho inserito 1 inizia il gioco
                a=controllo_tessere(&x,&y);//se il controllo delle tessere va a buon fine a diventerà 1(per uscire dal while), altimenti rimane 0
                if(a==1)
                   a=inserimento_tessere(x,y);//se l'inserimento delle tessere va a buon fine a rimarrà 1(per uscire dal while), altimenti diventerà 0
                else
                   break;//se a fosse rimasto 0 il gioco sarebbe iniziato da capo
                if(a==1){
                   genera_puzzle(x,y);//se il controllo e l'inserimento son andati a buon fine allora a==1, quindi possiamo generare i puzzle casuali
                   confronta_puzzle(x,y);}//e confrontarli con l'originale
                break;
            case 2://se ho inserito 2 esco dal programma
                a=1;//per uscire dal while iin modo tale che a!=0
                break;
            default:
                printf("Errore. Riprova.\n");//se non vengono inseriti ne 1 ne 2 il programma stampa un errore e ristampa il menù
                break;
       }
    }
    printf("\nGrazie per aver giocato!");
}
