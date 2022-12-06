#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "models/plantGrowth01.cpp"
#include "models/plantGrowth02.cpp"
#include "models/plantGrowth03.cpp"
#include "models/plantGrowth04.cpp"
#include "models/plantGrowth05.cpp"

// Definir constantes
#define ANCHO_PANTALLA 128 // ancho pantalla OLED
#define ALTO_PANTALLA 64   // alto pantalla OLED

// Objeto de la clase Adafruit_SSD1306
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, -1);

void setup()
{

  // Iniciar pantalla OLED en la dirección 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  for (int i = 0; i < 5; i++)
  {

    display.clearDisplay();

    display.drawBitmap(0, 0, plantGrowth01, 128, 64, SSD1306_WHITE);
    display.display();
    delay(500);

    display.clearDisplay();

    display.drawBitmap(0, 0, plantGrowth02, 128, 64, SSD1306_WHITE);
    display.display();
    delay(500);

    display.clearDisplay();

    display.drawBitmap(0, 0, plantGrowth03, 128, 64, SSD1306_WHITE);
    display.display();
    delay(500);

    display.clearDisplay();

    display.drawBitmap(0, 0, plantGrowth04, 128, 64, SSD1306_WHITE);
    display.display();
    delay(500);

    display.clearDisplay();

    display.drawBitmap(0, 0, plantGrowth05, 128, 64, SSD1306_WHITE);
    display.display();
    delay(1000);
  }
}

void loop()
{
}
