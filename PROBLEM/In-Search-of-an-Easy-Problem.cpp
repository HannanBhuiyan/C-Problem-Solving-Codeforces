#include<iostream>
using namespace std;


int main(){


    int n, flag = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        int nn;
        cin >> nn;

        if(nn == 1){
           flag = 1;
        }

    }

    if(flag == 1){
        cout << "HARD" << endl;
    }else{
        cout << "EASY" << endl;
    }




return 0;

}


