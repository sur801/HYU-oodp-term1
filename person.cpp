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

/*
bool cmp(vector<pair<string, Person> > &st, vector<pair<string, Person> > &ed) {
    
    return st.second.name > ed.second.name;
}
*/

void Person::displayData(vector<pair<string, Person> > v) {
    
    
    auto it = v.begin();
    for(it ; it != v.end() ; it++ ) {
        cout << "name : " <<  it->first << "\t" << "number : " << it->second.number_ << "\t" << "group : " << it->second.group_ << endl;
    }
    
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


void Person::sortData(vector<pair<string, Person> > *v) {
    sort(v->begin(),v->end());
}



void Person::searchByName(vector<pair<string, Person> > *v ,string name){
    
    int left = 0;
    int right = v->size() - 1;

    while(left <= right) {
        int mid = (right + left) / 2;
        if((*v)[mid].first == name) {
            Person p = (*v)[mid].second;
            
            cout << "name : " << p.getName() << endl << "number : " << p.getNumber() << endl << "group : " << p.getGroup() << endl;
            return;
            
        } else if((*v)[mid].first < name) {
            left = mid + 1;
        } else if((*v)[mid].first > name) {
            right = mid - 1;
        }
        
        
    }
     
    
    cout << "not found!";
    
}
