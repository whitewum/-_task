#include<cstdio>
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Screen{
	public:
		typedef string::size_type pos;
		//构造函数
		Screen() = default;
		Screen(pos wd, pos ht, char c): height(ht), width(wd), 
		contents(ht * wd, c) {}
		//成员函数
		char get() const
			{ return contents[cursor]; }
		inline char get(pos ht, pos wd) const;
		Screen &move(pos r, pos c);
		Screen &set(char);
		Screen &set(pos, pos, char);
		Screen &display(std::ostream &os)
			{ do_display(os); return *this; }
		const Screen &display(std::ostream &os) const
			{ do_display(os); return *this; }
	private:
		pos cursor = 0;
		pos height = 0, width = 0;
		string contents;
		void do_display(std::ostream &os) const
			{os << contents;}
};

inline
Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

int main(int argc, char **argv)
{
	//Screen myScreen(5,5,'#');
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
	return 0;
}
