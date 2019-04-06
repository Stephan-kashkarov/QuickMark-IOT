/*
 *
 * QuickMark IOT - ESP8266
 *
 *  By             Stephan Kashkarov
 *  Written:       April, 2019
 *  Last Modified: 6 April, 2019
 *
 *  This file contains code for an ESP8266 IOT chip
 *  in the NodeMcuV3 breakout board. This files inteded
 *  use is to get an RFID identifier and send it to a
 *  Flask based server. This will ideally track attendace
 *  within large groups of students with a tap-in/tap-out
 *  system. 
 * 
 * 
 * Typical pin layout used:
 * ----------------------------------
 *             MFRC522      Expressif
 *             Reader/PCD   ESP8266  
 * Signal      Pin          Pin      
 * ----------------------------------
 * RST/Reset   RST          GPIO5        
 * SPI SS      SDA(SS)      GPIO4       
 * SPI MOSI    MOSI         GPIO13
 * SPI MISO    MISO         GPIO12
 * SPI SCK     SCK          GPIO14
 *
 *
 */

// Lib includes
#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>

// namespaces
using namespace std;
using namespace MFRC522;

//////////////////////////////////////////////////////////////////////////
// WiFi based functions
//////////////////////////////////////////////////////////////////////////

bool connect_wifi(string ssid, string password)
/*
 * connect_wifi
 * 
 * Connects to wifi under most protocals
 * for EDU wifi connections see connect_EDU_wifi
 * 
 * @param[in] ssid:      The name of a given wifi network
 * @param[in] password:  The password of a given wifi network
 * 
 * @return Bool:         If the connection was successful
 */
{
	return false;
}

//////////////////////////////////////////////////////////////////////////
// Server based functions
//////////////////////////////////////////////////////////////////////////
bool connect_server(string url)
/*
 * connect_server
 * 
 * Opens a HTTP or HTTPS connection to a web server
 * configured to respond to requests from this code
 * 
 * @param[in] url:       The URL of the server with protocol
 * 
 * @return Bool:         If the connection was successful
 */
{
	return false;
}

bool send_rfid(Uid id)
/*
 * send_rfid
 * 
 * Sends a UID over https after a connection is made
 * 
 * @param[in] id:        The uid from the scanned RFID card
 * 
 * @return Bool:         If the operation was successful
 */
{
	return false;
}

//////////////////////////////////////////////////////////////////////////
// RFID based functions
//////////////////////////////////////////////////////////////////////////
Uid get_uid()
{
	return rfid.uid
}

unsigned long serialise_uid(Uid id)
{
	unsigned long total = 0;
	for (size_t i = 0; i < id.size; ++i){
		total += id.uidByte[i];
	}
	return total;
}

void print_uid(Uid id)
{

}

// Variables
MFRC522 rfid(SS_PIN, RST_PIN);
Uid new_uid;
Uid prev_uid;

//////////////////////////////////////////////////////////////////////////
// Main Execution Loop
//////////////////////////////////////////////////////////////////////////

void setup()
{
	PCD_Init();
}

void loop()
{
	// put your main code here, to run repeatedly:
}