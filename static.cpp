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

    cout << "calling counts on " << x << endl; 

    //cout << "count has been called " << time_called << " times "<<endl;
    if(x == 1){
        return 1;

    }
    return count (x - 1) + count(x - 1);
}

int main(){
    cout << count(10) << endl;
    cout << count(10) << endl;
    return 0;
}