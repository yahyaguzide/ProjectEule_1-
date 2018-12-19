/***************************************
*   Project Euler                       *
*   Problem 1                           *
*       Find the sum of all multiples   *
*       of 3 and 5 under 1000           *
*                                       *
*       Mois                            *
*****************************************/

#include <iostream>



int GetSumOfMultiples(int x, int N);


int main(){

    int Sum = 0;
    int N = 1000;

    Sum = GetSumOfMultiples(3, N) + GetSumOfMultiples(5, N);
    Sum -= GetSumOfMultiples(15, N);
    std::cout << Sum;

}


int GetSumOfMultiples(int x, int N){
    int sum = 0;

    for(int i = 1; i< N/x; i+= 1){
        sum += x*i;
    }

    return sum;
}
