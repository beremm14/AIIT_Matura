#include <stdio.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

float gleitkomma(void) {
    float temp = 2.48 * ADC * 3.43;
    return temp;
}

uint32_t festkomma(void) {
    //635 -> 2.48 * 256
    //876 -> 3.43 * 256
    uint32_t temp = 635L * ADC + 876;
    //Festkommazahl mit Komma zwischen Bit 7 & 8
    return temp;
}

void initIO(void) {
    
}

int main(void) {
	initIO();
    
    float gk = gleitkomma();
    float fk = (float)festkomma()/256.;
    
	while (1) {
	}
	return 0;
}
