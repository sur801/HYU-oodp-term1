/*
 *  This file is header of sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-26
 */

#ifndef __PERSON_H__
#define __PERSON_H__

#include <utility>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*typedef enum Group {
    FAMILY,
    FRIEND,
    COWORKER,
    ETC
} Group;
 */

class Person{
    public:
        Person(){};
        Person(string name, int number, string group) : name_(name), number_(number), group_(group) {
            vector_name_.push_back(make_pair(this->name_, this));
            map_number_.insert(make_pair(this->number_, this));
            this->sortData();
        }
    
        void displayData();
        void loadData();
        void saveData();
        void delData(string name);
        void delData(int number);
        void sortData();
        void searchByName(string name);
        void searchByNumber(int number);
    
        friend ostream& operator<<(ostream&, const Person&);
    
    
    private:
        vector<pair<string, Person*> > vector_name_;
        unordered_map<int, Person*> map_number_;
        string name_;
        int number_;
        string group_;

};


#endif
