#include "header.h"

/*
La funzione controllo_tessere si assicura che il numero delle tessere che l'utente vuole inserire sia valido
INPUT: passiamo per indirizzo x e y in modo tale da avere i valori modificati anche nel main
OUTPUT:se il numero delle tessere che l'utente vuole inserire è valido  ritornerà 1.
Dunque assegna a *x e *y i valori che dovranno avrere tali che (*x)*(*y)==n_tessere.
Se l'utente non inserisce un numero adeguato di tessere però, la function ritornerà 0.*/
int controllo_tessere(int *x, int* y)
{
    int i,n_tessere,A,B=2;//i è un indice,n_tessere è il numero delle tessere che l'utente vuole usare per il puzzle, A e B sono 2 variabili usate per assicurarsi che n_tessere sia potenza di 2
    printf("Da quante tessere e' composto il puzzle? (Il numero di tessere deve essere almeno 32 e potenza di 2) ");
    scanf_s("%d",&n_tessere);//inserisco le tessere
    if(n_tessere<32)//se in numero inserito è minore di 32 si ricomincia il gioco.
        {printf("Le tessere non sono abbastanza, devono essere almeno 32!\n");
        return 0;}
    else//se è maggiore di 32 si controlla che sia potenza di 2
      {A=log2(n_tessere);//assegno ad A il log2(n_tessere) Ex: A=log2(32)  A=5
       for(i=1;i<A;i++)
           {B=B*2;}//moltiplico 2 per se stesso per A volte Ex:B=2*2*2*2*2=32
       if (n_tessere==B)//se ottengo il numero di tessere che ho inserito, il controllo continua
           {printf("Numero di tessere accettato!\n");
            if (A%2!=0)//se A è dispari Ex: 5%2!=0
                {*x=4;//non posso assegnare a *x e *y lo stesso valore
                *y=n_tessere/(*x);}// dunque *x sarà sempre 4, mentre *y sarà sempre n_tessere/4. Ex: *x=4 *y=32/4=8
            else//se A è pari
                {*x=sqrt(n_tessere);// assegno a *x e *y la radice di n_tessere Ex; *x=rad(64)=8
                *y=*x;}
            return 1;
            }
       else//se B!=n_tessere Il numero di tessere non e' potenza di 2 e il gioco ricomincia.
           {printf("Il numero di tessere non e' potenza di 2! Prova ad usare 32, 64, 128 o 256 tessere!\n");
            return 0;}
      }
}
