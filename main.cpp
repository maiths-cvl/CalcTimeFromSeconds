#include <iostream>
using namespace std;

void calcTime(int seconds) {
	int days = 0;
	int hours = 0;
	int minutes = 0;
	int secs = 0;

	if (int(seconds)>0) {
		days = int( seconds / (24*60*60));
		seconds -= days * (24 * 60 * 60);
	}
	if (int(seconds) > 0) {
		hours = int(seconds / (60 * 60));
		seconds -= hours * (60 * 60);
	}
	if (int(seconds) > 0) {
		minutes = int(seconds / 60);
		seconds -= minutes * 60;
	}
	if (int(seconds) > 0) {
		secs = seconds;
	}
	if (int(seconds) < 0) {
		cout << "There was a problem while calculating time" << endl;
		return;
	}

	cout << days << " days" << endl;
	cout << hours << " hours" << endl;
	cout << minutes << " minutes" << endl;
	cout << secs << " seconds" << endl;

}

int main() {

	int sc;
	cout << "Enter the amount of seconds you want to calculate the time : ";
	cin >> sc;
	cin.ignore();

	calcTime(sc);

	cin;
	cin.ignore();

	return 0;
}