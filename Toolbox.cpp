// Chuck's Toolbox // Open Source // Some Standard to metric conversions
// First Project  // Repo : 

//Made by Caughlin Higgins
// Collaberated by :

#include <iostream>

using namespace std;

int main() 
{  
    int desired_number; {};
    do {
    cout << endl;
    
    
    cout << "|~~~~~~~~~~~~ CHUCKS TOOLBOX ~~~~~~~~~~~~~|" << endl;
    cout << "|~~~~~~~~~~~~ Version 1.1.0  ~~~~~~~~~~~~~|" << endl;
    cout << "|~~~~~~~~~~~~ Tools Available : ~~~~~~~~~~|" << endl;
    cout << "|~~1~~| |~~2~~| |~~3~~| |~~4~~| |~~5~~|   |" << endl;
    cout << "|  $  | |     | |     | |     | |     |   |" << endl;
    cout << "CAN2USD |Speed| |     | |     | |     |   |" << endl;
    cout << "|       KMH2MPH |Lngth| |     | |     |   |" << endl;
    cout << "|               CM2INCH | Vol | |     |   |" << endl;
    cout << "|                       LIT2GAL |Temp |   |" << endl;
    cout << "|                               CEL2FAR   |" << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout << "|                               FAR2CEL   |" << endl;
    cout << "|                       GAL2LIT | Temp|   |" << endl;
    cout << "|               INCH2CM | Vol | |     |   |" << endl;
    cout << "|       MPH2KMH |Lngth| |     | |     |   |" << endl;
    cout << "USD2CAN |Speed| |     | |     | |     |   |" << endl;
    cout << "|  $  | |     | |     | |     | |     |   |" << endl;
    cout << "|~~6~~| |~~7~~| |~~8~~| |~~9~~| |~10 ~|   |" << endl;
    cout << "|                                         |" << endl;
    cout << "|~Enter # greater than 10 to exit program~|" << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout << "Please Enter Desired Tool # :";
    
    cin >> desired_number;
    
    
    if (desired_number == 1){ 
        cout << "You chose tool # 1 - Canadian to USD dollar converter!" << endl;
        cout << endl;
        cout << "Please Enter CAN dollar amount :" << endl;
        double can_dol_amt = {0.0};
        double us_value = {0.0};
        const double can_value = 0.75; 
        cin >> can_dol_amt;
        us_value = can_dol_amt * can_value;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << "Your Canadian dollar amount is worth " << us_value << " in USD" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;

        }
    
    else if (desired_number == 2){
        cout << "You chose tool # 2 - Kilometers/hour to Miles/hour converter!" << endl;
        cout << endl;
        cout << "Please enter speed in Kilometers : " << endl;
        double speed_km = {0.0};
        double speed_ml = {0.0};
        double km_ml_conv = {.621};
        cin >> speed_km;
        speed_ml = km_ml_conv * speed_km;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << "Your speed is equal to " << speed_ml << " Miles per hour" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;

        }
        
    else if (desired_number == 3){    
        cout << "You chose tool # 3 - Centimeters to Inches converter!" << endl;
        cout << endl;
        cout << "Please enter your measurement in Centimeters :" << endl;
        double centimeter_value = {0.0};
        double inch_value = {0.0};
        double const cm_in_conv = {0.39};
        cin >> centimeter_value; 
        inch_value = centimeter_value * cm_in_conv;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << centimeter_value << " Centimeters is equal to " << inch_value << " Inches" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        }
    
    else if (desired_number == 4){
        cout << "You chose tool # 4 - Liters to Gallons converter" << endl;
        cout << endl;
        cout << "Please enter amount in Liters :" << endl;
        double liter_value = {0.0};
        double gallon_value = {0.0};
        double const lit_to_gal_conv = {3.785};
        cin >> liter_value;
        gallon_value = liter_value / lit_to_gal_conv;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << liter_value << " Liters is equal to " << gallon_value << " Gallons" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;

        }
        
    else if (desired_number == 5){    
        cout << "You chose tool # 5 - Celsius to Fahrenheit" << endl;
        cout << endl;
        cout << "Please enter value in Celsius : " << endl;
        double cel_value = {0.0};
        double far_value = {0.0};
        cin >> cel_value;
        double const cel_conv = {(cel_value * 9 / 5) + 32};
        far_value = cel_conv;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << cel_value << " Celsius is equal to " << far_value << " Fahrenheit" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
    
        }
    
    else if (desired_number == 6){
        cout << "You chose tool # 6 - USD to Canadian dollar converter!" << endl;
        cout << endl;
        cout << "Please Enter USD dollar amount :" << endl;
        double usd_dol_amt = {0.0};
        double can_value = {0.0};
        const double usd_value = 1.33; 
        cin >> usd_dol_amt;
        can_value = usd_dol_amt * usd_value;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << "Your USD dollar amount is worth " << can_value << " in Canadian." << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
    }
    
    else if (desired_number == 7){
        cout << "You chose tool # 7 - Miles/hour to Kilometers/hour converter!" << endl;
        cout << endl;
        cout << "Please enter speed in MPH : " << endl;
        double speed_ml = {0.0};
        double speed_km = {0.0};
        double ml_km_conv = {1.6};
        cin >> speed_ml;
        speed_km = ml_km_conv * speed_ml;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << "Your speed is equal to " << speed_km << " Kilometers per hour" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
    }
    
    else if (desired_number == 8){
        cout << "You chose tool # 8 - Inches to Centimeter converter!" << endl;
        cout << endl;
        cout << "Please enter your measurement in Inches :" << endl;
        double inch_value = {0.0};
        double centimeter_value = {0.0};
        double const in_cm_conv = {2.54};
        cin >> inch_value; 
        centimeter_value = inch_value * in_cm_conv;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << inch_value << " Inches is equal to " << centimeter_value << " Centimeters" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;

    }
    
    else if (desired_number == 9){
        cout << "You chose tool # 9 - Gallons to Liters converter" << endl;
        cout << endl;
        cout << "Please enter amount in Gallons :" << endl;
        double gallon_value = {0.0};
        double liter_value = {0.0};
        double const gal_to_lit_conv = {3.785};
        cin >> gallon_value;
        liter_value = gallon_value * gal_to_lit_conv;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << gallon_value << " Gallons is equal to " << liter_value << " Liters" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
    }
    
    else if(desired_number == 10){
        cout << "You chose tool # 10 - Fahrenheit to Celsius converter" << endl;
        cout << endl;
        cout << "Please enter value in Fahrenheit : " << endl;
        double far_value = {0.0};
        double cel_value = {0.0};
        cin >> far_value;
        double const far_conv = {(far_value - 32) * 5/9};
        cel_value = far_conv;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
        cout << far_value << " Fahrenheit is equal to " << cel_value << " Celsius" << endl;
        cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
    }
   
    }while (desired_number < 11);
    
    cout << "Goodbye!...";
    cout << endl;
	return 0;
    
}
