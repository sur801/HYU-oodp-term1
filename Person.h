/*
 *  This file is header of sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-26
 */

#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
#include <unordered_map>

typedef enum Group {
    FAMILY,
    FRIEND,
    COWORKER,
    ETC
};

class Person{
    public:
        static vector<Person> addr;
        Person(string name, int number, Group group) : name_(name), number_(number), group_(group) {
            map_name_.insert(make_pair(this->name_, this));
            map_number_.insert(make_pair(this->number_, this));
        }
    
        void displayData();
        void loadData();
        void saveData();
        void delData(string name);
        void delData(string number);
        void sortData();
        void search(string name);
        void search(string number);
    
        friend ostream& operator<<(ostream&, const Person&);
    
    
    private:
        unorderd_map<string, &Person> map_number_;
        unorderd_map<string, &Person> map_name_;
        string name_;
        int number_;
        Group group_;

};


#endif
