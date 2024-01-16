#include <iostream>
using namespace std;

bool printNumbers(int start,int end,int step){
    for(int i=start;i!=end;i+=step){
        cout<<i<<" ";
    }

}
int main(){
printNumbers(0,11,1);
printNumbers(10,-1,-1);
return 0;
}

