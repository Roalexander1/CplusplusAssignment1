//Name: Robert Alexander
//Student ID: 2374235
//Chapman Email: roalexander@chapman.edu
//Course #: CPSC 298 01
//Assignment #1

#include <iostream>
#include <string>

using namespace std;

//This program calculates the gross pay given the hours worked. Taking out required expenses.
int main (){
  int workedHours;
  int normHours = 40; //40 hours is a normal work hours.
  int totalPay;
  int additionalTime;
  double socialSecurity;
  double fedIncome;
  double stateIncome;
  int medInsurance = 10; //Flat 10 dollars is for medical insurance.
  double grossPay;

  cout << "Enter number of hours worked: " << endl;
  cin >> workedHours;

  //if statement done since the additional time is not necessary if the hours worked are less than 40.
  if (workedHours > normHours){
    totalPay = 640; //Amount of money made for normal work hours.
    additionalTime = workedHours - normHours;
    totalPay = totalPay + (additionalTime * 24); //24 is 16 times 1.5. So it is the time in a half for time over 40 hours.
  }
  else{
    totalPay = workedHours * 16;
  }

  socialSecurity = totalPay * 0.06;
  fedIncome = totalPay * 0.14;
  stateIncome = totalPay * 0.05;

  grossPay = totalPay - (socialSecurity + fedIncome + stateIncome + medInsurance);

  cout << "The grossPay for " << workedHours << " hours is " << grossPay << endl;

  return 0;
}
