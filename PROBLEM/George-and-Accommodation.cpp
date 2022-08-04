#include<iostream>
using namespace std;


int main(){


    int n, c, p, ps;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c >> p;
        if(c < p-1){
            ps++;
        }

    }
    cout << ps << endl;


return 0;

}


