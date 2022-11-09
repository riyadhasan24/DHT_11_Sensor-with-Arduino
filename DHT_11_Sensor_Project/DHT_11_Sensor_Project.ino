/*The source code from
 * Md. Riyad Hasan
 * www.github.com/riyadhasan24
*/
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
float Humidity;
float Temperature;
DHT DHT_Sensor(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  DHT_Sensor.begin();
}

void loop()
{
  Humidity = DHT_Sensor.readHumidity();
  Temperature = DHT_Sensor.readTemperature();
  Serial.print("Humidity is = ");
  Serial.print(Humidity);
  Serial.println("%");
  Serial.print("Temperature is = ");
  Serial.print(Temperature);
  Serial.println("C");
  delay(2000);
}
