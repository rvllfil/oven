// meng-include librari TFT and SPI 
#include <TFT.h>  
#include <SPI.h>

// meng-include librari Thermocouple
#include <max6675.h>

// Mendeklarasikan pin TFT LCD
#define vcc 41
#define gnd 43
int cs = 53; //#define cs  53
#define rst 45
#define dc  47
int sda = 51; //#define sda 51 
#define sck 52
#define led 49
//TFT TFTscreen = TFT(cs, dc, rst);

// Mendeklarasikan pin TFT LCD
int thermo_so_pin  = 39;
//int thermo_cs_pin  = 51;
//int thermo_sck_pin = 53;  
MAX6675 thermocouple(cs, sda, thermo_so_pin);

void setup() {
  pinMode(vcc, OUTPUT);
  pinMode(gnd, OUTPUT);
  pinMode(led, OUTPUT);
  digitalWrite(vcc, HIGH);
  digitalWrite(gnd, LOW);
  digitalWrite(led, HIGH);
//
//  //inisialisasi librari
//  TFTscreen.begin();
//
//  //men-set background berwarna hitam
//  TFTscreen.background(0, 0, 0);
//  //men-set ukuran text
//  TFTscreen.setTextSize(2);

  Serial.begin(9600);
}

void loop() {
  
  // men-set font berwarna putih
//  TFTscreen.stroke(255, 255, 255);
  
  // print text pada layar
//  TFTscreen.text("Suhu : ",0,0);
//  float suhu = thermocouple.readCelsius();
  Serial.print("Temp: ");
  Serial.println(thermocouple.readCelsius());
//  TFTscreen.text(suhu,0,20);
//  
  
}
