#include <iostream> 
#include <iomanip> 
#include <cstdlib> 

using namespace std;

bool func(double* arr, int length) {
	for (int c = 0; c < length - 1; ++c) {
		if (arr[c] <= arr[c + 1]) {
			return false;
		}
	}
	return true;
}

bool func(char* str) {
	for (int c = 0; c < strlen(str) - 1; ++c) {
		if (str[c] <= str[c + 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	double d1[] = { 4, 3, 2, 1 };
	double d2[] = { 4, 2, 3, 1 };
	char c1[] = "dcba";
	char c2[] = "dbca";
	cout << boolalpha;
	cout << func(d1, 4) << endl;
	cout << func(d2, 4) << endl;
	cout << func(c1) << endl;
	cout << func(c2) << endl;

}
