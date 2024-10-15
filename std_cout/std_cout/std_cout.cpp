#include<iostream>
#define PI 3;

int main(void) {//주함수 선언
	std::cout << "C++" << "\n";
	//전처리구문#include<iostream>에서 정의된 함수 std::cout함수를 이용해 <<기호 오른쪽에 쓰여진 내용을 출력
	// \n 줄 바꿈
	// 
	//return 0;는 기본적으로 포함됨.
	// 결과:C++
	//  
	std::cout << 4 / 2 << std::endl;
	std::cout << 4 / 8* 2 << std::endl;
	std::cout << 4. / 8 * 2 << std::endl;
	std::cout << 7'890 << std::endl;
	//왼쪽부터 순서대로 계산
	//정수는 정수형으로 값을 계산 후 반환하여 계산을 진행하므로,
	//4/8=0, 0*2=0
	//실수형과 정수형의 계산은 실수형으로 계산하므로,
	//4./8=0.5 0.5*2=1
	//'는 숫자 3자리마다 구분을 해주기 위한 표현으로 출력 시 무시된다.
	//결과:2
	/*0
	1
	7890
	*/
	std::cout << 5 * PI
		//#define PI 3;으로 인해 PI가 3;으로 변환되므로 오류가 일어나지 않는다.
		//결과:15
		std::cout << "\nC:\\std_cout\\cpp" << std::endl;
	//특별기호\를 문장 기호 \와 구분하기 위해 \\를 문장기호 \로 변환시켜 나타낸다.
	//결과:C:\std_cout\cpp
	char c, c2;
	c = 'a';
	c2 = c + 1;
	std::cout << c << c2 <<int(c) <<std::endl;
	//char는 아스키 기호에 따라 문자를 배열된 숫자에 따라 기억하므로,
	//'a'의 아스키 기호인 97에서 1을 더한 98에 할당된 문자인 'b'가 c2에 저장된다.
	//결과:ab97

	std::cout << static_cast<int>(0.6) << std::endl;
	//static_cast<int>에 의해서 가로 안의 숫자가 정수로 변환된다.
	//버림에 따라서 0이된다.
	//결과:0

	unsigned char c1 = 255, c3;
	c3 = c1 + 1;
	std::cout << static_cast<int>(c1) << static_cast<int>(c3) << std::endl;
	//unsigned char는 255까지의 값만 할당이 가능하므로, 1을 더하는 순간 오버플로우가 일어나
	//0이 할당된다.
	//결과:2550

	int d = 1;
	std::cout << d;
	std::cout << d++ << ++d << std::endl;
	//std::cout는 가장 바깥쪽부터 받아드린 뒤 가장 나중에 받아드린 정보부터 출력한다.
	//이에따라 ++d에 따라 d=2
	//d++에 따라 d=3이지만 마지막에 입력된 d의 출력에는 postfix이므로 적용하지 않아,
	//결과:23

	std::cout << ++d<< d++ << std::endl;
	//비슷한 방식으로 d++로 d=4지만 postfix인 d에 적용하지 않음
	//++d이므로 d=5,
	//결과:53
}