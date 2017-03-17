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

typedef pair<string,pair<string,Group> > AddrList;



class Addressbook {


	public:
		Addressbook(string name, int number, int group) {
			this->entry_.name = name;
			this->entry_.number = number;
			
		}
        void displayData();
        void loadData();
        void saveData();
        void addData();
        void delData():
        void sortData();
        void searchData();
    
    
	private:
        vector<AddrList> addrBook;
    
    
}

#endif
