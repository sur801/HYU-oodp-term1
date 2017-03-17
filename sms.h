/*
 *  This file is header of sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-17
 */

#ifndef __SMS_H__
#define __SMS_H__

#include <iostream>

// identify status of SMS
typedef enum Status {
    SENT,
    RECEIVED
} Status;

typedef struct messageData {
    int time;
    string number;
    string message;
    Status status;
} msgData;

class Sms {
    public:
        void loadData();
        void displayNumbers();

    private:
        vector<msgData> msgList_;
};


#endif
