/*
 *  This file is csv.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-18
 */

#include "csv.h"

using namespace std;

void Csv::loadData(istream& is) {

    vector<string> newMsg;
    string line, cell;
    getline(is, line);

    stringstream lineStream(line);

    newMsg.clear();

    while (getline(lineStream, cell, ',')) {

        newMsg.push_back(cell);
    }

    if (!lineStream && cell.empty()) {

        newMsg.push_back("");
    }
}
