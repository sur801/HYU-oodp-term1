/*
 * this file is header of addressbook.h
 * @author	Yurim Seo
 * @since	2017-03-17
 *
 */



#ifndef __ADDRESSBOOK_H__
#define __ADDRESSBOOK_H__
#include<vector>

using namespace std;

typedef enum Group {
	FAMILY,
	FRIEND,
	COWORKER,
	ETC
};

typedef struct entry{
	string name;
	int number;
	Group group;
}Entry;


class Addressbook {


	public:

		Entry(string name, int number, int group) {
			this->entry_.name = name;
			this->entry_.number = number;
			
		};



		
	private:
		Entry entry_;
		vector<Entry>;
    
}

#endif
