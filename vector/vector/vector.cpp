#include <iostream>
#include <vector>
void print(std::vector<double> v) {
	for (int i = 0; i < v.size(); ++i)
		std::cout << v[i] << ", ";
	std::cout << std::endl;
}
void print(std::vector <std::vector<double>> v) {
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j)
			std::cout << v[i][j] << ", ";
		std::cout << ": " << v[i].size();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
int main() {
	std::vector<double> v0 = { 1 }, v1(3), v2(3, 2);
	print(v0);
	print(v1);
	print(v2);
	std::vector <std::vector<double>> v3(2, std::vector<double>(3, 1));
	print(v3);
	std::vector <std::vector<double>> v4(2, std::vector<double>(3, 1));
	print(v4);
}