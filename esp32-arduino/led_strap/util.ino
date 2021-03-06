void initSerial()
{
  Serial.begin(115200);
  Serial.println("\nStart\n");
}

void count(int secs)
{
  for (int i = 1; i <= secs; i++) {
    Serial.println(i);
    delay(1000);
  }
}

void alertAndSleep(uint32_t secs, int cnt, int r, int g, int b,
                   int int_on = 200, int int_off = 600)
{
  for (int i = 0; i < cnt; i++) {
    setRgbColor(150, r, g, b); delay(int_on);
    setRgbColor(  0, 0, 0, 0); delay(int_off);
  }
  enterDeepSleep(secs);
}

void alertAndSleepLowBattery(uint32_t secs)
{
  alertAndSleep(secs, 3, 255, 0, 0);
}

void alertAndSleepBleConnFailed(uint32_t secs)
{
  alertAndSleep(secs, 3, 0, 0, 255);
}

void alertAndSleepError(uint32_t secs)
{
  alertAndSleep(secs, 6, 255, 0, 0, 100, 200);
}

void alertAndSleepBleNoData(uint32_t secs)
{
  alertAndSleep(secs, 2, 255, 255, 255);
}

void delayTask(int mils)
{
  vTaskDelay(mils / portTICK_RATE_MS);
}

