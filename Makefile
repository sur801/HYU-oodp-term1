all : addr_main

addr_main : csv.cpp addr_main.cpp sms.h
	g++ -std=c++11 -o sms csv.cpp addr_main.cpp
