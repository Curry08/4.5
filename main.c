#include <stdio.h>

int main(){
    int nprod;
    float przprod,tot;
    printf("Inserisci il numero dei prodotti: ");
    scanf("%d", &nprod);
    while(nprod!=0){
        printf("Inserisci il prezzo dei prodotti: ");
        scanf("%f", &przprod);
        tot+=przprod;
        nprod--;
    }
    printf("Il costo totale è di %f",tot);
    return 0;
}
