/*
 *  This file is sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-18
 */

#include "sms.h"
#include <fstream>

using namespace std;

void Sms::loadData(vector<string> msg) {
    msgList_.push_back(msg);
}
/*
   string Sms::print() {
   return 
 */
void Sms::displayAll() {
    int index = 1;

    /*
    for (row = msgList_.begin(); row != msgList_.end(); row++) {
        for (col = row->begin(); col != row->end(); col++) {
        */
    for (int i = 0; i < this->msgSize(); i++) {
        for (int j = 0; j < 4; j++) {
            cout << msgList_[i][j] << "\t";
        }
        cout << endl;
    }
}

void Sms::displaySent() {
    int index = 1;

    /*
    vector<vector<string> >::iterator row;
    vector<string>::iterator col;
    for (row = msgList_.begin(); row != msgList_.end(); row++) {
        for (col = row->begin(); col != row->end(); col++) {
            if (*row->end() == "0") {
                cout << *col << "\t";
            }
            cout << endl;
        }
    }
    */
}


void Sms::displayReceived() {
    int index = 1;

    /*
    vector<vector<string> >::iterator row;
    vector<string>::iterator col;
    for (row = msgList_.begin(); row != msgList_.end(); row++) {
        for (col = row->begin(); col != row->end(); col++) {
            if (*row->end() == "1") {
                cout << *col << "\t";
            }
            cout << endl;
        }
    }
    */
}

size_t Sms::msgSize() {
    return msgList_.size();
}

/*
   ostream& printData(vector<msgData>::iterator it) {
   int date;
   string number, message, status;

   it.pop_back();
   date = stoi(it.pop_back(), nullptr);
 */    
