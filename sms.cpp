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
        if (msgList_[i][3] == "0") {
            cout << "<- ";
        } else if (msgList_[i][3] == "1") {
            cout << "-> ";
        }
        for (int j = 0; j < 3; j++) {
            cout << msgList_[i][j] << "\t";
        }
        cout << endl;
    }
}

void Sms::displaySent() {
    int index = 1;

    for (int i = 0; i < this->msgSize(); i++) {
        if (msgList_[i][3] == "0") {
            cout << "<- ";
            for (int j = 0; j < 3; j++) {
                cout << msgList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}


void Sms::displayReceived() {
    int index = 1;

    for (int i = 0; i < this->msgSize(); i++) {
        if (msgList_[i][3] == "1") {
            cout << "-> ";
            for (int j = 0; j < 3; j++) {
                cout << msgList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
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
