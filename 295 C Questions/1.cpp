#include <iostream>

using namespace std;

/*void Foo() {
	cout << "Hello World!" << endl;
}*/
int a=9;
int main() {
	int a=100,*b;
	float *p;
	//p=200;
	b=&a;
	p=(float*)&a;
	//cout << "Hello! This is a console application." << endl;
	//cin >> a ;
		cout << p <<endl<< a<<endl<<(~::a)+1<<endl<<&::a<<endl<<sizeof(p);
	
	return 0;
}
