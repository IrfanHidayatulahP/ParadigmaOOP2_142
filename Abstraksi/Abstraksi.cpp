#include <iostream>
using namespace std;

class abstraksiKlas {
private:
	string x, y;

public:
	//method untuk mengisi nilai
	//private member
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	//menampilkan nilai
	void display() {
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
	}
};

int main() {
	abstraksiKlas ak;
	ak.setXY("Yogyakarta", "Kampus");
	ak.display();

	return 0;
}
