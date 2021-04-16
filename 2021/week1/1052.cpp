#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int T;cin>>T;
    vector<int>A(3);
    for(int t=0;t<T;++t){
        for(int i=0;i<3;++i)cin>>A[i];
        sort(A.begin(),A.end());
        cout<<"Case "<<t+1<<": "<<A[1]<<endl;
    }
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}