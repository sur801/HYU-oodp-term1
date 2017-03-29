/*
 *  This file is csv.h
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-27
 */

#ifndef __CSV_H__
#define __CSV_H__

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "person.h"

using namespace std;

class CsvRead {
    public:    	
        vector<string> loadData(istream& is);

    private:
        vector<string> newData_;
};

class CsvWrite {
    public:
        static void saveData(vector<Person> data);

    private:
};


#endif
