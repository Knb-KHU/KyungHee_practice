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
	/*��ó�� ������ �̿��� cmath �Լ��� ���� ���� cos,
	atan2,acos, pow, exp ���� �ҷ��� ����ϴ� �ڵ��̴�.
	exp():e����*/
	/*���:0.5
	-135
	0.5
	1*/
	std::cout << gcd(48, 30) << std::endl;
	/*gcd�Լ��� m�� �ڸ��� 48 n���ڸ��� 30�� �����Ͽ� 
	n�� 0�� �ƴϹǷ� gcd(30, 18),(18,12),gcd(12,6),gcd(6,0)�� ����,
	n�� ���� 0�� �� ������ ��� ��, �̶��� m�� ���� 6�� ��ȯ*/
	//���:6

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
	//���� �������� ���� ���� �ִ��� �Ǵ��� �� ���ϴ� ����

}


