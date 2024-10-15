#include <iostream>
class Vector2D {
public:
	int x, y;
	Vector2D(int x, int y) : x(x), y(y) {}
};
std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
	os << vec.x << "," << vec.y;
	return os;
}
Vector2D operator+(const Vector2D& a, const Vector2D& b) {
	Vector2D result(b.x + a.x, b.y + a.y);
	return result;
}
class A {
	int x;
public:
	A(int x) : x(x) {}
	// GetX, Max 함수 작성
	int GetX() const {
		return x;
	}
	A* Max(A* b) {
		return x > b->x ? this : b;
	}
};

int main() {
	Vector2D v1(10, 2), v2(20, 5);
	std::cout << v1 + v2 << std::endl;
	//결과:30,7
	/*연산자 오버로딩을 이용하여 operator함수를 이용해 +연산자를 operator+연산자로 대체하여
Vector2D 변수와 Vector2D 변수를 더하면 두번째 변수를 상수 취급해 불러온 후 각각의 x값
을 더핚 값을 Vector2D형 변수의 x값으로, 각각의 y값을 더핚 값을 Vector2D형 변수의 y값으
로 가지는 Vector2D 변수를 리턴하도록 하였다.
*/
	const A a1(10);
	A a2(5), a3(3);
	std::cout << a1.GetX() << std::endl; // 10 출력
	std::cout << a2.GetX() << std::endl; // 5 출력
	A* p = a2.Max(&a3); // Max: a2.x와 a3.x를 비교하여
	// 큰 값을 가지는 인스턴스 주소 반환
	std::cout << p->GetX() << std::endl; // 5출력

}