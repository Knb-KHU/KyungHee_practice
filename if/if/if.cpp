#include<iostream>
int main() {
	int x;
	std::cin >> x;
	if (!(x % 2))
		std::cout << x << "는 짝수" << std::endl;
	else
		std::cout << x << "는 홀수" << std::endl;
	//x%2로 나눈 값이 !즉 false(=0)일 경우라는 뜻이다.
	//결과: 2입력 시,
	/*2
	2는 짝수
	*/
	//3입력 시,
	/*3
	3는 홀수
	*/
	std::cout<< int((!(x == 2)) == (x != 2))<<((x==0)==(!x))<<std::endl;
	//(!(x == 2))와 (x != 2),((x==0)와(!x))는 if의 조건문으로 쓰일 시, 서로 같은 표현이다.
	//결과:11
	x = 0;
	if (1 < x < 10) {
		std::cout << "error" << std::endl;
	 }
	//왼쪽부터 계산하는 함수 특성 상 1<x를 계산 후  false를 내놓고 
	// 0<10을 계산해 true를 내놓기 때문에 생기는 오류다.
	//따라서 이런 계산시 and나 &&를 써주는 것이 좋다.
	//결과:error
	switch (x)
	{
	case 1:
		std::cout << "1이다!";
	case 0:
		std::cout << "0이다!";
	case 2:
		std::cout << "2다!"<<std::endl;
		break;
	case 4:
		std::cout << "4다!";

	}
	//switch case 구문은 break를 설정해주지않으면 계속된다.
	//결과:0이다!2다!

}