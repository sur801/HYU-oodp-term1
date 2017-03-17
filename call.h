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
};

class Call {
	public:
		//getter
		int getTime() {
			return time_;
		}

		int getNumber() {
			return number_;
		} 

	private:
		int time_;
		//phone number
		int number_;
        Status status_;
};

#endif
