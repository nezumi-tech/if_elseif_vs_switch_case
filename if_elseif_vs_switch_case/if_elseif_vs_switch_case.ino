//if_else_if vs switch_case
//For Arduino Mega ONLY

int x;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {

  if (x >= 33) {
    x = 1;
  } else {
    x++;
  }

//1.32MHz  
    if(x = 1){
       PORTB |= _BV(7);
    }else if(x = 2){
      PORTB |= _BV(7);
    }else if(x = 3){
      PORTB |= _BV(7);
    }else if(x = 4){
      PORTB |= _BV(7);
    }else if(x = 5){
      PORTB |= _BV(7);
    }else if(x = 6){
      PORTB |= _BV(7);
    }else if(x = 7){
      PORTB |= _BV(7);
    }else if(x = 8){
      PORTB |= _BV(7);
    }else if(x = 9){
      PORTB |= _BV(7);
    }else if(x = 10){
      PORTB |= _BV(7);
    }else if(x = 11){
      PORTB |= _BV(7);
    }else if(x = 12){
      PORTB |= _BV(7);
    }else if(x = 13){
      PORTB |= _BV(7);
    }else if(x = 14){
      PORTB |= _BV(7);
    }else if(x = 15){
      PORTB |= _BV(7);
    }else if(x = 16){
      PORTB |= _BV(7);
    }else if(x = 17){
      PORTB |= _BV(7);
    }else if(x = 18){
      PORTB |= _BV(7);
    }else if(x = 19){
      PORTB |= _BV(7);
    }else if(x = 20){
      PORTB |= _BV(7);
    }else if(x = 21){
      PORTB |= _BV(7);
    }else if(x = 22){
      PORTB |= _BV(7);
    }else if(x = 23){
      PORTB |= _BV(7);
    }else if(x = 24){
      PORTB |= _BV(7);
    }else if(x = 25){
      PORTB |= _BV(7);
    }else if(x = 26){
      PORTB |= _BV(7);
    }else if(x = 27){
      PORTB |= _BV(7);
    }else if(x = 28){
      PORTB |= _BV(7);
    }else if(x = 29){
      PORTB |= _BV(7);
    }else if(x = 30){
      PORTB |= _BV(7);
    }else if(x = 31){
      PORTB |= _BV(7);
    }else if(x = 32){
      PORTB |= _BV(7);
    }

//312ｋHz
/*
  switch (x) {
    case 1: PORTB |= _BV(7); break;
    case 2: PORTB |= _BV(7); break;
    case 3: PORTB |= _BV(7); break;
    case 4: PORTB |= _BV(7); break;
    case 5: PORTB |= _BV(7); break;
    case 6: PORTB |= _BV(7); break;
    case 7: PORTB |= _BV(7); break;
    case 8: PORTB |= _BV(7); break;
    case 9: PORTB |= _BV(7); break;
    case 10: PORTB |= _BV(7); break;
    case 11: PORTB |= _BV(7); break;
    case 12: PORTB |= _BV(7); break;
    case 13: PORTB |= _BV(7); break;
    case 14: PORTB |= _BV(7); break;
    case 15: PORTB |= _BV(7); break;
    case 16: PORTB |= _BV(7); break;
    case 17: PORTB |= _BV(7); break;
    case 18: PORTB |= _BV(7); break;
    case 19: PORTB |= _BV(7); break;
    case 20: PORTB |= _BV(7); break;
    case 21: PORTB |= _BV(7); break;
    case 22: PORTB |= _BV(7); break;
    case 23: PORTB |= _BV(7); break;
    case 24: PORTB |= _BV(7); break;
    case 25: PORTB |= _BV(7); break;
    case 26: PORTB |= _BV(7); break;
    case 27: PORTB |= _BV(7); break;
    case 28: PORTB |= _BV(7); break;
    case 29: PORTB |= _BV(7); break;
    case 30: PORTB |= _BV(7); break;
    case 31: PORTB |= _BV(7); break;
    case 32: PORTB |= _BV(7); break;

    default: break;

  }
  */

  PORTB &= ~_BV(7);
}
