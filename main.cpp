#include <iostream>
#include <string>
//Private Cypher program
using namespace std;

int main()
{   int desired_option {};
   
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
    string key {"/Flu!Co8Dh&a3K(ZU6cmf#d,A4%|9k@tzq^Q7I*Je5P$.E)T~ji0+_?:]{>'-="};
    string unencrypted_string {};

    do {

    cout << "!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~" << endl;
    cout << "~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
    cout << "!~!~!~!~!~!~!~!~!~!WELCOME TO CHUCKS ADV-CYPHER ENGINE!~!~!~!~!~!~!~!~!~!~" << endl;
    cout << "~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
    cout << "!~!~!~!~!~!~!~!~!~!PLEASE ENTER DESIRED OPTION NUMBER~!~!~!~!~!~!~!~!~!~!~" << endl;
    cout << "~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
    cout << "!~!~!~!~!~!~!~!~!~!OPTION (1)[ENCRYPT TEXT DATA]!~!~!~!~!~!~!~!~!~!~!~!~!~" << endl;   
    cout << "~!~!~!~!~!~!~!~!~!~OPTION (2)[DECRYPT TEXT DATA]~!~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
    cout << "!~!~!~!~!~!~!~!~!~!OPTION (3)[EXIT PROGRAM]~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~" << endl;
    cout << "~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
    cout << "!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~" << endl;
    
    cout << "DESIRED OPTION # : " << endl;
     cin >> desired_option;  
  
    if (desired_option == 1) {
    string encrypted_string {};
    cout << "!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~" << endl;
    cout << "~!~!~!~!~!~!~!~!~!~!~!Welcome to encryption engine~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
    cout << "!~!~!~!~!~!~!~!~!~!~!~Please Enter Data to Encrypt!~!~!~!~!~!~!~!~!~!~!~!~" << endl;
    cout << "~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
    cin.ignore();
    getline (cin, unencrypted_string);
     
    
    cout << "ENCRYPTING DATA..." << endl;
    
    for (char c: unencrypted_string) { //c = every char in current string
        size_t position = alphabet.find(c);
        if (position != string::npos) { // if the position is not equal to no position
            char new_char { key.at(position) }; //asking key string for variable position
            encrypted_string += new_char; //substitute 
        } else {        //do nothing use char as is
            encrypted_string += c;
        }
    
    
    cout << "\nENCRYPTED DATA: " << encrypted_string << endl;
    }
    
    }else if (desired_option == 2) {
        string undecrypted_string {};
        string decrypted_string {};
        cout << "!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~" << endl;
        cout << "~!~!~!~!~!~!~!~!~!~!~!Welcome to decryption engine~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
        cout << "!~!~!~!~!~!~!~!~!~!~!~Please Enter Data to Decrypt!~!~!~!~!~!~!~!~!~!~!~!~" << endl;
        cout << "~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!" << endl;
        cin.ignore();
        getline(cin, undecrypted_string);
        cout << "\nDECRYPTING DATA..." << endl;
        
        for (char c: undecrypted_string) {
            size_t position = key.find(c);
            if (position != string::npos) {
                char new_char { alphabet.at(position) };
                decrypted_string += new_char;
            } else {
                decrypted_string += c;
            }
        }
    cout << "\nDECRYPTED DATA: " << decrypted_string << endl;
        } else {
        return 0;
        }


    }while(desired_option == 1 || desired_option == 2); 

}