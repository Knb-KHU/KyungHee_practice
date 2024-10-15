#include<iostream>
int main() {
	int a = 1;
	while (a < 7) {
		int b = 0;
		while (b < a) {
			std::cout << "*";
			b++;
		}
		std::cout << std::endl;
		a++;
	}
	while (a > 0) {
		int b = 0;
		while (b < a) {
			std::cout << "*";
			b++;
		}
		std::cout << std::endl;
		a--;
	}
	//a의 증감을 통한 while 반복문으로 *을 나열하는 프로그램
	/*
	*
**
***
****
*****
******
*******
******
*****
****
***
**
*
*/
	int c = 1;
	double d=1, e=0;
	while (d >= 0.0001) {
		int f = 1;
		while (f < c) {
			d = d / f;
			f++;
		}
		e += d;
		c++;
	}
	std::cout << e << std::endl;
	//1부터 1을 c!로 나눈 수를 c항으로 삼아 1/c!가 0.0001보다 작아지기 전까지 더하는 식이다.
	//결과:2.58683

}