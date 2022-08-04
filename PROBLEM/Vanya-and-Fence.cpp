#include<iostream>
using namespace std;
int main(){

    int n, h, nn, a;
    cin >> n >> h;

    for(int i=0; i < n; i++){
        cin >> nn;
        if(nn <= h){
            a += 1;
        }
        else {
            a += 2;
        }
    }

    cout << a << endl;

return 0;

}
