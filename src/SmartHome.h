#ifndef _SMARTHOME_H
#define _SMARTHOME_H

typedef struct GpsCoordinate GpsCoordinate;
struct GpsCoordinate {
  float x;
  float y;   
};

typedef enum {
  GARAGE_DOOR,
  KITCHEN_LIGHT,
  AIRCOND,
  WATER_HEATER,
} Device;

typedef enum {
  OFF,
  ON
} State;


float square(float x);
void doSmartThings();
#endif // _SMARTHOME_H
