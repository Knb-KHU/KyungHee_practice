#include<iostream>
int main() {
	int x;
	std::cin >> x;
	if (!(x % 2))
		std::cout << x << "�� ¦��" << std::endl;
	else
		std::cout << x << "�� Ȧ��" << std::endl;
	//x%2�� ���� ���� !�� false(=0)�� ����� ���̴�.
	//���: 2�Է� ��,
	/*2
	2�� ¦��
	*/
	//3�Է� ��,
	/*3
	3�� Ȧ��
	*/
	std::cout<< int((!(x == 2)) == (x != 2))<<((x==0)==(!x))<<std::endl;
	//(!(x == 2))�� (x != 2),((x==0)��(!x))�� if�� ���ǹ����� ���� ��, ���� ���� ǥ���̴�.
	//���:11
	x = 0;
	if (1 < x < 10) {
		std::cout << "error" << std::endl;
	 }
	//���ʺ��� ����ϴ� �Լ� Ư�� �� 1<x�� ��� ��  false�� ������ 
	// 0<10�� ����� true�� ������ ������ ����� ������.
	//���� �̷� ���� and�� &&�� ���ִ� ���� ����.
	//���:error
	switch (x)
	{
	case 1:
		std::cout << "1�̴�!";
	case 0:
		std::cout << "0�̴�!";
	case 2:
		std::cout << "2��!"<<std::endl;
		break;
	case 4:
		std::cout << "4��!";

	}
	//switch case ������ break�� ���������������� ��ӵȴ�.
	//���:0�̴�!2��!

}