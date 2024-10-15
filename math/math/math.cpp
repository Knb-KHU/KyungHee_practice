#include <iostream>
#include <cmath>
int gcd(int m, int n) {
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}

int main() {
	const double pi = acos(-1.);
	const double e = exp(1.);
	std::cout << cos(60. * pi / 180.) << std::endl;
	std::cout << atan2(-1., -1.) * 180. / pi << std::endl;
	std::cout << pow(2., -1.) << std::endl;
	std::cout << log(e) << std::endl;
	/*전처리 구문을 이용해 cmath 함수를 토해 정의 cos,
	atan2,acos, pow, exp 등을 불러와 사용하는 코드이다.
	exp():e제곱*/
	/*결과:0.5
	-135
	0.5
	1*/
	std::cout << gcd(48, 30) << std::endl;
	/*gcd함수에 m의 자리에 48 n의자리에 30을 대입하여 
	n이 0이 아니므로 gcd(30, 18),(18,12),gcd(12,6),gcd(6,0)를 거쳐,
	n의 값이 0이 될 때까지 계산 후, 이때의 m의 값인 6을 반환*/
	//결과:6

	double a, b, c;
	std::cin >> a >> b >> c;
	if ((a == 0) and (b == 0)) {
		std::cout << "not a valid equation";
			return 0;
	}
	else if ((a == 0) and (b != 0)) {
		std::cout << -c / b;
		return 0;
	}
	else if (pow(b, 2) - 4 * a * c < 0) {
		std::cout << "not a real solution";
			return 0;
	}
	else if (pow(b, 2) - 4 * a * c == 0) {
		std::cout << (-b + pow((pow(b, 2) - 4 * a * c), 0.5)) / (2 * a);
		return 0;
	}
	else {
		std::cout << (-b + pow((pow(b, 2) - 4 * a * c), 0.5)) / (2 * a) <<
			"," <<
			(-b - pow((pow(b, 2) - 4 * a * c), 0.5)) / (2 * a);
		return 0;
	}
	//근의 방정식을 통해 근이 있는지 판단한 후 구하는 수식

}


