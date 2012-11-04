#include <avr/io.h>
#include <util/delay.h>

int main(){
	DDRD = 0x80;
	PORTD = 0;
	while(1){
		PORTD = 0x80;
		_delay_ms(500);
		PORTD = 0x00;
		_delay_ms(500);
	}
}
