#include "SmartHome.h"
#include "gpsanddevice.h"
#include <math.h>

///define centre
#define home_centre_x 200
#define home_centre_y 5345
#define garage_centre_x 215
#define garage_centre_y 5300
#define kitchen_centre_x 196
#define kitchen_centre_y 5400
#define garage_door_x 220
#define garage_door_y 5300


void doSmartThings(){
	GpsCoordinate gps;
	gps=getGpsCoordinate();
	
	
	float x=gps.x;
	float y=gps.y;
	float rangefromhome= sqrt(square(x-home_centre_x)+square(y-home_centre_y));
	float rangefromgarage= sqrt(square(x-garage_centre_x)+square(y-garage_centre_y));
	float rangefromkitchen= sqrt(square(x-kitchen_centre_x)+square(y-kitchen_centre_y));
	float rangefromgaragedoor= sqrt(square(x-garage_door_x)+square(y-garage_door_y));
  
  
  
	if(rangefromkitchen<=2){
		turn(KITCHEN_LIGHT, ON);
	}
  else if(rangefromgaragedoor==0){
		turn(GARAGE_DOOR,OFF);
	}
	else if(rangefromgarage<5){
		turn(GARAGE_DOOR,ON);
	}
	else if(rangefromhome<2000){
		turn(AIRCOND, ON);
		turn(WATER_HEATER, ON);
		
	}

	}
	


float square(float x){
	return x*x;
}
