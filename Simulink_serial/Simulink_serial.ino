double set_angle_a, set_angle_b, set_angle_c;  

void setup() {
    Serial.begin(9600);
    Serial.setTimeout(1);
}
int uart_read [2];

void loop() 
{
    if(Serial.available())
    {
      for (int i = 0; i < 2; i++) 
      {
      uart_read[i] = Serial.read();
    }
      set_angle_a = uart_read[0] ;
      set_angle_b = uart_read[1] ;
      
    }
     
}
