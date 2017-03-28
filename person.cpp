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

void Person::displayData(vector<Person>  v) {
    
    
    auto it = v.begin();
    for(it ; it != v.end() ; it++ ) {
        cout << (*it);
    }
    
}

void Person::loadData() {
    
}

void Person::saveData() {

}

void Person::delDataByName(vector<Person>  *v ,string name) {
    
    int left = 0;
    int right = v->size() - 1;

    while(left <= right) {
        int mid = (right + left) / 2;

        if((*v)[mid].getName() == name) {
            string number  = (*v)[mid].getNumber();
            v->erase((v->begin())+mid);
            // delete data in vetor of person objects
            return;
            
        } else if((*v)[mid].getName() < name) {

            left = mid + 1;

        } else if((*v)[mid].getName() > name) {

            right = mid - 1;

        }
        
    }
    
    // if you can't find the data, print "not found!"
    cout << "not found!" << endl;
    
    
}

Person Person::searchByName(vector<Person>  *v ,string name){
    
    int left = 0;
    int right = v->size() - 1;
    Person p;
    while(left <= right) {
        int mid = (right + left) / 2;
        if((*v)[mid].getName() == name) {
            p = (*v)[mid];
            
            return p;
            
        } else if((*v)[mid].getName() < name) {
            left = mid + 1;
        } else if((*v)[mid].getName() > name) {
            right = mid - 1;
        }
        
        
    }
    p = Person("not","not","not");
    cout << "not found!" << endl;
    return p;
    
}
