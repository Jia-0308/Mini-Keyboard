
/*
Music Project Analogue Approach to make tones
*/
//include the pitches library
#include "pitches.h"

float C3_LOW = 1.2;
float C3_HIGH= 1.38;

float D3_LOW= 2.0;
float D3_HIGH= 2.2;

float E3_LOW= 0.88;
float E3_HIGH= 0.95;

float F3_LOW= 2.8;
float F3_HIGH= 3.1;

float G3_LOW= 1.0;
float G3_HIGH= 1.1;

float A3_LOW= 1.5;
float A3_HIGH= 1.7;

float B3_LOW= 0.77;
float B3_HIGH= 0.83;

float C4_LOW= 3.6;
float C4_HIGH= 3.8;

float D4_LOW= 1.1;
float D4_HIGH= 1.2;

float E4_LOW= 1.7;
float E4_HIGH= 1.9;

float F4_LOW= 0.83;
float F4_HIGH= 0.88;

float G4_LOW= 2.4;
float G4_HIGH= 2.5;

float A4_LOW= 0.95;
float A4_HIGH= 1.05;

float B4_LOW= 1.40;
float B4_HIGH= 1.5;

float C5_LOW= 0.7;
float C5_HIGH= 0.77;



void setup() {
    Serial.begin(9600);
    pinMode(A1,INPUT);
    pinMode(8,OUTPUT);
}



void loop() {
    //read the analog value from the input pin
    int senserValue=analogRead(A1);
    //Convert the analog reading (0-1023) to a voltage value (0V-5V);
    float Voltage_Value=senserValue*(5.0/1023.0);
    //print out the value
    Serial.println(Voltage_Value, 10);
    
    //Playing different tones depends on different voltage inputs
    //
    
    if (C3_LOW < Voltage_Value && Voltage_Value < C3_HIGH){
    Serial.println("NOTE_C3");
    Serial.println("Corresponding 4-bit binary number:0001 (decimal number 1)");
    tone(8,NOTE_C3);
    
    }
    //
    if ( D3_LOW < Voltage_Value && Voltage_Value < D3_HIGH){
    Serial.println("NOTE_D3");
    Serial.println("Corresponding 4-bit binary number:0010 (decimal number 2)");
    tone(8,NOTE_D3);
   
    }
    //
    if (E3_LOW < Voltage_Value && Voltage_Value < E3_HIGH){
    tone(8,NOTE_E3);
    Serial.println("NOTE_E3");
    Serial.println("Corresponding 4-bit binary number:0011 (decimal number 3)");
    
    }
    //
    if (F3_LOW < Voltage_Value && Voltage_Value < F3_HIGH){
    Serial.println("NOTE_F3");
    Serial.println("Corresponding 4-bit binary number:0100 (decimal number 4)");
    tone(8,NOTE_F3);
    
    }
    //
    if (G3_LOW <Voltage_Value && Voltage_Value < G3_HIGH){
    Serial.println("NOTE_G3");
    Serial.println("Corresponding 4-bit binary number:0101 (decimal number 5)");
    tone(8,NOTE_G3);
    
    }
    //
    if (A3_LOW < Voltage_Value && Voltage_Value < A3_HIGH){
    Serial.println("NOTE_A3");
    Serial.println("Corresponding 4-bit binary number:0110 (decimal number 6)");
    tone(8,NOTE_A3);
    
    }
    //
    if (B3_LOW <Voltage_Value && Voltage_Value < B3_HIGH){
    Serial.println("NOTE_B3");
    Serial.println("Corresponding 4-bit binary number:0111 (decimal number 7)");
    tone(8,NOTE_B3);
    
    }
    //
    if (C4_LOW < Voltage_Value && Voltage_Value < C4_HIGH){
    Serial.println("NOTE_C4");
    Serial.println("Corresponding 4-bit binary number:1000 (decimal number 8)");
    tone(8,NOTE_C4);
    
    }
    //
    if (D4_LOW <Voltage_Value && Voltage_Value < D4_HIGH){
    Serial.println("NOTE_D4");
    Serial.println("Corresponding 4-bit binary number:1001 (decimal number 9)");
    tone(8,NOTE_D4);
    
    }
    //
    if (E4_LOW < Voltage_Value && Voltage_Value < E4_HIGH){
    Serial.println("NOTE_E4");
    Serial.println("Corresponding 4-bit binary number:1010 (decimal number 10)");
    tone(8,NOTE_E4);
    
    }
    //
    if (F4_LOW < Voltage_Value && Voltage_Value < F4_HIGH){
    Serial.println("NOTE_F4");
    Serial.println("Corresponding 4-bit binary number:1011 (decimal number 11)");
    
    
    }
    //
    if (G4_LOW <Voltage_Value && Voltage_Value <G4_HIGH){
    Serial.println("NOTE_G4");
    Serial.println("Corresponding 4-bit binary number:1100 (decimal number 12)");
    
    
    }
    //
    if (A4_LOW <Voltage_Value && Voltage_Value <A4_HIGH){
    Serial.println("NOTE_A4");
    Serial.println("Corresponding 4-bit binary number:1101 (decimal number 13)");
    
    
    }
    
    if (B4_LOW <Voltage_Value && Voltage_Value < B4_HIGH){
    Serial.println("NOTE_B4");
    Serial.println("Corresponding 4-bit binary number:1110 (decimal number 14)");
   
    
    }
    
    if (C5_LOW < Voltage_Value && Voltage_Value < C5_HIGH){
    Serial.println("NOTE_C5");
    Serial.println("Corresponding 4-bit binary number:1111 (decimal number 15)");
    tone(8,NOTE_C5);
    
    }
    if(Voltage_Value==5.0)
    {noTone(8);
    }
    else{
    Serial.println("Waiting...");
    
    }
    
}

