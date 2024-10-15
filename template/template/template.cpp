#include <vector>
#include <iostream>
#include <algorithm>
struct Data {
	int x;
	Data(int x = 0) : x(x) {}
	~Data() {
		std::cout << "Destr.: " << x << std::endl;
	}
};
std::ostream& operator << (std::ostream& os, const Data& d) {
	os << d.x;
	return os;
}
template <class T>
class A {
	std::shared_ptr<T> p;
public:
	A(int x = 0) : p(new T(x)) {}
	T& get() const {
		return *p;
	}
	A copy() {
		A a(p->x);
		return a;
	}
};
int main() {
	A<Data> a1, a2(10), a3(20), a4(30);
	std::cout << a1.get() << std::endl;
	std::cout << a2.get() << std::endl;
	std::cout << a3.get() << std::endl;
	std::cout << a4.get() << std::endl;
	a1 = a2.copy();
	a3 = a4;
	std::cout << a1.get() << std::endl;
	std::cout << a2.get() << std::endl;
	std::cout << a3.get() << std::endl;
	std::cout << a4.get() << std::endl;
}/*Dl 코드는 템플릿을 이용해서 클래스 A를 정의핚 뒤 템플릿을 통해 받은 자료형의 객체를 가리키
는 std::shared_ptr 멤버를 통해 이를 가르키는 포인터를 맊들고 이를 통해 클래스 A에서 가지는
객체를 반환하는 함수 get()과 가진 함수를 복사해서 핛당해주는 함수 copy()를 정의핚다.
따라서 a1은 정의되지 않았으므로 디폴트인 0을 a2는 10을 a3은 20을 a4는 30을 객체로 가진다.
이때 ~Data를 통해 Data형의 변수가 삭제될 때 “Destr.:”와 Data변수의 내용이 출력되도록 하였으
므로 a1이 a2의 복사본으로 덮어씌워질 때 기존의 a1의 Data형 변수가 삭제되므로 그 내용인 0
과 함께 출력되고, 마찬가지로 a3이 a4에 의해 덮어씌워질 때도 같은 현상이 일어난다.
마지막으로 함수가 끝날 때에도 copy()함수를 이용해서 a2의 데이터를 가리키게 된 a1을 제외핚
변수들의 데이터가 삭제되면서 위와 같은 형식의 문장이 출력된 것이다*/