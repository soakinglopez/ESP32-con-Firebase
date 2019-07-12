#include <WiFi.h>
#include "FirebaseESP32.h"

#define FIREBASE_HOST "prueba-esp32-154ee.firebaseio.com"  //https://prueba-esp32-154ee.firebaseio.com/
#define FIREBASE_AUTH "Y4Eddy11iwJLJro5jMsDiZNsS5Aj6iljFuuDAdEU"
#define WIFI_SSID "INFINITUM419C_2.4"
#define WIFI_PASSWORD "7W3MwFvckk"

FirebaseData firebaseData;
String ruta = "/ESP32";


void setup() 
{
  Serial.begin(115200);
  Serial.println();
  Serial.println();

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Conectado al Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Conectado con IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);

  
  //----------------------------------------------
  //---------------Eliminar datos-----------------
  //----------------------------------------------
 
  //Firebase.deleteNode(firebaseData, "/sensor_temperatura");
  
  
  //----------------------------------------------
  //-------------Escritura de datos---------------
  //----------------------------------------------
  
  // Escribe un entero
  /* Firebase.setInt(firebaseData, ruta + "/numerico", 123);
  
  
  // Escribe un decimal;
  Firebase.setFloat(firebaseData, ruta + "/numerico", 123.55);
  
  // Escribe un binario
  Firebase.setBool(firebaseData, ruta + "/logico", true);

  // Escribe un texto
  Firebase.setString(firebaseData, ruta + "/texto", "Hola mundo");*/

  // Escribe un JSON
  /*String cadena="Hola choco con JSON";
  float numerico=876.45;
  bool logico=true;
  String JSONdata = "{\"numerico\":" + String(numerico) +", \"logico\":"+ String (logico) +", \"texto\":\""+ cadena + "\"}";
  Firebase.setJSON(firebaseData, ruta + "/hijo", JSONdata);
  Serial.println(JSONdata);*/

  //----------------------------------------------
  //---------------Lectura de datos---------------
  //----------------------------------------------
  
  //leer Entero
 /* Firebase.getInt(firebaseData, ruta + "/hijo/logico");
  Serial.println(firebaseData.intData());

  //leer Decimal
  Firebase.getFloat(firebaseData, ruta + "/hijo/numerico");
  Serial.println(firebaseData.floatData());
  
  //leer Texto
  Firebase.getString(firebaseData, ruta + "/hijo/texto");
  Serial.println(firebaseData.stringData());*/

  //leer JSON
  //Firebase.getJSON(firebaseData, ruta + "/hijo");
  //Serial.println(firebaseData.jsonData());

  //----------------------------------------------
  //----------------Push de datos-----------------
  //----------------------------------------------
    
  //push Entero
  //Firebase.pushInt(firebaseData, ruta + "/Push/entero", 123);

  //push Decimal
  //Firebase.pushFloat(firebaseData, ruta + "/Push/entero", 123.55);

  //push String
  //Firebase.pushString(firebaseData, ruta + "/Push/text", "asdsd");

  //push Binario
  //Firebase.pushBool(firebaseData, ruta + "/Push/logico", false);
  
  //push JSON
  //String JSONdata = "{\"numerico\":" + String(123) +", \"logico\":"+ String (true) +", \"texto\":\""+ "Hola choco JSON con Arduino" + "\"}";
  //Firebase.pushJSON(firebaseData, ruta + "/Push/JSON", JSONdata);

  //----------------------------------------------
  //------------------Streaming-------------------
  //----------------------------------------------

  //streaming
  //Serial.println("Inicio de streaming");
  //Serial.println("RUTA: "+ruta + "/hijo/entero");
  //Firebase.beginStream(firebaseData, ruta + "/hijo/texto");

  //----------------------------------------------
  //-------------Finaliza la conexion-------------
  //----------------------------------------------

  //Firebase.end(firebaseData);
}

void loop() 
{
/*
  Firebase.setInt(firebaseData, ruta + "/numerico", 123);
  delay(1000);
  // Escribe un decimal;
  Firebase.setFloat(firebaseData, ruta + "/numerico", 123.55);
  delay(1000);
  // Escribe un binario
  Firebase.setBool(firebaseData, ruta + "/logico", false);
  delay(1000);
  Firebase.setBool(firebaseData, ruta + "/logico", true);
  delay(1000);
  // Escribe un texto corto 
  Firebase.setString(firebaseData, ruta + "/texto", "Hola mundo");
  delay(1000);
  Firebase.setString(firebaseData, ruta + "/texto", "Hola enrique");
  delay(1000);*/

 /* Firebase.getInt(firebaseData, ruta + "/hijo/logico");
  Serial.println(firebaseData.intData());
  delay(1000);

  //leer Decimal
  Firebase.getFloat(firebaseData, ruta + "/hijo/numerico");
  Serial.println(firebaseData.floatData());
  delay(1000);

  //leer Texto
  Firebase.getString(firebaseData, ruta + "/hijo/texto");
  Serial.println(firebaseData.stringData());
  delay(1000);*/

  //----------------------------------------------
  //--------------Streaming de datos--------------
  //----------------------------------------------
/*
Firebase.readStream(firebaseData);    
if (firebaseData.streamAvailable()) 
  {  
      Serial.println(firebaseData.stringData()); // El tipo de dato debe coincidir con el dato cargado en la nube
      delay(50);                                 // El delay es para que solo se haga una lectura, caso contrario repetira la lectura varias veces,
  }   */                                           // Si el loop es mas largo, no se requiere este delay.
}
