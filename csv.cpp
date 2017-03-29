/*
 *  This file is csv.cpp
 *
 *  @author Jeonghoon Lee
 *  @since  2017-03-27
 */

#include "csv.h"

using namespace std;

vector<string> CsvRead::loadData(istream& is) {

    string line, cell;
    getline(is, line);

    stringstream lineStream(line);

    newData_.clear();

    while (getline(lineStream, cell, ',')) {

        newData_.push_back(cell);
    }

    if (!lineStream && cell.empty()) {

        newData_.push_back("");
    }

    return newData_;
}

void CsvWrite::saveData(vector<Person> data) {
    ofstream dataFile("person.csv");

    auto it = data.begin();
    while (it != data.end()) {
        dataFile << it->getName() << "," << it->getNumber() << "," << it->getGroup();
        if (++it != data.end()) {
            dataFile << endl;
        }
    }

    dataFile.close();
}