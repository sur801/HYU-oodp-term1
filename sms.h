/*
 *  This file is header of sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-17
 */

#ifndef __SMS_H__
#define __SMS_H__

#include <iostream>
#include <vector>

using namespace std;

// identify status of SMS
typedef enum Status {
    SENT,
    RECEIVED
} Status;

class Sms {
    public:
        Sms() {};
        void loadData(vector<string> msg);
        // print();
        void displayAll();
        void displaySent();
        void displayReceived();
        size_t msgSize();
        
    private:
        vector<vector<string> > msgList_;
        // int msgCnt_;
};


#endif
