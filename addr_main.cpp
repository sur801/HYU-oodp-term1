#include <iostream>
#include <fstream>
#include <vector>

#include "person.h"
#include "csv.h"
#include "sms.h"

using namespace std;

void displayScreen(vector<string> v);
/*
typedef enum Group {
    FAMILY,
    FRIEND,
    COWORKER,
    ETC
};*/

int main(int argc, char** argv) {
    vector<string> menu = {"1. CallHistory", "2. MessageHistory", "3. Contacts"};
    vector<string> contact_menu = {"1. Add Person", "2. Delete Person", "3. Find By Name", "4. Find By Number", "5. Load Data", "6. Save Data"};
    char op;
    do {
        
        displayScreen(menu);
        cout << "quit for (q)" << endl;
        cout << "choose number : ";
       
        cin >> op;
        ifstream msgFile("sms.csv");

        Sms sms;
        CsvRead read;

        switch (op) {
            case '1':
                break;

            case '2':
                while (!msgFile.eof()) {
                    sms.loadData(read.loadData(msgFile));
                }
                sms.displayAll();
                break;

            case '3':
                displayScreen(contact_menu);
                
                int op_num;
                
                if(op_num == 1) {
                    string name;
                    int number;
                    string group;
                    cout << "name : ";
                    cin >> name;
                    cout << "number : ";
                    cin >> number;
                    cout << "group : ";
                    cin >> group;
                    
                    Person p_obj = Person(name, number, group);
                    
                } else if(op_num == 3) {
                    Person p_obj = Person();
                    string name;
                    cout << "enter the name : " ;
                    cin >> name;
                    p_obj.searchByName(name);
                    
                } else if(op_num == 4) {
                    cout << "hello!" << endl;
                }
                
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
