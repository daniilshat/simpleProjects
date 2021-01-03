/*
 *This code calculates the monthly mortgage payment
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long housingCost, initialFee, creditAmount;
  float interestRate, monthlyRate, generalRate, monthlyPayment;
  int years;

  cout << "\nEnter housing cost: ";
  cin >> housingCost;
  cout << "Enter initial fee: ";
  cin >> initialFee;
  cout << "Enter years for mortgage: ";
  cin >> years;
  years *= 12; //total months
  cout << "Enter interest rate: ";
  cin >> interestRate;
  monthlyRate = interestRate / 12 / 100; 

  creditAmount = housingCost - initialFee;

  generalRate = 1 + monthlyRate;
  generalRate = pow(generalRate, years);

  monthlyPayment = (creditAmount * monthlyRate * generalRate) / (generalRate - 1);
  monthlyPayment = (int)monthlyPayment;
  cout << "\n\nMonthly payment: " << monthlyPayment;

  return 0;
}