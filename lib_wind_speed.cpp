#include "lib_wind_speed.h"

LibWindSpeed::LibWindSpeed(int anemometerPin) {
    _anemometerPin = anemometerPin;
    _revolutions = 0;
    _previousMillis = 0;
    _windSpeed = 0;
}

void LibWindSpeed::begin() {
    pinMode(_anemometerPin, INPUT_PULLUP);
}

void LibWindSpeed::update() {
    unsigned long currentMillis = millis();

    if (currentMillis - _previousMillis >= 1000) {
        _windSpeed = _revolutions / 2.4;

        _revolutions = 0;
        _previousMillis = currentMillis;
    }
}

float LibWindSpeed::getWindSpeed() {
    return _windSpeed;
}

void LibWindSpeed::countRevolutions() {
    _revolutions++;
}
