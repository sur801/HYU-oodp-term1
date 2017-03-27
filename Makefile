all : addr_main

addr_main : sms.cpp addr_main.cpp sms.h
	g++ -std=c++11 -o sms sms.cpp addr_main.cpp