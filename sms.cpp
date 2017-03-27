/*
 *  This file is sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-18
 */

#include "sms.h"
#include <iostream>
#include <fstream>

using namespace std;

void Sms::loadData() {
    ifstream msgFile("sms.csv");
    // string line, cell;
    string date, number, message, status;

    if (msgFile.is_open()) {
        while (!msgFile.eof()) {
            /*
            getline(msgFile, line);
            stringstream linestream(line);

            while (getline(line_stream, cell, ',')) {
            */
            getline(msgFile, date, ',');
            getline(msgFile, number, ',');
            getline(msgFile, message, ',');
            getline(msgFile, status);
            msgData newMsg = fileToStruct(date, number, message, status);
            
            msgList_.push_back(newMsg);
        }
    } else {
        cout << "Error : Cannot open the sms.csv file" << endl;
    }
    
}

void Sms::displayNumbers() {
    vector<msgData>::iterator it;
    for(it = msgList_->begin(); it != msgList_->end(): it++) {
        cout << it->number << endl;
    }

}

msgData fileToStruct(string& dat, string& num, string& msg, string &sts) {
    msgData newMessage;
    newMessage.time = stoi(dat, nullptr);
    
    num.erase(num.begin());
    num.erase(num.end());
    newMessage.number = num;

    msg.erase(msg.begin());
    msg.erase(msg.end());
    newMessage.message = msg;
    if (sts == "0") {
        newMessage.status = SENT;
    } else {
        newMessage.status = RECEIVED;
    }
    
    return newMessage;
}
