//Name: Robert Alexander
//Student ID: 2374235
//Chapman Email: roalexander@chapman.edu
//Course #: CPSC 298 01
//Assignment #1

#include <iostream>
#include <string>

using namespace std;

//Determines if an event coencides with fire safety protocol.
int main (){
  int numPeople;
  int maxCapacity;
  int addPeople;
  int subtractPeople;

  cout << "Enter the number of people attending event: " << endl;
  cin >> numPeople;

  cout << "Enter the max capacity of the room for the event: " << endl;
  cin >> maxCapacity;

//Gives a different output depending on if the number of people exceeds the maximum capacity or not.
  if (numPeople <= maxCapacity){
    addPeople = maxCapacity - numPeople;

    cout << "It is legal to have this event. Have fun!" << endl;
    cout << "You can have " << addPeople << " more people." << endl;
  }
  else{
    subtractPeople = numPeople - maxCapacity;

    cout << "It is illegal to have this event due to fire safety." << endl;
    cout << subtractPeople << " People have to be excluded to have this party." << endl;
  }

  return 0;
}
