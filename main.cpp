#include <iostream>
#include "sensors.h"
#include "controller.h"

using namespace std;

int main() {
    Sensors sensors;
    Controller controller;

    cout << "Smart Agriculture Monitoring System\n\n";

    for (int i = 0; i < 3; i++) {
        float soil = sensors.readSoilMoisture();
        float temp = sensors.readTemperature();
        float hum = sensors.readHumidity();

        controller.processData(soil, temp, hum);

        cout << "----------------------------\n";
    }

    return 0;
}
