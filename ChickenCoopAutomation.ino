#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Define os pinos para as luzes do semáforo
#define GREEN_LIGHT_PIN 4
#define YELLOW_LIGHT_PIN 5
#define RED_LIGHT_PIN 6

// Define o pino Ventilador
#define FAN_PIN 8


void setup() {
  Serial.begin(9600);
  dht.begin();
  
  pinMode(GREEN_LIGHT_PIN, OUTPUT);
  pinMode(YELLOW_LIGHT_PIN, OUTPUT);
  pinMode(RED_LIGHT_PIN, OUTPUT);

  pinMode(FAN_PIN, OUTPUT);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Erro ao inicializar o display OLED"));
    for(;;); // loop infinito
  }

  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop() {
  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();
  
  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Erro ao ler a temperatura ou umidade!");
    return;
  }
  
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.print("Temperatura: ");
  display.print(temperatura);
  display.println(" C");
  display.print("Umidade: ");
  display.print(umidade);
  display.println("%");
  
  // Controle das luzes do semáforo baseado na temperatura
  if (temperatura > 0 && temperatura < 15) {
    digitalWrite(GREEN_LIGHT_PIN, LOW);
    digitalWrite(YELLOW_LIGHT_PIN, HIGH);
    digitalWrite(RED_LIGHT_PIN, LOW);
    digitalWrite(FAN_PIN, LOW);
  } else if (temperatura >= 15 && temperatura <= 20) {
    digitalWrite(GREEN_LIGHT_PIN, HIGH);
    digitalWrite(YELLOW_LIGHT_PIN, LOW);
    digitalWrite(RED_LIGHT_PIN, LOW);
    digitalWrite(FAN_PIN, LOW);
  } else if (temperatura > 20 && temperatura <= 100) {
    digitalWrite(GREEN_LIGHT_PIN, LOW);
    digitalWrite(YELLOW_LIGHT_PIN, LOW);
    digitalWrite(RED_LIGHT_PIN, HIGH);
    digitalWrite(FAN_PIN, HIGH);
  } else {
    // Desliga todas as luzes se estiver fora dos intervalos especificados
    digitalWrite(GREEN_LIGHT_PIN, LOW);
    digitalWrite(YELLOW_LIGHT_PIN, LOW);
    digitalWrite(RED_LIGHT_PIN, LOW);
    digitalWrite(FAN_PIN, LOW);
  }

  display.display();
  
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");
  Serial.print("Umidade: ");
  Serial.print(umidade);
  Serial.println("%");

  delay(4000);
}
