#ifndef JULIO_LIB_WIND_SPEED_H
#define JULIO_LIB_WIND_SPEED_H

#include <Arduino.h>
#include <Arduino.h>

class LibWindSpeed {
public:
    LibWindSpeed(int anemometerPin);
    void begin();
    void update();
    float getWindSpeed();

private:
    int _anemometerPin;
    unsigned int _revolutions;
    unsigned long _previousMillis;
    float _windSpeed;

    void countRevolutions();
};

#endif //JULIO_LIB_WIND_SPEED_H
