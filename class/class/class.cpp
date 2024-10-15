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
	// GetX, Max �Լ� �ۼ�
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
	//���:30,7
	/*������ �����ε��� �̿��Ͽ� operator�Լ��� �̿��� +�����ڸ� operator+�����ڷ� ��ü�Ͽ�
Vector2D ������ Vector2D ������ ���ϸ� �ι�° ������ ��� ����� �ҷ��� �� ������ x��
�� ���� ���� Vector2D�� ������ x������, ������ y���� ���� ���� Vector2D�� ������ y����
�� ������ Vector2D ������ �����ϵ��� �Ͽ���.
*/
	const A a1(10);
	A a2(5), a3(3);
	std::cout << a1.GetX() << std::endl; // 10 ���
	std::cout << a2.GetX() << std::endl; // 5 ���
	A* p = a2.Max(&a3); // Max: a2.x�� a3.x�� ���Ͽ�
	// ū ���� ������ �ν��Ͻ� �ּ� ��ȯ
	std::cout << p->GetX() << std::endl; // 5���

}