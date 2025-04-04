#include <cmath>
#include <iostream>
using namespace std;

float perimetr(float a, float b) {
	return (a + b) * 2;
}

float ploshad(float a, float b) {
	return a * b;
}

float diagonal(float a, float b) {
	return sqrt(a * a + b * b);
}

int main() {
	float dlina, visota;
	cout << "dlina i visota: ";
	cin >> dlina >> visota;
	cout << "\n";

	cout << "perimetr: " << perimetr(dlina, visota) << "; ploshad: " << ploshad(dlina, visota) << "; diagonal: " << diagonal(dlina, visota) << endl;
	return 0;
}
