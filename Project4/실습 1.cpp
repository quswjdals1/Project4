#include <iostream>
template <typename T, int num = 2>
T add_num(T t) {
	return t + num;
}
int main() {
	int x = 3;
	std::cout << "x : " << add_num(x) << std::endl;
}/*int num�� 2�� �ٲ��ָ� 2+3�� �Ǿ� 5�� ����Ѵ�.*/