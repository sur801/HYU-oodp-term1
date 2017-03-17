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
enum Status {
    SENT,
    RECEIVED
};

class Sms {
    public:
        // getter	
        int getTime() {
            return time;
        }

        int getNumber() {
            return number;
        }

        string getMessage() {
            return message;
        }

    private:
        int time;
        // phone number
        int number;
        string message;
};
