/*
 *  This file is person.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-26
 */


#include <iostream>
#include <vector>
#include "person.h"

using namespace std;


bool cmp(Person& a, Person& b) { return a.name > b.name; }

void person::displayData() {
    cout << "name : " << this->name_ << endl; << "number : " << this->number_ << endl << "group : " << this->group_ << endl;
}

void person::loadData() {
    
}

void person::savaData() {

}

void person::delData(string name) {
    // auto를 이용해 vector에 접근
    for(auto it : addr) {
        if(it->name_ == name) {
            addr.erase(it);
        }
    }
}

void person::delData(string number) {
     // auto를 이용해 vector에 접근
    for(auto it : addr) {
        if(it->number_ == number) {
            addr.erase(it);
        }
    }
}


void person::sortData() {
    sort(addr.begin(), addr.end(), cmp)
}

void person::search(string number) {
    auto it = map_number_.find(number);
    
    if ( it == map_number_.end() )
        cout << "not found";
    else
        cout << it->displayData() endl;
}


void person::search(string name) {
    auto it = map_name_.find(name);
    
    if ( it == map_name_.end() )
        cout << "not found";
    else
        cout << it->displayData() endl;
}
