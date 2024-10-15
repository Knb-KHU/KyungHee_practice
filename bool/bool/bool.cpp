#include<iostream>
int main() {
	bool b1 = 0, b2 = true, b3 = false, b4 = 3 > 3, b5 = 3 >= 3;
	std::cout << b1 << b2 << b3 << b4 << b5<<std::endl;
	//bool은 true에1을 false에 0을 할당한다.
	//결과:01001
	if (0) {
		std::cout << 2;
	}
	//if false라는 뜻,기본 설정은 true이므로,
	//결과:
}