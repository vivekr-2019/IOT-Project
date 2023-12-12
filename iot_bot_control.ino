#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
WiFiClient client ;
ESP8266WebServer server(80);
const char*ssid = "Vivek" ;
const char*password = "vivek123" ;
String data = " " ;
#define IN1 D1
#define IN2 D2
#define IN3 D3
#define IN4 D4
void setup()
{
 Serial.begin(115200);
 Serial.println("GPIO TEST !");
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
 connectingToWiFi();
 server.on("/",handlerequest);
 server.onNotFound(handlerequest);
 server.begin();
 Serial.println("server started");
}
 void loop(){
 server.handleClient();
 String data = server.arg("Key");
 Serial.println(data);
 if(data == "F")
 {
 move_forward();
 }
 else if(data == "B")
 { move_backward();
 }
 else if(data == "R")
 {
 turn_right();
 }
 else if(data =="L")
 {
 turn_left();
 }
 else if (data =="S")
 {
 stopping();
 } 
}
void handlerequest()
{
 if (server.hasArg("Key"))
 {
 Serial.println(server.arg("Key"));
 }
}
void connectingToWiFi()
{
 delay(3000);
 WiFi.disconnect();
 delay(1000);
 Serial.println("connecting to WiFi please wait");
 WiFi.begin(ssid,password);
 while(WiFi.status() != WL_CONNECTED)
 {
 delay(1000);
 Serial.println("Waiting to connect"); 
 }
 Serial.println("Connected to WiFi");
 Serial.println("Local IP address:");
 Serial.println((WiFi.localIP().toString())); 
 delay(5000);
}
void move_forward()
{
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
}
void move_backward()
{
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH); 
}
void turn_right()
{
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,LOW);
}
void turn_left()
{
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
}
void stopping()
{
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,LOW);
}
