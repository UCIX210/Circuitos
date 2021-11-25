float Va;
float Vb;
float Vab;
int leds[12]={2,3,4,5,6,7,8,9,10,11,12};

int ledRojo4=leds[0];
int ledRojo3=leds[1];
int ledRojo2=leds[2];
int ledRojo1=leds[3];
int ledNaranja2=leds[4];
int ledNaranja1=leds[5];
int ledAmarillo2=leds[6];
int ledAmarillo1=leds[7];
int ledVerde3=leds[8];
int ledVerde2=leds[9];
int ledVerde1=leds[10];

void setup()
{
  Serial.begin(9600);
  for (int i = 0; i < 12; i++){
    pinMode(leds[i], OUTPUT);
  }
}
void loop()
{
	Va=analogRead(0);
  Va=Va * 5 / 1023;
  Vb=analogRead(1);
  Vb=Vb * 5 / 1023;
  Vab=Va - Vb;
  Serial.print("A=");
  Serial.println(Va);
  Serial.print("B=");
  Serial.println(Vb);
  Serial.print("Vab=");
  Serial.println(Vab);
  Serial.println("----------");
  Serial.println("");
  //#green//////////////////////////-40
  if (Vab>=2.05)
  {
    digitalWrite(ledVerde1, HIGH);
  }
///////////////////////////40-45
  if (Vab<2.05)
  {
    digitalWrite(ledVerde2, HIGH);
  }else
  {
    digitalWrite(ledVerde2, LOW);
  }
///////////////////////////45-50
  if (Vab<1.95)
  {
    digitalWrite(ledVerde3, HIGH);
  }else
  {
    digitalWrite(ledVerde3, LOW);
  }
//#//#yellow/////////////////////////50-55   
  if (Vab<1.84)
  {
    digitalWrite(ledAmarillo1, HIGH);
  }else
  {
    digitalWrite(ledAmarillo1, LOW);
  }
/////////////////////////////55-60
  if (Vab<1.72)
  {
    digitalWrite(ledAmarillo2, HIGH);
  }else
  {
    digitalWrite(ledAmarillo2, LOW);
  }
//#//#orange////////////////////////60-65
  if (Vab<1.59)
  {
    digitalWrite(ledNaranja1, HIGH);
  }else
  {
    digitalWrite(ledNaranja1, LOW);
  }
////////////////////////////65-70
  if (Vab<1.45)
  {
    digitalWrite(ledNaranja2, HIGH);
  }else
  {
    digitalWrite(ledNaranja2, LOW);
  }
//#//#red////////////////////////70-75
  if (Vab<1.29)
  {
    digitalWrite(ledRojo1, HIGH);
  }else
  {
    digitalWrite(ledRojo1, LOW);
  }
////////////////////////////75-80
  if (Vab<1.12)
  {
    digitalWrite(ledRojo2, HIGH);
  }else
  {
    digitalWrite(ledRojo2, LOW);
  }
/////////////////////////////80-88
  if (Vab<0.95)
  {
    digitalWrite(ledRojo3, HIGH);
  }else
  {
    digitalWrite(ledRojo3, LOW);
  }
////////////////////////////////+88  
  if (Vab<0.95)
  {
    do
    {
      digitalWrite(ledRojo4, HIGH);
      delay(500);
      digitalWrite(ledRojo4, LOW);
      Va=analogRead(0);
      Va=Va * 5 / 1023;
      Vb=analogRead(1);
      Vb=Vb * 5 / 1023;
      Vab=Va - Vb;
      delay(500);
    } while (Vab<0.95);
  }else
  {
    digitalWrite(ledRojo4, LOW);
  } 
////////////////////////////////#
  delay(500);
}