/*
 * Your Encryption Key
 */
static const unsigned char KEY[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

/*
 * WiFi Settings
 */
#define HOSTNAME        "ESP-Smartmeter"    // Hostname (only valid for ESP32)
#define MDNS_HOSTNAME   "smartmeter"        // MDNS Name
#define WIFI_KEY        "<your key>"        // Your WiFi password
#define WIFI_SSID       "<your ssid>"       // Your WiFi SSID
#define OTA_AUTH        "<your key>"        // Password for OTA programming

/*
 * Graphite Settings
 * For changing the metrics name, go to file "lib/graphite/graphite.h"
 */
#define GRAPHITE_HOST "<your ip>"    // IP and Port of your Graphite Host
#define GRAPHITE_PORT 2003           // Port should be standard metric line receiver