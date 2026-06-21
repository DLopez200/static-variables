#include <iostream>

using namespace std;

void f(){
    static int x = 0;
    x++;
    cout << x <<endl;
}

int count(int x){
    static int time_called = 0;
    time_called++;
    cout << "count has been called " << time_called << " times "<<endl;
    if(x == 0){
        return 0;

    }
    return 1+ count(x - 1);
}

int main(){
    cout << count(10) << endl;
    return 0;
}