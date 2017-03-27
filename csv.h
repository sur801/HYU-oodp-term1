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
#include <sstream>
#include <vector>

using namespace std;

class CsvRead {
    public:
        static vector<string> loadData(istream& is);

    private:
        vector<string> msgList_;
};

class CsvWrite {
    public:
        static void saveData(ostream& os);

    private:
};


#endif
