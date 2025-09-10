void main() {
     TRISB = 0b00000001;
while(1){
     if( PORTB.F0 == 1){
         //Rutina modo normal
          PORTB.F7 = 1;
          PORTB.F6 = 0;
          PORTB.F5 = 0;
          
          PORTB.F3 = 0;
          PORTB.F2 = 0;
          PORTB.F1 = 1;
          //Terminar la secuencia
     }
     else{
          //Semaforo 1
          PORTB.F7 = 1;
          PORTB.F6 = 0;
          PORTB.F5 = 0;
          //Semaforo 2
          PORTB.F3 = 0;
          PORTB.F2 = 1;
          PORTB.F1 = 0;
          Delay_ms(500);
          //Semaforo 1
          PORTB.F7 = 0;
          PORTB.F6 = 0;
          PORTB.F5 = 0;
          //Semaforo 2
          PORTB.F3 = 0;
          PORTB.F2 = 0;
          PORTB.F1 = 0;
          Delay_ms(500);
          
     }
}
}