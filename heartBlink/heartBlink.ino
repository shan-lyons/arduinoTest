#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  matrix.begin();
}

void loop() {
  // Show a heart
  static uint8_t heart[8][12] = {
    {0,0,1,1,0,0,0,0,1,1,0,0},
    {0,1,1,1,1,0,0,1,1,1,1,0},
    {1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,1,1,1,1,1,1,1,1,0,0},
    {0,0,0,1,1,1,1,1,1,0,0,0},
    {0,0,0,0,1,1,1,1,0,0,0,0}
  };

  matrix.renderBitmap(heart, 8, 12);
  delay(1000);

  // Clear the matrix
  matrix.clear();
  delay(1000);
}
