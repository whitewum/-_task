#include<cstdio>
#include<iostream>
#include<cstdlib>
using std::cin;
using std::cout;using std::endl;

void change(int *p1, int *p2){
	*p1 += *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
}  


int main(int argc, char **argv)
{
	int a, b;
	cout << "Please input two number:";
	cin  >> a >> b;
	change(&a, &b);
	cout << "Change result is:" << a << " " << b << endl;
	return EXIT_SUCCESS; 
}
