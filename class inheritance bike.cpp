#include<iostream>
using namespace std;

//Base class Vehicle
class Vehicle {
  public:
  void vehicle() {
    cout << "I am a vehicle" << endl;
  }
};

class TwoWheeler : public Vehicle {
  public:
  void twoWheeler() {
    cout << "I have Two Wheels" << endl;
  }
};

class Bike : public TwoWheeler {
  public:
  void bike() {
    cout << "I am a bike" << endl;
  }
};

int main() {
  //Create an object of Class Bike
  Bike mycar;
  
  //Call methods of bike, TwoWheeler, and Vehicle through Bike object
  mycar.bike();
  mycar.twoWheeler();
  mycar.vehicle();
  
  return 0;
}
