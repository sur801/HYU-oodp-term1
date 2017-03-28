all : addr_main

addr_main : csv.cpp addr_main.cpp sms.cpp
	g++ -std=c++11 -o address csv.cpp sms.cpp call.cpp person.cpp addr_main.cpp
