/*
In a logging framework for a distributed system, you want to ensure that there is a single point
of access for logging messages across multiple services. This helps in maintaining a centralized log
repository and avoids duplicated log entries.*/
/*

#include <iostream>
using namespace std;
class PrinterSpooler {
private:
	PrinterSpooler() {}
	static PrinterSpooler* instance; 
public:
	static PrinterSpooler* getInstance() 
	{ // Method to get the single instance of the class
			if (instance == nullptr) {
				instance = new PrinterSpooler();
			}
		return instance;
	}
	void printJobStarted() {
		cout << "Print job started!" << endl;
	}
	void printJobEnded() {
		cout << "Print job ended!" << endl;
	}
};
PrinterSpooler* PrinterSpooler::instance = nullptr; // Initialize the static member

int main() {
	PrinterSpooler* spooler = PrinterSpooler::getInstance(); // Get the single instance of PrinterSpooler
		spooler->printJobStarted();
	spooler->printJobEnded();

	PrinterSpooler* spooler2 = PrinterSpooler::getInstance();		//Now if we try to make new instance 
																	//Our Singelton Pattern would'nt allow this else it 
																	//re-use the previous instance if you call PrintJobStart or any function.
	spooler2->printJobStarted();
	spooler2->printJobEnded();

	return 0;
}*/