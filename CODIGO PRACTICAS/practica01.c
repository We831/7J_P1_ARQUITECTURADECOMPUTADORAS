void main() {
      TRISC=0x00;
      TRISC=0b00000000;
      
     PORTC=0;
      PORTC=0x00;
      PORTC=0b00000000;

      while(1){
             PORTC=~PORTC;

      }

}