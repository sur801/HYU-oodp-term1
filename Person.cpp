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

}

void person::loadData() {
    
}

void person::savaData() {

}

void person::delData(string name) {
    vector<Person>::iterator it;
    
    for(it = addr.begin() ; it != addr.end() ; it++) {
        if(it->name_ == name) {
            addr.erase(it);
        }
    }
}

void person::delData(string number) {
    vector<Person>::iterator it;
    
    for(it = addr.begin() ; it != addr.end() ; it++) {
        if(it->number_ == number) {
            addr.erase(it);
        }
    }
}


void person::sortData() {
    sort(addr.begin(), addr.end(), cmp)
}

void person::search() {
    
}
