#include <Arduino.h>
#include <TFT_eSPI.h>
#include <ArduinoJson.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(115200);

  // Khởi tạo màn hình
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  
  // Hiển thị câu chào
  tft.drawString("Xin chao, Nguyen Son!", 10, 10);
}

void loop() {
  // Chạy vòng lặp chính
  delay(1000);
}
