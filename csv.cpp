/*
 *  This file is csv.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-27
 */

#include "csv.h"

using namespace std;

vector<string> CsvRead::loadData(istream& is) {

    vector<string> newData;
    string line, cell;
    getline(is, line);

    stringstream lineStream(line);

    newData.clear();

    while (getline(lineStream, cell, ',')) {

        newData.push_back(cell);
    }

    if (!lineStream && cell.empty()) {

        newData.push_back("");
    }

    return newData;
}
