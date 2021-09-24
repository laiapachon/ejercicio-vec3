#include<iostream>
using namespace std;


class Vec3 {
public:
	int x = 3;
	int y = 0;
	int  z = 0;

	Vec3() {

	}

	Vec3(int value) {
		x = value;
		y = value;
		z = value;
	}
	Vec3(char name, int value) {
		switch (name){
		case 'x': 
			x = value;
			break;

		case 'y':
			y = value;
			break;

		case 'z':
			z = value;
			break;
		}
	}

	Vec3(int _x, int _y, int _z) {
		x = _x;
		y = _y;
		z = _z;
	}

	bool isZero() {
		if (x == 0 && y == 0 && z == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	void Zero() {
		x = 0;
		y = 0;
		z = 0;

	}

	void DistanceTo() {

	}

	void Normalize() {

	}

};



void main() {
	Vec3 vector;
	

}