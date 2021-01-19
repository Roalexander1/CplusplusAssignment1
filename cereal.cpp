//Name: Robert Alexander
//Student ID: 2374235
//Chapman Email: roalexander@chapman.edu
//Course #: CPSC 298 01
//Assignment #1

#include <iostream>
#include <string>

using namespace std;

//Calculates a metric conversion from ounces to tons and find the number of boxes of cereal that makes a ton.
int main (){
  double cerealOunces;
  double tonsOunces = 35273.92;
  double cerealTons;
  int boxesCereal;

//Request an input in ounces.
  cout << "Enter weight of cereal in ounces: " << endl;
  cin >> cerealOunces;

//Calculate the ounces into tons and find how many boxes would make 1 ton.
  cerealTons = cerealOunces * (1 / tonsOunces);
  boxesCereal = tonsOunces / cerealOunces;

  cout << "There is " << cerealTons << " metric tons of cereal." << endl;
  cout << "That would be " << boxesCereal << " boxes of cereal to be one metric ton." << endl;

  return 0;
}
