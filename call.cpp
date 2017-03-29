/*
 * This file is header of call.cpp
 *
 * @author	Yurim Seo
 * @since	2017-03-25
 */

#include "call.h"

#define	COL	3

using namespace std;


void Call::loadData(vector<string> call) {
	string temp = call[0];
	int tempNum = stoi(call[2], nullptr);

	call[0] = temp.substr(0, 4) + "-" + temp.substr(4, 2) + "-" + temp.substr(6, 2) + " " + temp.substr(8, 2) + ":" + temp.substr(10, 2) + ":" + temp.substr(12);
	call[2] = to_string(tempNum / 3600) + ":";
	tempNum %= 3600;
	call[2] += to_string(tempNum / 60) + ":" + to_string(tempNum % 60);
	callList_.push_back(call);
}

void Call::displayAll(unordered_map<string, Person > map) {
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

        if (callList_[i][1] == map[callList_[i][1]].getNumber()) {
            callList_[i][1] = map[callList_[i][1]].getName();
        }

        for (int j = 0; j < COL; j++) {
            cout << callList_[i][j] << "\t";
        }
        cout << endl;
    }
}

void Call::displaySent(unordered_map<string, Person > map) {
    int index = 1;

    for (int i = 0; i < this->callSize(); i++) {
        if (callList_[i][COL] == "0") {
            cout << index++ << " <- ";
            if (callList_[i][1] == map[callList_[i][1]].getNumber()) {
        	    callList_[i][1] = map[callList_[i][1]].getName();
        	}
            for (int j = 0; j < COL; j++) {
                cout << callList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

void Call::displayReceived(unordered_map<string, Person > map) {
    int index = 1;

    for (int i = 0; i < this->callSize(); i++) {
        if (callList_[i][COL] == "1") {
            cout << index++ << " -> ";
            if (callList_[i][1] == map[callList_[i][1]].getNumber()) {
            	callList_[i][1] = map[callList_[i][1]].getName();
        	}
            for (int j = 0; j < COL; j++) {
                cout << callList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

void Call::displayMissed(unordered_map<string, Person > map) {
    int index = 1;

    for (int i = 0; i < this->callSize(); i++) {
        if (callList_[i][COL] == "2") {
            cout << index++ << " ?? ";
            if (callList_[i][1] == map[callList_[i][1]].getNumber()) {
            	callList_[i][1] = map[callList_[i][1]].getName();
        	}
            for (int j = 0; j < COL; j++) {
                cout << callList_[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

size_t Call::callSize() {
    return callList_.size();
}
