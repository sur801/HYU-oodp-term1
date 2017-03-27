/*
 *  This file is csv.h
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-17
 */

#ifndef __CSV_H__
#define __CSV_H__

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
// identify status of SMS
typedef enum Status {
    SENT,
    RECEIVED
} Status;

class Csv {
    public:
        Sms();
        void loadData(istream& is);

    private:
        vector<string> msgList_;
};


#endif
