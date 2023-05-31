#include <iostream>
using namespace std;

void calcTime(int* seconds) {
	int* days = (int*)malloc(sizeof(int));
	int* hours = (int*)malloc(sizeof(int));
	int* minutes = (int*)malloc(sizeof(int));
	int* secs = (int*)malloc(sizeof(int));
	*days = 0;
	*hours = 0;
	*minutes = 0;
	*secs = 0;

	if (int(*seconds)>0) {
		*days = int( *seconds / (24*60*60));
		*seconds -= *days * (24 * 60 * 60);
	}
	if (int(*seconds) > 0) {
		*hours = int(*seconds / (60 * 60));
		*seconds -= *hours * (60 * 60);
	}
	if (int(*seconds) > 0) {
		*minutes = int(*seconds / 60);
		*seconds -= *minutes * 60;
		cout << *seconds << endl;
	}
	if (int(*seconds) > 0) {
		*secs = *seconds;
	}
	if (int(*seconds) < 0) {
		cout << "There was a problem while calculating time" << endl;
		return;
	}

	cout << *days << " days" << endl;
	cout << *hours << " hours" << endl;
	cout << *minutes << " minutes" << endl;
	cout << *secs << " seconds" << endl;

	free(days);
	free(hours);
	free(minutes);
	free(secs);

}

int main() {

	int* sc = (int*) malloc(sizeof(int));
	cout << "Enter the amount of seconds you want to calculate the time : ";
	cin >> *sc;
	cin.ignore();

	calcTime(sc);
	
	free(sc);

	cin;
	cin.ignore();

	return 0;
}