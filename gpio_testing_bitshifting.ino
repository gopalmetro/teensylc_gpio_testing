// Brute force identification and testing of GPIO Port pins for Teensy LC/3.x boards

// output test:
int pinTablePortD[] = {2,14,7,8,21,5};
int pinTablePortB[] = {16,17,18,19};

byte ch;
int dt = 500;

void setup() {
  Serial.begin(38400);
  if(!Serial) {
    delay(dt);
    Serial.println("Serial begin...");
  }
  
  for (int i=0; i<6; i++) { 
    pinMode(pinTablePortD[i],OUTPUT);
   Serial.print("PortD Pin: ");Serial.println(pinTablePortD[i]); 
  }
  
  for (int i=0; i<4; i++) { 
    pinMode(pinTablePortB[i],OUTPUT);
    Serial.print("PortB Pin: ");Serial.println(pinTablePortB[i]); 
  }
  
  GPIOD_PDOR = gpd;
  GPIOB_PDOR = gpb;
  delay(3000);
 
  GPIOD_PDOR = 255;
  GPIOB_PDOR = 255;
  delay(500);
  GPIOD_PDOR = 0;
  GPIOB_PDOR = 0;
  delay(dt); 
}

void loop() {
  
  Serial.println(ch);
  GPIOD_PDOR = B00000001;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = 1 << 0;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = B00000010;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = 1 << 1;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = B00000100;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = 1 << 2;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = B00001000;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = 1 << 3;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
//  GPIOD_PDOR = B00010000;
//  delay(dt);
//  GPIOD_PDOR = B00100000;
//  delay(dt);
  GPIOD_PDOR = B01000000;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = 1 << 6;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = B10000000;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = 1 << 7;
  delay(dt);
  GPIOD_PDOR = 0;
  delay(dt);
  GPIOD_PDOR = B11001111;
  delay(dt);
  GPIOD_PDOR = B00000000;
  delay(dt);
}
