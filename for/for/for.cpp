#include<iostream>
int main() {
	for (int a = 7; a <= 20; a += 2) {
		if (a != 19) {
			std::cout << a << ",";
			continue;
		}
		std::cout << a << "," << a + 2 << std::endl;
	}
	//for(초기문;조건문;증감문)
	//continue; 그 회차 종료 후 다음 회차로 넘어감.
	//결과:7,9,11,13,15,17,19,21
	
	for (int a = 7; a <= 21; a += 2) {
		std::cout << a;
		if (a != 21) {
			std::cout << ",";
		}
	}
	//다른 방식으로도 표현 가능하다.
	//결과:7,9,11,13,15,17,19,21

}