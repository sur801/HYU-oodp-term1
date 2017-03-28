/*
 *  This file is person.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-26
 */


#include <iostream>
#include "person.h"

using namespace std;


//bool cmp(Person& a, Person& b) { return a.name > b.name; }

void Person::displayData() {
    //cout << "name : " << this->name_ << endl; << "number : " << this->number_ << endl << "group : " << this->group_ << endl;
}

void Person::loadData() {
    
}

void Person::saveData() {

}

void Person::delData(string name) {
    
    auto it = map_name_.begin();
    
    // auto를 이용해 vector에 접근
    for(auto it : map_name_) {
        if(it->second.name_ == name) {
            int number = it.second.number_;
            delData(number);
            addr.erase(it);
        }
    }
    
}

void Person::delData(int number) {
    auto it = map_number_.find(number);
    
    if(it == map_name_.end()) {
        cout << "not found!" << endl;
    }
    
    string name = it.second.name_;
    
    delData(name);
    map_number_.erase(it);
}


void Person::sortData() {
    sort(map_name_.begin(), map_name_.end());
}

void Person::searchByNumber(string number) {
    auto it = map_number_.find(number);
    
    if ( it == map_number_.end() )
        cout << "not found" << endl;
    else {
        Person p = map_number_.second;
        
        cout << "name : " << p.name_ << endl << "number : " << p.number_ << endl << "group : " << p.group_ << endl;
    }
}


void Person::searchByName(string name) {
    
    int left = 0;
    int right = map_name_.size() - 1;

    while(left <= right)
    {
        int mid = (right + left) / 2;
        if(map_name_[mid].first == name) {
            Person p = map_name_[mid].second;
            
            cout << "name : " << p.name_ << endl << "number : " << p.number_ << endl << "group : " << p.group_ << endl;
            
        } else if(map_name_[mid].first < name) {
            left = mid + 1;
        } else if(map_name_[mid] > name) {
            right = mid - 1;
        }
        
        
    }
    
    cout << "not found!";
    
}
