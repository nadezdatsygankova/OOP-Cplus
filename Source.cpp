//Nadezda Tsygankova
/*Q1  a program that asks the user
to enter two numbers, obtains the two numbers from the user
and prints the sum,
product, difference, and quotient of the two numbers.*/

#include <iostream>

using namespace std;

int main() {
   // 
   float number1, number2;
   cout << "Please enter the first number" << endl;//prompt user for data
   cin >> number1;// read first float from user into number1
   cout << "Please enter the first number" << endl;//prompt user for data
   cin >> number2; //read second float from user into number2

   cout << number1 + number2 << endl;//display sum
   cout << number1 * number2 << endl;//display product
   cout << number1 - number2 << endl;//display difference
   cout << number1 / number2 << endl;//display quotient

   return 0;

}