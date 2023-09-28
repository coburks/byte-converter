te_converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   cout << "Welcome to Byte Converter\n";
   cout << "Please enter your byte count, your starting byte units and the byte units you'd like them converted to...\n";
   cout << "supported units: Kilobyte (kb) Megabyte (mb) Gigabyte (gb) Terabyte (tb) \n";
   cout << "example:\n";
   cout << "1000\n";
   cout << "kb\n";
   cout << "mb\n";


   double input_byte;
   double output_byte;
   string unit_from;
   string unit_to;
   int conversion{};
   
   cin >> input_byte;
   cin >> unit_from;
   cin >> unit_to;

  //cout << fixed << setprecision(2); im taking this out for now because i dont like how .00 looks in the output for the input bytes. I think I'll just apply it to all output cases instead.

   if (unit_from == "kb" && unit_to == "mb") {
	   conversion = 1;
   }else if (unit_from == "kb" && unit_to == "gb") {
	   conversion = 2;
   }else if (unit_from == "kb" && unit_to == "tb") {
	   conversion = 3;
   }
   else if (unit_from == "mb" && unit_to == "kb") {
	   conversion = 4;
   }else if (unit_from == "mb" && unit_to == "gb") {
	   conversion = 1;
   }else if (unit_from == "mb" && unit_to == "tb") {
	   conversion = 2;
   }
   else if (unit_from == "gb" && unit_to == "kb") {
	   conversion = 2;
   }else if (unit_from == "gb" && unit_to == "mb") {
	   conversion = 4;
   }else if (unit_from == "gb" && unit_to == "tb") {
	   conversion = 1;
   }
   else if (unit_from == "tb" && unit_to == "kb") {
	   conversion = 6;
   }
   else if (unit_from == "tb" && unit_to == "mb") {
	   conversion = 5;
   }
   else if (unit_from == "tb" && unit_to == "gb") {
	   conversion = 4;
   }



   switch(conversion) {
    case 1:
		(output_byte = input_byte / 1000);
		cout << input_byte << unit_from << " = " << fixed << setprecision(2) << output_byte << unit_to << ".";
		break;
	case 2: 
		(output_byte = input_byte / 100000);
		cout << input_byte << unit_from << " = " << fixed << setprecision(2) << output_byte << unit_to << ".";
		break;
	case 3:
		(output_byte = input_byte / 1000000000);
		cout << input_byte << unit_from << " = " << fixed << setprecision(2) << output_byte << unit_to << ".";
		break;
	case 4:
		(output_byte = input_byte * 1000);
		cout << input_byte << unit_from << " = " << fixed << setprecision(2) << output_byte << unit_to << ".";
		break;
	case 5:
		(output_byte = input_byte * 1000000);
		cout << input_byte << unit_from << " = " << fixed << setprecision(2) << output_byte << unit_to << ".";
		break;
	case 6:
		(output_byte = input_byte * 1000000000);
		cout << input_byte << unit_from << " = " << fixed << setprecision(2) << output_byte << unit_to << ".";
		break;
	}
   

   


   return 1;

		








		   

   /*
   cout << "Welcome to Byte Converter\n";
   cout << "Welcome to Byte Converter\n";
   cout << "Welcome to Byte Converter\n";
   cout << "Welcome to Byte Converter\n";
   cout << "Welcome to Byte Converter\n";
   */

}
