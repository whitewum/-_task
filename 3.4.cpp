#include<cstdio>
#include<iostream>
using std::cin;
using std::cout;using std::endl;
using std::string;

int main()
{
	string p1, p2;
	cin >> p1 >> p2;
	if ( p1 > p2 ){
		cout << p1 << endl;
	}
	else if ( p1 < p2 ){
		cout << p2 << endl;
	}
	else{
		cout << "String_A equal to String_B" << endl;
	}
	return 0;
}