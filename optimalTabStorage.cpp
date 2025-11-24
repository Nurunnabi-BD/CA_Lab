#include <bits/stdc++.h>
using namespace std;

void findorderMRT(int L[], int n){
    sort(L, L+n);

    cout << "Optimal order in which programs are to be stored: ";
    for(int i = 0; i < n; i++){
        cout << L[i] << " ";
    }
    cout << endl;

    int prefix = 0;
    double MRT = 0;

    for(int i = 0; i < n; i++){
        prefix += L[i];
        MRT += prefix;
    }

    MRT /= n;

    cout << "Minimum Retrieval Time = " << MRT << endl;
}

int main(){
    int L[] = {2, 5, 4};
    int n = sizeof(L) / sizeof(L[0]);
    findorderMRT(L, n);
    return 0;
}
