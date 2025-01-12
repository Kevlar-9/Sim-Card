//where i have reached = buying data bundles





#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(){

string first_name;
string last_name;
string age;
string option;

cout << "Hello There! Welcome to our network" << endl;
cout << "What is your first name" << endl;
cin >> first_name;
cout << "What is your last name" << endl;
cin >> last_name;
string full_name = first_name + " " + last_name;
cout << "Hello" << " " << full_name << endl;

cout << "What would you like to do?\n" << "option 1: Buy data bundles\n" << "option 2: Buy airtime\n" << "option 3: Sms packages\n" << "option 4: Voice bundles\n" << "option 5: Check balance" << endl;
cin >> option;

if (option == "1"){
    cout << "option 1: Daily bundles\n" << "option 2: Weekly bundles\n" << "option 3: Monthly bundles\n" << "option 4: Midnight bundles\n" << "option 5: Hour Bundles\n" << "option 6: Special Offers\n" << "option 7: Back" << endl;
cin >> option;

if(option == "1"){
    cout << "option 1: For Yourself\n" << "option 2: For Someone else\n" << endl;
    cin >> option;
if(option == "1"){
    cout << "option 1: 80MB @ 1\n" << "option 2: 150MB @ 2 \n" << "option 3: 350MB @ 3 \n" << "option 4: 500MB @ 5 \n" << "option 5: 1GB @ 10\n" << "option 6: 5GB @ 20\n" << "option 7: 10GB @ 50 \n" << "option 8: Back" << endl;

    }
    cout << "option 1: 80MB @ 1\n" << "option 2: 150MB @ 2 \n" << "option 3: 350MB @ 3 \n" << "option 4: 500MB @ 5 \n" << "option 5: 1GB @ 10\n" << "option 6: 5GB @ 20\n" << "option 7: 10GB @ 50 \n" << "option 8: Back" << endl;
    cin >> option;
if(option == "1"){
    cout << "Purchase using:\n" << "option 1: Airtime\n" << "option 2: Momo \n" << "option 3: Cancel\n" << endl;
}
if(option == "2"){
    cout << "option 1: 80MB @ 1\n" << "option 2: 150MB @ 2 \n" << "option 3: 350MB @ 3 \n" << "option 4: 500MB @ 5 \n" << "option 5: 1GB @ 10\n" << "option 6: 5GB @ 20\n" << "option 7: 10GB @ 50 \n" << "option 8: Back" << endl;
}
if(option == "3"){
    cout << "option 1: 80MB @ 1\n" << "option 2: 150MB @ 2 \n" << "option 3: 350MB @ 3 \n" << "option 4: 500MB @ 5 \n" << "option 5: 1GB @ 10\n" << "option 6: 5GB @ 20\n" << "option 7: 10GB @ 50 \n" << "option 8: Back" << endl;
}
if(option == "4"){
    cout << "option 1: 80MB @ 1\n" << "option 2: 150MB @ 2 \n" << "option 3: 350MB @ 3 \n" << "option 4: 500MB @ 5 \n" << "option 5: 1GB @ 10\n" << "option 6: 5GB @ 20\n" << "option 7: 10GB @ 50 \n" << "option 8: Back" << endl;
}
if(option == "5"){
    cout << "option 1: 80MB @ 1\n" << "option 2: 150MB @ 2 \n" << "option 3: 350MB @ 3 \n" << "option 4: 500MB @ 5 \n" << "option 5: 1GB @ 10\n" << "option 6: 5GB @ 20\n" << "option 7: 10GB @ 50 \n" << "option 8: Back" << endl;
}
if(option == "6"){
    cout << "option 1: 80MB @ 1\n" << "option 2: 150MB @ 2 \n" << "option 3: 350MB @ 3 \n" << "option 4: 500MB @ 5 \n" << "option 5: 1GB @ 10\n" << "option 6: 5GB @ 20\n" << "option 7: 10GB @ 50 \n" << "option 8: Back" << endl;
}

if(option == "7"){
    cout << "option 1: Daily bundles\n" << "option 2: Weekly bundles\n" << "option 3: Monthly bundles\n" << "option 4: Midnight bundles\n" << "option 5: Hour Bundles\n" << "option 6: Special Offers\n" << "option 7: Back" << endl;
    cin >> option;
    }





}



else if (option == "2"){
    cout << "option 1: For Yourself\n" << "option 2: For Someone else\n" << "option 3: back" << endl;
    cin >> option;
}









else if (option == "3"){
        cout << "option 1: For Yourself\n" << "option 2: For Someone else\n" << "option 3: back" << endl;
        cin >> option;
}







else if (option == "4"){
        cout << "option 1: For Yourself\n" << "option 2: For Someone else\n" << "option 3: back" << endl;
        cin >> option;
}










else if (option == "5"){
        cout << "option 1: Check data bundle\n" << "option 2: Check airtime left\n" << "option 3: Check sms left\n"  << "option 4: back" << endl;
        cin >> option;
}











else{ cout << "Invalid option" << endl;
}


















    return 0;
}
}
