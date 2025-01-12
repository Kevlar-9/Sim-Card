#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(){

string first_name;
string last_name;
string age;
string options;

cout << "Hello There! Welcome to our network" << endl;
cout << "What is your first name" << endl;
cin >> first_name;
cout << "What is your last name" << endl;
cin >> last_name;
string full_name = first_name + " " + last_name;
cout << "Hello" << " " << full_name << endl;

cout << "What would you like to do?\n" << "option 1: Buy data bundles\n" << "option 2: Buy airtime\n" << "option 3: Sms packages\n" << "option 4: Voice bundles\n" << "option 5: Check balance" << endl;
cin >> options;

if (options == "1"){
    cout << "option 1: Daily bundles\n" << "option 2: Weekly bundles\n" << "option 3: Monthly bundles\n" << "option 4: Midnight bundles\n" << "option 5: Special Offers\n" << "option 6: Back" << endl;

}
else if (options == "2"){
    cout << "option 1: For Yourself\n" << "option 2: For Someone else\n" << "option 3: back" << endl;
}
else if (options == "3"){
        cout << "option 1: For Yourself\n" << "option 2: For Someone else\n" << "option 3: back" << endl;
}
else if (options == "4"){
        cout << "option 1: For Yourself\n" << "option 2: For Someone else\n" << "option 3: back" << endl;
}
else if (options == "5"){
        cout << "option 1: Check data bundle\n" << "option 2: Check airtime left\n" << "option 3: Check sms left\n"  << "option 4: back" << endl;
}
else{ cout << "Invalid option" << endl;}


















    return 0;
}