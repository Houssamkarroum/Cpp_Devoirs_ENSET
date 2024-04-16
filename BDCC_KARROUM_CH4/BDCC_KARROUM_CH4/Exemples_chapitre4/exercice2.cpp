#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class point{
      int x,y;
      public:
        point(int abs=0,int ord=2){
            x=abs;
            y=ord;
        }
        int coincidence(point & );
};
int point::coincidence(point  &pt){
    if((pt.x==x) && (pt.y==y)){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    point a,b(1),c(0,2);
    if(a.coincidence(b) || b.coincidence(a)){
        cout <<"a et b coincide\n";
    }
    else{
        cout <<"a et b ne coincide pas \n";
    }
    if(a.coincidence(c) || c.coincidence(a)){
        cout <<"a et c coincide\n";
    }
    else{
        cout <<"a et c ne coincide pas \n";
    }
    return 0;
}

