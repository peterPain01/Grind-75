#include <iostream> 
using namespace std; 

int n = 6; 
int m = 5; 

int a[6] = {1,5,7,8,10,11}; 
int b[5] = {1,2,3,9,68}; 
int temp[15]; 
void twoPoint(){ 
    int c,d; 
    c = d = 0; 
    int i = 0; 
    while(c < n && d < m){ 
        if(a[c] < b[d])
            temp[i++] = a[c++]; 
        else if(a[c] > b[d])
            temp[i++] = b[d++];
        else
            temp[i++] = a[c++];
    }
    while(c < n){ 
        temp[i++] = a[c++]; 
    }
    while(d < m){
        temp[i++] = b[d++]; 
    }
    return; 
}

int main(){
    twoPoint();
    for(int i =0;i < 12;++i) cout << temp[i] << " "; 
    return 0; 
}