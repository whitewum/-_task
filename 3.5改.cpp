#include<cstdio>
#include<iostream>
using std::cin;
using std::cout;using std::endl;
using std::string;

int main()
{
	string p1, res = "";
	while ( cin >> p1 ){
		res += p1 + " ";
	}
	cout << res << endl;
	return 0;
}