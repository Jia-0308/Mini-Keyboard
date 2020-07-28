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
}
