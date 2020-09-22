// you can use includes, for example:
// #include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

// INPUT : 5 -> OUTPUT : +-+-+
// INPUT : 4 -> OUTPUT : +-+-

#include <iostream>
#include <string.h>
using namespace std;


string solution(int N){

    char s[ N ];

    for (int i = 0; i < N; i++){
        if (i % 2 == 0)
           s[ i ] = '+';
        else
           s[ i ] = '-';
    }

    return s;
}

int main( ){

    int N;
    cin >> N;

    cout << solution( N );
    return 0;
}
