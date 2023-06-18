#include <iostream>

using namespace std;

struct complex{
	complex(int real, int imag) : real(real), imag(imag){}
	int real = 0, imag = 0;
	complex operator+(complex a){
		return complex(a.real + real, a.imag + imag);
	}
	complex operator-(complex a){
		return complex(real - a.real, imag - a.imag);
	}
	complex operator*(complex a){
		return complex(real * a.real - imag * a.imag, real * a.imag + imag * a.real);
	}
};

int main(){
	int t;
	cin >> t;
	while (t--){
		char op;
		cin >> op;
		int reala, imaga, realb, imagb;
		cin >> reala >> imaga >> realb >> imagb;
		complex a(reala, imaga), b(realb, imagb);
		complex res(0, 0);
		if (op == '-')
			res = a - b;
		if (op == '*')
			res = a * b;
		if (op == '+')
			res = a + b;
		cout << res.real << " " << res.imag << "\n";
	}
	return 0;
}
