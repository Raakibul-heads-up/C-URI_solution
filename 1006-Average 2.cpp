#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    float a,b,c,avg;
    cin >> a;
    cin >> b;
    cin >> c;

    avg = ((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("MEDIA = %.1f\n",avg);
return 0;
}

