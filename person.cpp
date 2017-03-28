/*
 *  This file is person.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-26
 */


#include <iostream>
#include <algorithm>
#include <unordered_map>
#include "person.h"

using namespace std;

typedef vector<pair<string, Person*> > :: iterator v_it;
//bool cmp(Person& a, Person& b) { return a.name > b.name; }

void Person::displayData(vector<pair<string, Person> > v) {
    
    /*
    auto it = v.begin();
    for(it ; it != v.end() ; it++ ) {
        cout << it->first << endl << it->second->number_ << endl << it->second->group_ << endl << endl;
    }
     */
}

void Person::loadData() {
    
}

void Person::saveData() {

}

void Person::delDataByName(string name) {
    
    /*auto it = vector_name_.begin();
    
    // auto를 이용해 vector에 접근
    for (it; it != vector_name_.end(); it++) {
        if (it->second->name_ == name) {
            int number = it->second->number_;
            delData(number);
            vector_name_.erase(it);
        }
    }
     */
    
}

void Person::delDataByNumber(string number) {
    /*
    auto it = map_number_.find(number);
    
    if (it == map_number_.end()) {
        cout << "not found!" << endl;
    }
    
    string name = it->second->name_;
    
    delData(name);
    map_number_.erase(it);
     */
}


void Person::sortData(v_it, v_it) {
   // sort(vector_name_.begin(), vector_name_.end());
}

void Person::searchByNumber(unordered_map<string, Person> *m ,string number) {
    

    auto it = m->find(number);
    cout << number << endl;
    //cout << it->second->getName() << endl;
    if ( it == m->end() ) {
        cout << "not found" << endl;
    }else {
        
        cout << "name : " << it->second.getName() << endl << "number : " << it->second.getNumber() << endl << "group : " << it->second.getGroup() << endl;
    }
}


void Person::searchByName(vector<pair<string, Person> > *v ,string name){
    
    int left = 0;
    int right = v->size() - 1;

    while(left <= right) {
        int mid = (right + left) / 2;
        if((*v)[mid].first == name) {
            Person p = (*v)[mid].second;
            
            cout << "name : " << p.getName() << endl << "number : " << p.getNumber() << endl << "group : " << p.getGroup() << endl;
            break;
            
        } else if((*v)[mid].first < name) {
            left = mid + 1;
        } else if((*v)[mid].first > name) {
            right = mid - 1;
        }
        
        
    }
     
    
   // cout << "not found!";
    
}
