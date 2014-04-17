#define SW1 6
#define SW2 5
#define SW3 4
#define LED1 11
#define LED2 12
#define LED3 13
#define ledstep 5

unsigned char swpin[3] = {SW1,SW2,SW3};
unsigned char ledpwm[3] = {0,0,0};
unsigned char ledpin[3] = {LED1,LED2,LED3};
unsigned char idx = 0;

void setup() {
  for(idx=0; idx<4; ++idx){
    pinMode(swpin[idx], INPUT);
    pinMode(ledpin[idx], OUTPUT);
  }
}

void loop() {
  for(idx=0; idx<4; ++idx){
    if(true == digitalRead(swpin[idx])){
      if(255 > ledpwm[idx] + ledstep){
        ledpwm[idx] += ledstep;
      }
      else{
        ledpwm[idx] = 255;
      }
    }
    else{
      if(0 < ledpwm[idx] - ledstep){
        ledpwm[idx] -= ledstep;
      }
      else{
        ledpwm[idx] = 0;
      }
    }
    analogWrite(ledpin[idx],ledpwm[idx]);
  }
  delay(10); 
}
