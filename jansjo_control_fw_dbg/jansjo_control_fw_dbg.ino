#define SW1 6
#define SW2 5
#define SW3 4
#define LED1 11
#define LED2 12
#define LED3 13

void setup() {
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(SW3, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1,digitalRead(SW1));
  digitalWrite(LED2,digitalRead(SW2));
  digitalWrite(LED3,digitalRead(SW3));
  delay(100); 
}
