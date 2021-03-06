#include "unity.h"
#include "SmartHome.h"
#include "mock_gpsanddevice.h"
#include <stdio.h>



void setUp(void)
{
}

void tearDown(void)
{
}

void test_smarthome_Turn_Kitchen_light_when_less_than2(void)
{
	GpsCoordinate gps;
	gps.x=196;
	gps.y=5400;
	
	getGpsCoordinate_ExpectAndReturn(gps);
	turn_Expect(KITCHEN_LIGHT, ON);
	
	doSmartThings();
	
}
void test_smarthome_Turn_GarageDoorOFF_when_Equal0(void)
{
	GpsCoordinate gps;
	gps.x=220;
	gps.y=5300;
	
	getGpsCoordinate_ExpectAndReturn(gps);
	turn_Expect(GARAGE_DOOR,OFF);
	
	doSmartThings();
	
}
void test_smarthome_Turn_GarageDoorOn_when_less_than5(void)
{
	GpsCoordinate gps;
	gps.x=215;
	gps.y=5300;
	
	getGpsCoordinate_ExpectAndReturn(gps);
	turn_Expect(GARAGE_DOOR,ON);
	
	doSmartThings();
	
}
void test_smarthome_Turn_AirCond_waterHeater_when_less_than2000(void)
{
	GpsCoordinate gps;
	gps.x=200;
	gps.y=6300;
	
	getGpsCoordinate_ExpectAndReturn(gps);
	turn_Expect(AIRCOND, ON);
	turn_Expect(WATER_HEATER, ON);
	doSmartThings();
	
}