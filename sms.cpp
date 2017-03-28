/*
 *  This file is sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-18
 */

#include "sms.h"

#define COL 3

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

    for (int i = 0; i < this->msgSize(); i++) {
        cout << index++;
        if (msgList_[i][COL] == "0") {
            cout << " <- ";
        } else if (msgList_[i][COL] == "1") {
            cout << " -> ";
        }
        for (int j = 0; j < COL; j++) {
            cout << msgList_[i][j] << "\t";
        }
        cout << endl;
    }
}

void Sms::displaySent() {
    int index = 1;

    for (int i = 0; i < this->msgSize(); i++) {
        if (msgList_[i][COL] == "0") {
            cout << index++ << " <- ";
            for (int j = 0; j < COL; j++) {
                cout << msgList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}


void Sms::displayReceived() {
    int index = 1;

    for (int i = 0; i < this->msgSize(); i++) {
        cout << index++;
        if (msgList_[i][COL] == "1") {
            cout << index++ << " -> ";
            for (int j = 0; j < COL; j++) {
                cout << msgList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

size_t Sms::msgSize() {
    return msgList_.size() - 1;
}
