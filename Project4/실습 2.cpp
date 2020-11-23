#include <iostream>
#include <string>
template<typename T>
auto sum(T x) {
	return x;
}
template<typename T, typename...Args>
auto sum(T x, Args... args) {
return x + sum(args...);
}
int main() {
auto x = sum(42.5, 10, 11.1f);
std::cout << x;
getchar();
}/*마지막 하나의 인자만 남았을때를 고려해서 인자를 하나만 받는 SUM 함수를 정의해 준다.*/