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


void doSmartThings(){
	GpsCoordinate gps;
	gps=getGpsCoordinate();
	
	
	int x=gps.x;
	int y=gps.y;
	int rangefromhome= sqrt(square(x-home_centre_x)+square(y-home_centre_y));
	int rangefromgarage= sqrt(square(x-garage_centre_x)+square(y-garage_centre_y));
	int rangefromkitchen= sqrt(square(x-kitchen_centre_x)+square(y-kitchen_centre_y));
	
	if(rangefromkitchen<2){
		
		turn(KITCHEN_LIGHT, ON);
		
	}
	else if(rangefromgarage<5){
		turn(GARAGE_DOOR,ON);
		
		
	}
	else if(rangefromhome<2000){
		turn(AIRCOND, ON);
		turn(WATER_HEATER, ON);
		
	}

	}
	


int square(int x){
	return x*x;
}
