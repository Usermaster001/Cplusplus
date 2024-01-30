#include <iostream>

int func_recur(int a, int b) {
	//std::cout << a << " " << b << "\n";
	if (a % b == 0) {
		return b;
	}
	int tmp = a / b;
	a = a - b * tmp;
	if (a < b) {
		int tmp2 = a;
		a = b;
		b = tmp2;
	}
	//std::cout << a << " " << b << "\n\n";
	return func_recur(a, b);
}

void print(int a, int b, int c) {
	int tmp2 = 0;
	for (auto i{ 0 }; i < b; i++) {
		if (tmp2 == c) {
			std::cout << "\n";
			tmp2 = 0;
		}
		int tmp = 0;
		for (auto j{ 0 }; j < a; j++) {
			if (tmp == c) {
				std::cout << "  ";
				tmp = 0;
			}
			std::cout << '*';
			tmp++;
		}
		std::cout << '\n';
		tmp2++;
	}
}

int main()
{
	int x = 40;
	int y = 10;
	if(x > y){print(x,y, func_recur(x, y));}
	else{std::cout << "Error";}
}
