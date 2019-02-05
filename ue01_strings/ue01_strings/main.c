//
//  main.c
//  ue01_strings
//
//  Created by Emil Berger on 05.02.19.
//  Copyright © 2019 AIIT_Matura. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <string.h>

int calcMinumum (char m[]) {
    int min = INT_MAX;
    if (m != NULL) {
        char *s = strtok(m, "\t");
        while (s != NULL) {
            int x;
            if (sscanf(s, "%d", &x) != 1) {
                return INT_MAX;
            }
            if (x < min) {
                min = x;
            }
            s = strtok(NULL, "\t");
        }
    }
    return min;
}


int main () {
    
    char messung[] = "20\t10\t100\t40";
    
    int min = calcMinumum(messung);
    printf("Minimum = %d\n", min);
    
    return 0;
}
