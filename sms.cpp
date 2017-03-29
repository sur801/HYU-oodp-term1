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
    string temp = msg[0];
    msg[0] = temp.substr(0, 4) + "-" + temp.substr(4, 2) + "-" + temp.substr(6, 2) + " " + temp.substr(8, 2) + ":" + temp.substr(10, 2) + ":" + temp.substr(12);

    msgList_.push_back(msg);
}
/*
   string Sms::print() {
   return 
 */
void Sms::displayAll(unordered_map<string, Person > map) {
    int index = 1;

    for (int i = 0; i < this->msgSize(); i++) {
        cout << index++;
        if (msgList_[i][COL] == "0") {
            cout << " <- ";
        } else if (msgList_[i][COL] == "1") {
            cout << " -> ";
        }

        if (msgList_[i][1] == map[msgList_[i][1]].getNumber()) {
            msgList_[i][1] = map[msgList_[i][1]].getName();
        }

        for (int j = 0; j < COL; j++) {
            cout << msgList_[i][j] << "\t";
        }
        cout << endl;
    }
}

void Sms::displaySent(unordered_map<string, Person > map) {
    int index = 1;

    for (int i = 0; i < this->msgSize(); i++) {
        if (msgList_[i][COL] == "0") {
            cout << index++ << " <- ";

            if (msgList_[i][1] == map[msgList_[i][1]].getNumber()) {
                msgList_[i][1] = map[msgList_[i][1]].getName();
            }
            for (int j = 0; j < COL; j++) {
                cout << msgList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}


void Sms::displayReceived(unordered_map<string, Person > map) {
    int index = 1;

    for (int i = 0; i < this->msgSize(); i++) {
        if (msgList_[i][COL] == "1") {
            cout << index++ << " -> ";
            if (msgList_[i][1] == map[msgList_[i][1]].getNumber()) {
                msgList_[i][1] = map[msgList_[i][1]].getName();
            }
            for (int j = 0; j < COL; j++) {
                cout << msgList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

size_t Sms::msgSize() {
    return msgList_.size();
}
