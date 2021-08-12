#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int x[4]={a,b,c,d};
    int max=0;
    for(int i=1;i<=4;i++){
        if(max<x[i])
        max=x[i];
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans); 
    return 0;
}
