#include <iostream>
#include <cmath>
using namespace std;

double sqroot (int x){
  double r = 10.0;
  double y,z;
  do {
  	y = (r + (x / r)) / 2;
  	z = (y + (x / y)) / 2;
  	r = z;
  } while (z != y);
return r;
}

int main (){
	int num;
	cout << "Please enter a number to calculate the proximate square root: " << endl;
	cin >> num;
	cout<< endl;
	cout << "The square root of that number is approximately: " << endl;
	cout << sqroot (num) << endl;
return 0;
}
