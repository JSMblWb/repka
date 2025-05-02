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

float proverka(float a) {
	while (a <= 0) {
		cout << "nekorektnoye chislo: ";
		cin >> a;
}
	return a;
}

int main() {
	float dlina, visota;
	cout << "dlina: ";
	cin >> dlina;
	dlina = proverka(dlina);
	cout << "visota: ";
	cin >> visota;
	visota = proverka(visota);

	cout << "perimetr: " << perimetr(dlina, visota) << "; ploshad: " << ploshad(dlina, visota) << "; diagonal: " << diagonal(dlina, visota) << endl;
	return 0;
}
