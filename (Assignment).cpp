//C++ program for converting degree Celsius into Fahrenheit and vice versa
#include<iostream>
using namespace std;

int main()
{
   float fahr, cel;
   char option;

   cout << "Choose from following option:" << endl;
   cout << "A. Celsius to Fahrenheit." << endl;
   cout << "B. Fahrenheit to Celsius." << endl;
   cin >> option;

   //option for converting celsius into fahernheit
   if (option == 'A' || option == 'a')// capital(B) and small(b) letters options.
   {
      cout << "Enter the temperature in Celsius: ";
      cin >> cel;

      fahr = (1.8 * cel) + 32.0; //temperature conversion formula
      cout << "\nTemperature in degree Fahrenheit: " << fahr << " F" << endl;
   }
   //option for converting Fahrenheit into Celsius
   else if (option == 'B' || option == 'b')// capital(A) and small(a) letters options.
   {
      cout << "Enter the temperature in Fahrenheit: ";
      cin >> fahr;

      cel = (fahr - 32) / 1.8; //temperature conversion formula
      cout << "\nTemperature in degree Celsius: " << cel << " C" << endl;
   }
   else
      cout << "Error Wrong Input." << endl;

   return 0;
}
