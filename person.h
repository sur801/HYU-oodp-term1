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
        typedef vector<pair<string, Person> >::iterator v_it;
        Person(string name, string number, string group){
            this->name_ = name;
            this->number_ = number;
            this->group_ = group;
        }
        string getName() { return this->name_; };
        string getNumber() { return this->number_; };
        string getGroup() { return this->group_; };
        static void displayData(vector<Person> v);
        void loadData();
        void saveData();
        static void delDataByName(vector<Person> *v ,string name);
        static Person searchByName(vector<Person>  *v ,string name);
    
        bool operator<(const Person &a) const {
            return this->name_ < a.name_;
        };

        friend ostream& operator<<(ostream& os, Person& p) {
            os << "name : " <<  p.getName()<< "\t" << "number : " << p.getNumber() << "\t" << "group : " << p.getGroup() << endl;
            return os;
        };
    
    
    private:
        string name_;
        string number_;
        string group_;

};


#endif
