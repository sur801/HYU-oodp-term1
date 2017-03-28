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
        typedef vector<pair<string, Person*> > :: iterator v_it;
        Person(string name, string number, string group){
            this->name_ = name;
            this->number_ = number;
            this->group_ = group;
           // cout << "constructor" << endl;
            //cout << this->name_ << endl << this->number_ << endl << this->group_ << endl;
            //this->sortData();
        }
        string getName() { return this->name_; };
        string getNumber() { return this->number_; };
        string getGroup() { return this->group_; };
        void displayData(vector<pair<string, Person> > v);
        void loadData();
        void saveData();
        void delDataByName(string name);
        void delDataByNumber(string number);
        void sortData(v_it, v_it);
        void searchByName(vector<pair<string, Person> > *v ,string name);
        static void searchByNumber(unordered_map<string, Person> *m ,string number);
    
        friend ostream& operator<<(ostream&, const Person&);
    
    
    private:
        string name_;
        string number_;
        string group_;

};


#endif
