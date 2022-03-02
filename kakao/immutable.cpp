#include <iostream>

constexpr int Fibonacci(int x){
    return (x<=1) ? x : Fibonacci(x-1) + Fibonacci(x-2);

}

using namespace std;
int main(){
    const int series = Fibonacci(10);
    std::cout << series << std::endl;
}