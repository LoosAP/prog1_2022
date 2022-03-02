#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

double absolute (double n){
    cout<<"Abszolútérték előtt: " << n <<endl;
    return abs(n);

}

int main(){
/*  
    std::vector<int> v {1,2,3,4,5,6,7,8,9,10};

    std::transform(v.begin(), v.end(), v.begin(), [](int n) {return n +(n*2);});

    std::for_each(v.begin(), v.end(), [](const int&x){cout<<x<<endl;});
*/
    cout<< abs(0.025)<<endl;
    cout << absolute(0.025) << endl;
}