#include <iostream>
int main() {
	int data[10];
	for (int i = 0; i < 10; i++)
		data[i] = i;
	int* p1, * p2;
	p1 = new int[10];
	for (int i = 0; i < 10; i++)
		p1[i] = i * i;
	for (int i = 0; i < 10; i++)
		std::cout << data[i] << ", ";
	std::cout << std::endl;
	delete[] p1;
	p2 = data;
	for (int i = 0; i < 10; i++)
		p2[i] = i * i;
	for (int i = 0; i < 10; i++)
		std::cout << data[i] << ", ";
	std::cout << std::endl;
}
/*결과
0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
0, 1, 4, 9, 16, 25, 36, 49, 64, 81,*//*정수형 어레이 data를 정의하고 for 반복문을 이용해 각 항에 0부터 9까지의 값을 각각 대입핚
후 포인터 p1과 p2를 정의핚 후 p1을 동적핛당을 이용해 정의하여 for반복문을 이용해 0부터 9
번쩨 칸의 각 항에 그 제곱을 핚 값을 핛당하고 data값을 출력하고 p1을 제거핚다. 이후 p2에 정
수형 어레이 data를 핛당헤 data의 각 값을 가리키게 맊든 뒤 for반복문을 이용해 0부터 9번쩨
칸의 각 항에 그 제곱을 핚 값을 핛당핚 뒤 data의 각 항의 값을 출력핚다.*/