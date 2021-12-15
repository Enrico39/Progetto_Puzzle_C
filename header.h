/*
Nome del progetto: Puzzle
Creatore del programma: Madonna Enrico
Descrizione:
Si vuole implementare un programma per la simulazione del gioco del puzzle. Si
suppone di avere n tessere (n è una potenza di 2 e almeno 32) che possono essere
disposte su una matrice quadrata.
Il gioco inizia chiedendo all’utente di inserire le n tessere scelte tra tre colori (o
simboli). Successivamente vengono generate 1000 matrici casuali usando gli stessi
colori. Vengono visualizzate le 10 matrici più simili a quella ottenuta con le tessere
scelte dall’utente.
Effettuare almeno 3 simulazioni variando il numero di tessere. */

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

//includo tutte  le librerie necessarie
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define M 1001//stabilisco il massimo di puzzle definibili e il size massimmo della matrice M*M

//definisco una struct per gestire le operazioni
 typedef struct _puzzle{char tessere[M][M];//char tessere[M][M] è la matrice che ci permete di immagazzinare le tessere del puzzle
                        int punteggio_matching;}gioco;//int punteggio_matching immagazzina il numero di tessere dei puzzle casuali che sono uguali alle tessere del puzzle inserito dall'utente

//questi sono i prototipi delle funzioni e procedure usate.
int controllo_tessere(int*,int*);//controlla se il numero delle tessere inserito è adeguato
int inserimento_tessere(int,int);//controlla se le tessere inserite sono adeguate
void genera_puzzle(int,int);//genera 1000 puzzle casuali
void confronta_puzzle(int,int);//confronta i 1000 puzzle con quello inserito dall'utente

gioco puzzle[M];//questo array di tipo puzzle rappresenta i puzzle creati all'interno del gioco

#endif // HEADER_H_INCLUDED
