#include <iostream>

using namespace std;

int main(){
    int N, sum=0,a,rst=0;
    scanf("%d",&N);
    
    for(int i=0;i<9;i++){
        scanf("%d",&a);
        sum+=a;
    }
    rst=N-sum;
    cout<<rst<<endl;
    return 0;
}