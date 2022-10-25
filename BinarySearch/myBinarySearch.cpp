#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
#define MAX 100
int numArray[MAX];

void initArray(){
    for (int i = 0; i < numArray.size(); i++){
        numArray[i] = i;
    }
}

bool condition(int num, int index) {
    return num == numArray[index];
}


bool binarySearch(int numToFind, int start, int end) {
    int mid = (start + end) /2;
    if(condition(numToFind, mid)) {
        return true;
    } else if(numToFind > numArray[mid]) {
        binarySearch(numToFind, mid +1, 99);
    } else {
        binarySearch(numToFind, 0, mid -1);
    }

}

int main () {
    
    initArray();
    binarySearch(5, 0, 99);


    return 0;
}