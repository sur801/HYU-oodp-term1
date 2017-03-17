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
enum Status {
	SENT,
	RECEIVED,
	MISSED
};

class Call {
	public:
		//getter
		int getTime() {
			return time;
		}

		int getNumber() {
			return number;
		} 

	private:
		int time;
		//phone number
		int number;
}
