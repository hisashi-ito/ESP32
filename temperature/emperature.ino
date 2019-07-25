#include <Wire.h>
#include "Ambient.h"
#include "DHT.h"
// DHT 22  (AM2302), AM2321
#define DHTTYPE DHT22
#define PERIOD 30
const char* ssid = "XXXXX";     // Enter SSID here
const char* password = "XXXX";  //Enter Password here
unsigned int channelId = XXXX;
const char* writeKey = "XXXX";
// DHT Sensor (温度計)
uint8_t DHTPin = 4;
DHT dht(DHTPin, DHTTYPE);
// クライアントを初期化
WiFiClient client;
Ambient ambient;

void setup()
{
    // wifi_set_sleep_type(LIGHT_SLEEP_T);
    Serial.begin(115200);
    delay(20);
    pinMode(DHTPin, INPUT);
    dht.begin();              
    Serial.println("Connecting to ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);
    
    //check wi-fi is connected to wi-fi network
    while (WiFi.status() != WL_CONNECTED) {
      delay(1000);
      Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected..!");
    Serial.print("Got IP: ");  Serial.println(WiFi.localIP());
    ambient.begin(channelId, writeKey, &client);
}

void loop()
{
    float temp, humid;
    temp = dht.readTemperature(); // Gets the values of the temperature
    humid = dht.readHumidity();   // Gets the values of the humidity 
    DBG("temp: ");
    DBG(temp);
    DBG(" DegC,  humid: ");
    DBG(humid);
    DBG(" %\r\n");
    ambient.set(1, temp);
    ambient.set(2, humid); 
    ambient.send();
    delay(PERIOD * 1000);
}
