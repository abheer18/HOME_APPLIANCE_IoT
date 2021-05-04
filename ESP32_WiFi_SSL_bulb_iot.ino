/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP32 chip.

  Note: This requires ESP32 support package:
    https://github.com/espressif/arduino-esp32

  Please be sure to select the right ESP32 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <BlynkSimpleEsp32_SSL.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "n3Ked74cB748JlNhqI-OAAXtOwKYSWsy";
const int relay = 26;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "HINDUSTAN";
char pass[] = "18122001";

void setup()
{
  // Debug console
 Serial.begin(115200);
  pinMode(relay, OUTPUT);
  Blynk.begin(auth, ssid, pass);
  digitalWrite(relay, HIGH);
  Serial.println("Current not Flowing");
  delay(5000);
  digitalWrite(relay, LOW);
  Serial.println("Current Flowing");
  delay(5000); 
}

void loop()
{
      Blynk.run();
  
}
