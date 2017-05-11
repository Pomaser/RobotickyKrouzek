void setup() {
  
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, INPUT);
  
} 

int cas=2000;
int stavSemaforu;

void loop() {
  
  boolean buttonState = digitalRead(7);
  
  switch (stavSemaforu) {

    case 1:
      digitalWrite(2, HIGH); //cervena
      digitalWrite(3, LOW);  // oranz
      digitalWrite(4, LOW);  //zelena;
      delay(cas);
      stavSemaforu++;
      break;
  
    case 2:
      digitalWrite(2, HIGH); //cervena
      digitalWrite(3, HIGH);  // oranz
      digitalWrite(4, LOW);  //zelena
      delay(cas);
      stavSemaforu++;      
      break;
  
    case 3:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      delay(cas);
      stavSemaforu++;      
      break;
  
    case 4:
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      delay(cas);
      stavSemaforu++;      
      break;
      
    case 5:
      if ( buttonState==true) {
        stavSemaforu = 1;
      } else
      {
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        delay(400);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        delay(400);
      }
      break;
      
    default:
      stavSemaforu=1;
  }    

}

