#include <iostream>
using namespace std;

int main() {
  struct {

    int CarNum;
    double MilesDriven;
    double Gallons;

  } Car25, Car36, Car44, Car52, Car68;

  Car25.CarNum = 25;
  Car25.MilesDriven = 1450;
  Car25.Gallons = 62;

  Car36.CarNum = 36;
  Car36.MilesDriven = 3240;
  Car36.Gallons = 136;

  Car44.CarNum = 44;
  Car44.MilesDriven = 1792;
  Car44.Gallons = 76;

  Car52.CarNum = 52;
  Car52.MilesDriven = 2360;
  Car52.Gallons = 105;

  Car68.CarNum = 68;
  Car68.MilesDriven = 2114;
  Car68.Gallons = 67;

  cout << Car25.CarNum << " " << Car25.MilesDriven / Car25.Gallons << "\n";
  cout << Car36.CarNum << " " << Car36.MilesDriven / Car36.Gallons << "\n";
  cout << Car44.CarNum << " " << Car44.MilesDriven / Car44.Gallons << "\n";
  cout << Car52.CarNum << " " << Car52.MilesDriven / Car52.Gallons << "\n";
  cout << Car68.CarNum << " " << Car68.MilesDriven / Car68.Gallons << "\n";

  cout << "The average MPG for the fleet of cars is: " << ((Car25.MilesDriven / Car25.Gallons) + (Car36.MilesDriven / Car36.Gallons) + (Car44.MilesDriven / Car44.Gallons) + (Car52.MilesDriven / Car52.Gallons) + (Car68.MilesDriven / Car68.Gallons)) / 5 << endl;
  
}