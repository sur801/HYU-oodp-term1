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
};

class Sms {
    public:
        // getter	
        int getTime() {
            return time_;
        }

        int getNumber() {
            return number_;
        }

        string getMessage() {
            return message_;
        }

    private:
        int time_;
        // phone number
        int number_;
        string message_;
        Status status_;
};


#endif