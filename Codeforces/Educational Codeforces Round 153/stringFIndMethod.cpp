#include<iostream>

using namespace std;

int main(){
    string str = "Bhanu Teja";

    if(str.find("Bkanu") < str.size()){

    cout << str.find("Bkanu") << endl;
    }
    else{
        cout << "Not a substring" << endl;
    }
}


// coming to the concept we all know that str.fing() gives the staring index of the string we want to find in the str.

// So what if we not find that string inside str then it gives an exception

/* For that we have a const value which is "string::npos"  which means that it is having no position inside the str */