#include <iostream>
template <typename T, int num = 2>
T add_num(T t) {
	return t + num;
}
int main() {
	int x = 3;
	std::cout << "x : " << add_num(x) << std::endl;
}/*int num을 2로 바꿔주면 2+3이 되어 5를 출력한다.*/