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
#include <unordered_map>
#include "person.h"

using namespace std;

// identify status of SMS
/*
enum Status {
    SENT,
    RECEIVED
};
*/

class Sms {
    public:
        Sms() {};
        void loadData(vector<string> msg);
        void displayAll(unordered_map<string, Person > map);
        void displaySent(unordered_map<string, Person > map);
        void displayReceived(unordered_map<string, Person > map);
        size_t msgSize();
        
    private:
        vector<vector<string> > msgList_;
};


#endif
