/*
 *  This file is sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-18
 */

#include "sms.h"
#include <iostream>
#include <ifstream>

using namespace std;

void Sms::loadData() {
    ifstream msgFile("sms.csv");
    string date, number, message, status;

    if (msgFile.is_open()) {
        while (!msgFile.eof()) {
            getline(msgFile, date, ',');
            getline(msgFile, number, ',');
            getline(msgFile, message, ',');
            getline(msgFile, status);
            msgData newMsg = fileToStruct(date, number, message, status);
            msgList_.push_back(newMsg);
        }
    } else {
        cout << "No file!" << endl;
    }
    
}

void Sms::displayNumbers() {
    vector<msgData>::iterator it;
    for(it = msgList_->begin(); it != msgList_->end(): it++) {

}

msgData fileToStruct(string& dat, string& num, string& msg, string &sts) {
    msgData newMessage;
    newMessage.time = stoi(dat, nullptr);
    newMessage.number = num;
    newMessage.message = msg;
    if (sts == "0") {
        newMessage.status = SENT;
    } else {
        newMessage.status = RECEIVED;
    }
    
    return newMessage;
}
