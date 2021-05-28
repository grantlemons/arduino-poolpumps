#include <ESP8266WiFi.h>
#include <ESP8266AWSImplementations.h>
#include <AmazonSNSClient.h>

#include "secrets.h"

#define topic_name "arn:aws:sns:us-west-2:646796572767:zombie-hyphen-man.fifo"
String wifi_address;

Esp8266HttpClient httpClient;
Esp8266DateTimeProvider dateTimeProvider;

AmazonSNSClient snsClient;
ActionError actionError;

void setup() {
    WiFi.begin( wifi_ssid, wifi_password );
    while ( WiFi.status() != WL_CONNECTED ) {}
    wifi_address = WiFi.localIP();
    snsClient.setAWSRegion("us-west-2");
    snsClient.setAWSEndpoint("amazonaws.com");
    snsClient.setAWSPath("/sns/v3/home?region=us-west-2#/dashboard");
    snsClient.setAWSKeyID(access_id);
    snsClient.setAWSSecretKey(secret_key);
    snsClient.setHttpClient(&httpClient);
    snsClient.setDateTimeProvider(&dateTimeProvider);
}

void loop() {
    
}