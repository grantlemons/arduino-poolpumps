#include <ESP8266WiFi.h>
#include <MqttClient.h>
#include <ArduinoMqttClient.h>
#include <ArduinoJson.h>
#include <Wire.h>
#include <string>

#include "secrets.h"

#define thing_name "PoolPump"
#define endpoint "a232amt01mo7lf-ats.iot.us-west-2.amazonaws.com"

ESP8266WiFiClass net = ESP8266WiFi();
MqttClient client = MqttClient(256);

String lastValue;

void setup() {
    WiFi.begin( wifi_ssid, wifi_password );
    while ( WiFi.status() != WL_CONNECTED ) {}
}

void activate( string input ) {
    switch ( input ) {
        case "1":
            // Power 1
            lastValue = input;
            break;
        case "2":
            // Power 2
            lastValue = input;
            break;
        case "3":
            // Power 3
            lastValue = input;
            break;
        case "4":
            // Power 4
            lastValue = input;
            break;
        case "5":
            // Power 5
            lastValue = input;
            break;
        case "6":
            // Power 6
            lastValue = input;
            break;
        case "7":
            // Power 7
            lastValue = input;
            break;
        case "8":
            // Power 8
            lastValue = input;
            break;


        case "ON":
            if ( lastValue != "" ) { activate( lastValue ); }
            break;
        case "OFF":
            // Off
            break;


        default:
            // Nothing?
            break;
    }
}

void loop() {
    
}