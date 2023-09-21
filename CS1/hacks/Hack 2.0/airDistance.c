/** Author: Immanuel Soh
 *  isoh2@huskers.unl.edu
 *
 * Date:2023/09/05
 *
 * This program calculates the air distance from two points
 * using their latitude and longitude provided by interactive
 * user input and plugging them into the Spherical Law of Cosines
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define AVG_EARTH_RADIUS 6371.0000

int main(int argc, char **argv) {

double degreesToRadians(double degrees) {

  double radians = 0;

  radians = (degrees / 180) * M_PI;

  return radians;

}

double latitudeOne = 0;
printf("Please enter in the latitude of the first point in degrees: ");
scanf("%lf", &latitudeOne);
double latitudeOneRadians = degreesToRadians(latitudeOne);

double longitudeOne = 0;
printf("Please enter in the longitude of the first point in degrees: ");
scanf("%lf", &longitudeOne);
double longitudeOneRadians = degreesToRadians(longitudeOne);

double latitudeTwo = 0;
printf("Please enter in the latitude of the second point in degrees: ");
scanf("%lf", &latitudeTwo);
double latitudeTwoRadians = degreesToRadians(latitudeTwo);

double longitudeTwo = 0;
printf("Please enter in the longitude of the first point in degrees: ");
scanf("%lf", &longitudeTwo);
double longitudeTwoRadians = degreesToRadians(longitudeTwo);

double distance = (double) acos((sin(latitudeOneRadians)*sin(latitudeTwoRadians))+
			            (cos(latitudeOneRadians)*cos(latitudeTwoRadians)*
			             cos(longitudeTwoRadians-longitudeOneRadians)))*AVG_EARTH_RADIUS;

printf("Location Distance \n");

printf("======================== \n");

printf("Origin:      (%lf %lf) \n", latitudeOne, longitudeOne);

printf("Destination: (%lf %lf) \n", latitudeTwo, longitudeTwo);

printf("Air distance is %lf kms \n", distance);

}

/*
 * Important note: domain for latitude should be between -90 and 90;
 * domain for longitude should be between -180 and 180
*/