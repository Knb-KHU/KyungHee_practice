#include<iostream>
int main() {
	for (int a = 7; a <= 20; a += 2) {
		if (a != 19) {
			std::cout << a << ",";
			continue;
		}
		std::cout << a << "," << a + 2 << std::endl;
	}
	//for(�ʱ⹮;���ǹ�;������)
	//continue; �� ȸ�� ���� �� ���� ȸ���� �Ѿ.
	//���:7,9,11,13,15,17,19,21
	
	for (int a = 7; a <= 21; a += 2) {
		std::cout << a;
		if (a != 21) {
			std::cout << ",";
		}
	}
	//�ٸ� ������ε� ǥ�� �����ϴ�.
	//���:7,9,11,13,15,17,19,21

}