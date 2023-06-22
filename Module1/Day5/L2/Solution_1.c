/*
Task 1
Data Parser:
   A data logger transmits the data in ascii format as shown below
   "S1-T:36.5-H:100-L:50"
   Write a function to populate all the data in an array of structure. The output should be like
   Sensor Info:
   ---------------------
   Sensor ID: S1
   Temperature: 36.5 C
   Humidity: 100
   Light Intensity: 50%
   ---------------------

*/

#include <stdio.h>
#include <string.h>

#define MAX_DATA_LENGTH 100

// Structure
typedef struct {
    char sensorID[10];
    float temperature;
    int humidity;
    int lightIntensity;
} SensorData;


// Function definition
void parseData(const char *data, SensorData *sensor) {
    sscanf(data, "%9[^-]-T:%f-H:%d-L:%d", sensor->sensorID, &(sensor->temperature), &(sensor->humidity), &(sensor->lightIntensity));
}

int main() {
    char data[MAX_DATA_LENGTH];
    SensorData sensor;

    // Read user data
    printf("Enter sensor data: ");   // S1-T:36.5-H:100-L:50
    fgets(data, MAX_DATA_LENGTH, stdin);
    data[strcspn(data, "\n")] = '\0';

    // Function call for parse the data
    parseData(data, &sensor);

    // Print the sensor information
    printf("Sensor Info:\n");
    printf("---------------------\n");
    printf("Sensor ID: %s\n", sensor.sensorID);
    printf("Temperature: %.1f C\n", sensor.temperature);
    printf("Humidity: %d\n", sensor.humidity);
    printf("Light Intensity: %d%%\n", sensor.lightIntensity);
    printf("---------------------\n");

    return 0;
}


/*

Sample output

Enter sensor data: S1-T:36.5-H:100-L:50
Sensor Info:
---------------------
Sensor ID: S1
Temperature: 36.5 C
Humidity: 100
Light Intensity: 50%
---------------------


Enter sensor data: S2-T:40.9-H:90-L:100
Sensor Info:
---------------------
Sensor ID: S2
Temperature: 40.9 C
Humidity: 90
Light Intensity: 100%
---------------------

*/