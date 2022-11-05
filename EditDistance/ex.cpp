#include <bits/stdc++.h>
using namespace std;


int func(int a, int b) {
    int res = 0;
    vector <int> v;
    for (int i = 0; i < (a+b); i++)
        v.push_back(i);
    for(int i = 0; i < (a+b); i++){
        if(v[i] + a > b && v[i] + b > a)
        res++;
    }
    return res;

}

int main(){
    int a = 2, b =2;
    cout<<func(a, b)<<endl;


    return 0;
}