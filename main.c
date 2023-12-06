#include <stdio.h>
#include <stdlib.h>

int main()
{


    // iniziamo dichiariando le variabili che andremmo ad utillizare, in questo caso usiamo float per la media perche potrebbe essere un numero non intero
    int primo,secondo;
    float media;

    printf("Ciao!Inserisci due numeri e diro la loro media aritmetica!\n");

    //Qua chiediamo di inserire il primo numero
    printf("Inserisci il primo numero: ");
    scanf("%d",&primo);

    //Qua chiediamo di inserire il secondo numero
    printf("Inserisci il secondo numero: ");
    scanf("%d",&secondo);

    //Tramite un formula impostiamo il valore della variabile media
    media=(primo+secondo)/2.0;

    //Infine diamo come out il risultato
    printf("La media aritmetica dei due numeri dati e: %g",media);

    return 0;
}
