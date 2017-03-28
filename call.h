/*
 * this file is header of call.cpp
 * @author	Yurim Seo
 * @since	2017-03-17
 *
 */
	

#ifndef __CALL_H__
#define __CALL_H__


#include<iostream>

//identify status of call
typedef enum Status {
	SENT,
	RECEIVED,
	MISSED
}Status ;

/*
typedef struct callData{
    int time;
    string number;
    Status status;
}callData;
*/

class Call {
    public:
        // display data when the phonenumber is registered.
        void displayAll();
        void displaySent();
        void displayReceived();
        void displayMissed();
    

	private:
        vector<vector<string> > callList_;
    
};

#endif
