#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "models/crecPlanta01.cpp"
#include "utils/display.cpp"

// Definir constantes
#define ANCHO_PANTALLA 128 // ancho pantalla OLED
#define ALTO_PANTALLA 64   // alto pantalla OLED

// Objeto de la clase Adafruit_SSD1306
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, -1);


void setup()
{
#ifdef __DEBUG__
  Serial.begin(9600);
  delay(100);
  Serial.println("Iniciando pantalla OLED");
#endif

  // Iniciar pantalla OLED en la dirección 0x3C
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
#ifdef __DEBUG__
    Serial.println("No se encuentra la pantalla OLED");
#endif
    while (true)
      ;
  }


  display.clearDisplay();

  display.drawBitmap(0, 0, crecPlanta01, 128, 64, SSD1306_WHITE);
  display.display();

   
  display.clearDisplay();
  delay(1000);

  display.drawBitmap(0, 0, crecPlanta01, 128, 64, SSD1306_WHITE);
  display.display();
}

void loop() {}