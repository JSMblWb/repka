#include <iostream>
using namespace std;

int per(int a, int b, int c, int d) {
    int res2;
    res2 = a + b + c + d;
    return res2;
}

int plos(int a, int b, int h) {
    int res1;
    res1 = (a + b) * h / 2;
    return res1;
}

int dlina(int a, int b, int h) {
    int res3;
    res3 = (a + b) / 2;
    return res3;
}
//13

bool trap(int a, int b, int c, int d, int h) {
    if (a <= 0,  b <= 0,  c <= 0 || d <= 0) {
        return false;
    }
    if (h > c || h > d){
        return false;
    }
    return (a + b + c > d) && (a + b + d > c) && (a + c + d > b) && (b + c + d > a);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, h, c, d;
    cout << "длина основания - a, b; высота - h; боковая сторона - c, d: ";
    cin >> a >> b >> h >> c >> d;
    if (!trap(a, b, c, d, h)) {
        cout << "Введенные значения не могут образовать трапецию.";
        return 1; 
    }
    cout << "Периметр: " << per(a, b, c, d) << endl;
    cout << "Площадь: " << plos(a, b, h) << endl;
    cout << "Длина: " << dlina(a, b, h) << endl;
    return 0;
}

