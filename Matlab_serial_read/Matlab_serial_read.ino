String set_speed_1_str,set_speed_2_str;  // Buffer for getting data
double set_speed_1, set_speed_2;

void setup() {
    Serial.begin(9600);
    Serial.setTimeout(0.01);
}

void loop() {
    if(Serial.available())
    {
      set_speed_1_str = Serial.readStringUntil('a');
      set_speed_1 = set_speed_1_str.toInt();

      
      set_speed_2_str = Serial.readStringUntil('b');
      set_speed_2 = set_speed_2_str.toInt();
      
    }
}
