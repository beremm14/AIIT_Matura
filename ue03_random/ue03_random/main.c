//
//  main.c
//  ue03_random
//
//  Created by Emil Berger on 31.01.19.
//  Copyright © 2019 AIIT_Matura. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createTips(int zahlen[][5], int sternzahlen[][2], int anzahl) {
    int i;
    for (i=0; i<anzahl; i++) {
        int j;
        for (j=0; j<5; j++) {
            zahlen[i][j] = (rand() % 50 + 1);
        }
        for (j=0; j<2; j++) {
            sternzahlen[i][j] = (rand() % 12 + 1);
        }
    }
}

int main(int argc, const char * argv[]) {
    
    srand((int)time(NULL));
    
    int zahlen[10][5];
    int sternzahlen[10][2];
    int anzahl = 10;
    
    createTips(zahlen, sternzahlen, anzahl);
    
    int i;
    for (i=0; i<anzahl; i++) {
        printf("Tip %2d: ", i+1);
        int j;
        for (j=0; j<5; j++) {
            printf("%2d ", zahlen[i][j]);
        }
        printf("| ");
        for (j=0; j<2; j++) {
            printf("%2d ", sternzahlen[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
