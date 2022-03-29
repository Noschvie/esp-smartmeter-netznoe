#include "display.h"
#include "frame.h"

#ifdef ESP8266
  SSD1306Wire display(0x3c, 2, 0);
#else
  SSD1306Wire display(0x3c, SDA, SCL);
#endif

void setupDisplay()
{
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
}

/**
 * @brief Updates the timestamp and redraws the frame to update the metrics later
 *
 * @param timestamp Time
 */
void updateTimestamp(char *timestamp)
{
  display.setColor(BLACK);
  display.fillRect(0, 21, STATS_FRAME_WIDTH, STATS_FRAME_HEIGHT);
  display.setColor(WHITE);
  display.drawXbm(0, 21, STATS_FRAME_WIDTH, STATS_FRAME_HEIGHT, STATS_FRAME);
  display.drawString(125, 22, timestamp);
}