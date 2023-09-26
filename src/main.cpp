
#include <Arduino.h>
#include <SSD1306.h>

#define BAUD_RATE           115200
#define I2C_DISPLAY_ADDR    0x3C
#define SDA                 5
#define SCL                 4

SSD1306Wire tft(I2C_DISPLAY_ADDR, SDA, SCL);

void setup() {
  Serial.begin(BAUD_RATE);

  tft.init();
  tft.clear();
  tft.setFont(ArialMT_Plain_16);
  tft.drawString(0, 0, "Hello - ESP32");
  tft.display();
  
  delay(5000);
}

unsigned count = 0;

void loop() {
  tft.clear();
  tft.drawString(0, 0, String(count));  
  tft.display();
  
  Serial.println(count);
  
  ++count;
  delay(1000);
}
