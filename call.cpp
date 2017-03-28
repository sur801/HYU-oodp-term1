/*
 * this file is header of call.cpp
 * @author	Yurim Seo
 * @since	2017-03-25
 *
 */

#include "call.h"

#define	COL	3

using namespace std;

void Call::loadData(vector<string> call) {

    callList_.push_back(call);
}

void Call::displayAll() {
    int index = 1;

    for (int i = 0; i < this->callSize(); i++) {
    	cout << index++;
        if (callList_[i][COL] == "0") {
            cout << " <- ";
        } else if (callList_[i][COL] == "1") {
            cout << " -> ";
        } else if (callList_[i][COL] == "2") {
            cout << " ?? ";
        } 
        for (int j = 0; j < COL; j++) {
            cout << callList_[i][j] << "\t";
        }
        cout << endl;
    }
}

void Call::displaySent() {
    int index = 1;

    for (int i = 0; i < this->callSize(); i++) {
        if (callList_[i][COL] == "0") {
            cout << index++ << "<- ";
            for (int j = 0; j < COL; j++) {
                cout << callList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

void Call::displayReceived() {
    int index = 1;

    for (int i = 0; i < this->callSize(); i++) {
        if (callList_[i][COL] == "1") {
            cout << index++ << "-> ";
            for (int j = 0; j < COL; j++) {
                cout << callList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

void Call::displayMissed() {
    int index = 1;

    for (int i = 0; i < this->callSize(); i++) {
        if (callList_[i][COL] == "2") {
            cout << index++ << "?? ";
            for (int j = 0; j < COL; j++) {
                cout << callList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

size_t Call::callSize() {
    return callList_.size() - 1;
}
