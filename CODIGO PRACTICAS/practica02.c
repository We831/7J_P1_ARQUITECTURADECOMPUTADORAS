void main(){

   TRISC=0;        // Configura todo el puerto C (RC0–RC7) como salida
   PORTC=0;        // Apaga todos los pines del puerto C

   PORTC.F0=1;     // Enciende únicamente RC0
   Delay_ms(5000); // Mantiene RC0 encendido durante 5 segundos

   while(1){       // Ciclo infinito

      // Encender pines pares (RC0, RC2, RC4, RC6) y apagar impares
      PORTC=0b01010101;  // Equivalente a escribir cada pin individualmente
      Delay_ms(1000);    // Mantiene el estado 1 segundo

      // Encender pines impares (RC1, RC3, RC5, RC7) y apagar pares
      PORTC=0b10101010;
      Delay_ms(1000);    // Mantiene el estado 1 segundo
   }
}

