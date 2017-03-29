/*
 *  This file includes main function of the adressbook program.
 *
 *  @author Yurim Seo, Jeonghoon Lee
 *  @since  2017-03-17
 */

#include <iostream>
#include <fstream>
#include <algorithm>

#include "person.h"
#include "csv.h"
#include "sms.h"
#include "call.h"

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
    
    vector< Person > vector_name_;
    unordered_map<string, Person > map_number_;
    vector<string> menu = {
        "1. CallHistory",
        "2. MessageHistory",
        "3. Contacts"};
    vector<string> call_menu = {
        "1. All Calls",
        "2. Sent Calls",
        "3. Received Calls",
        "4. Missed Calls"};
    vector<string> msg_menu = {
        "1. All Messages",
        "2. Sent Messages",
        "3. Received Messages"};
    vector<string> contact_menu = {
        "1. Add Person",
        "2. Delete Person by name",
        "3. Delete Person by number" ,
        "4. Find By Name",
        "5. Find By Number",
        "6. Load Data",
        "7. Save Data",
        "8. Display Local Data"};
    
    char op;
    do {
        
        displayScreen(menu);
        cout << "(q) for QUIT" << endl;
        cout << "SELECT MENU : ";
        cin >> op;

        ifstream msgFile("sms.csv");
        ifstream callFile("call.csv");
        ifstream personFile("person.csv");

        Sms sms;
        Call call;
        vector<string> person;
        CsvRead read;

        string name;
        string number;
        string group;
        Person p;

        char op_history, op_detail;
        
        switch (op) {
            case '1':
                while (!callFile.eof()) {
                    call.loadData(read.loadData(callFile));
                }
                do {
                    displayScreen(call_menu);
                    cout << "(q) for QUIT" << endl;

                    cout << "SELECT MENU : ";
                    cin >> op_history;
                    switch (op_history) {
                        case '1':
                            call.displayAll(map_number_);
                            break;

                        case '2':
                            call.displaySent(map_number_);
                            break;
                        
                        case '3':
                            call.displayReceived(map_number_);
                            break;

                        case '4':
                            call.displayMissed(map_number_);
                            break;

                        default:
                            break;
                    }

                } while (op_history != 'q');
                
                break;

            case '2':
                while (!msgFile.eof()) {
                    sms.loadData(read.loadData(msgFile));
                }
                do {
                    displayScreen(msg_menu);
                    cout << "(q) for QUIT" << endl;

                    cout << "SELECT MENU : ";
                    cin >> op_history;
                    switch (op_history) {
                        case '1':
                            sms.displayAll(map_number_);
                            break;

                        case '2':
                            sms.displaySent(map_number_);
                            break;
                        
                        case '3':
                            sms.displayReceived(map_number_);
                            break;

                        default:
                            break;
                    }

                } while (op_history != 'q');

                break; 

            case '3':
                
                do {
                    // personFile("person.csv");
                    displayScreen(contact_menu);
                    cout << "(q) for QUIT" << endl;

                    cout << "choose option : " ;
                    cin >> op_detail;
                    
                    switch (op_detail) {
                        
                        case '1':
                            cout << "NAME : ";
                            cin >> name;
                            cout << "NUMBER : ";
                            cin >> number;
                            cout << "GROUP : ";
                            cin >> group;
                            
                        
                            p = Person(name, number, group);
                            vector_name_.push_back(p);
                            map_number_.insert({number, p});
                
                            cout << endl;
                            break;

                        case '2':
                            cout << "NAME : ";
                            cin >> name;

                            Person::delDataByName(&vector_name_ ,name);
                            // 이름에 따른 데이터들을 vector에서 지운다.
                            map_number_.erase(name);
                            // 이름에 따른 데이터들을 Hash Table에서 지운다.
                            cout << endl;
                            break;

                        case '3':
                            cout << "NUMBER : ";
                            cin >> number;

                            map_number_.erase(map_number_[number].getName());
                            Person::delDataByName(&vector_name_ , map_number_[number].getName());

                            cout << endl;
                            break;
                            
                        case '4':
                            cout << "NAME : ";
                            cin >> name;
                            
                            p = Person::searchByName(&vector_name_ , name);
                            if (p.getName() != "not")
                                cout << p;
                            cout << endl;
                            
                            break;
                            
                        case '5':
                            
                            cout << "NUMBER : ";
                            cin >> number;
                            cout << endl;
                            //find function.
                            p = map_number_[number];
                            
                            cout << p << endl;
                            
                            break;

                        case '6':
                            
                            while (!personFile.eof()) {
                                person = read.loadData(personFile);
                                p = Person(person[0], person[1], person[2]);
                                vector_name_.push_back(p);
                                map_number_.insert({person[1], p});
                            }
                            personFile.close();
                            break;

                        case '7':
                            
                            CsvWrite::saveData(vector_name_);
                            
                            break;
                            
                        case '8':
                            sort(vector_name_.begin(),vector_name_.end());
                            Person::displayData(vector_name_);
                            
                            cout << endl;
                            break;
                            
                        default:
                            break;
                    }
                    
                } while (op_detail != 'q');
                
                cout << endl;
                break;

            default:
                break;
        }

        msgFile.close();
        callFile.close();
        personFile.close();
        
    } while (op != 'q');

    
	return 0;
}


void displayScreen(vector<string> v){
    vector<string>::iterator it;
    cout << "==============================================" << endl;
    for(it = v.begin() ; it!= v.end(); it++) {
        cout << *it << endl;
    }
    cout << "==============================================" << endl;    
}
