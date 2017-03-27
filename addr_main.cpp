#include<iostream>
#include<vector>
#include "Sms.h"
using namespace std;

void displayScreen(vector<string> v);

int main(int argc, char** argv){
    vector<string> menu = {"1. CallHistory", "2. MessageHistory", "3. Contacts",};
    char op;
    do {
        
        displayScreen(menu);
        cout << "quit for (q)" << endl;
        cout << "choose number : ";
       
        cin >> op;
        switch (op) {
            case '2':
                Sms s = Sms();
                s.loadData();
                break;
            default:
                break;
        }
    } while(op!='q');
    
    
	return 0;
}


void displayScreen(vector<string> v){
    vector<string>::iterator it;
    for(it = v.begin() ; it!= v.end(); it++) {
        cout << *it << endl;
    }
    
}