/*
 *  This file is sms.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-18
 */

#include "sms.h"
#include <fstream>

using namespace std;

void Sms::loadData(vector<string>& msg) {
    msgList_.push_back(msg);
}
/*
string Sms::print() {
    return 
*/
void Sms::displayAll() {
    int index = 1;

    vector<msgData>::iterator it;
    for (it = msgList_.begin(); it != msgList_.end(); it++) {
        cout << index++ << "\t" << /*TODO: printData(it)*/ << endl;
    }

}

void Sms::displaySent() {
    int index = 1;

    vector<msgData>::iterator it;
    for (it = msgList_.begin(); it != msgList_.end(); it++) {
        if (it->


void Sms::displayReceived() {
    int index = 1;

    vector<msgData>::iterator it;
    for (it = msgList_.begin(); it != msgList_.end(); it++) {
        it->

/*
ostream& printData(vector<msgData>::iterator it) {
    int date;
    string number, message, status;

    it.pop_back();
    date = stoi(it.pop_back(), nullptr);
*/    
