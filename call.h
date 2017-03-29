/*
 * This file is header of call.cpp
 * 
 * @author	Yurim Seo
 * @since	2017-03-17
 */
	

#ifndef __CALL_H__
#define __CALL_H__


#include <iostream>
#include <vector>
#include <unordered_map>
#include "person.h"

using namespace std;

//identify status of call
enum Status {
	SENT,
	RECEIVED,
	MISSED
};


class Call {
    public:
        Call() {};
        void loadData(vector<string> call);
        // display data when the phonenumber is registered.
        void displayAll(unordered_map<string, Person > map);
        void displaySent(unordered_map<string, Person > map);
        void displayReceived(unordered_map<string, Person > map);
        void displayMissed(unordered_map<string, Person > map);
        size_t callSize();
    

	private:
        vector<vector<string> > callList_;
    
};

#endif
