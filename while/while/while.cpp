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
	//a�� ������ ���� while �ݺ������� *�� �����ϴ� ���α׷�
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
	//1���� 1�� c!�� ���� ���� c������ ��� 1/c!�� 0.0001���� �۾����� ������ ���ϴ� ���̴�.
	//���:2.58683

}