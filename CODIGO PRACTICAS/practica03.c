

short conta;

void main() {

TRISB=0B00000000;

PORTB=0;

while(1){

conta=0; //posiciona el servo a 180�

while(conta<=50){ //El ciclo repite 50 veces el pulso siguiente (50Hz)

PORTB.f0=1; //se env�a una se�al alta

delay_us(2000); // la se�al dura 2 milisegundos alta

PORTB.f0=0; // se env�a una se�al baja

delay_us(18000); // la se�al dura 18 milisegundos baja

conta++;} // en total el pulso dura la suma de los tiempos anteriores, es decir 20 milisegundos


Delay_ms(2000); //Permanece 2 segundos en la posici�n anterior


conta=0;

while(conta<=50){ //posiciona el servo a 90�

PORTB.F0=1;

delay_us(1250);

PORTB.F0=0;

delay_us(18750);

conta++;}

Delay_ms(2000);


conta=0;

while(conta<=50){ //posiciona el servo a 0�

PORTB.f0=1;

delay_us(500);

PORTB.f0=0;

delay_us(19500);

conta++;}


Delay_ms(2000);

}

}