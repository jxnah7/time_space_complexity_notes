// psuedocode, not meant to work just to show example
#include <iostream>


int main(){
    int given_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 19};

}

int stupid_array(int given_array){
    int total = 0;      // O(1)     T = O(1)+O(1) = c1 + c2
    return total;       // O(1)     = c3 = c3 x 1 = O(1)
}                       //          O(1) + O(1) = O(1)


int find_Sum(int given_array){
    int total = 0;       // O(1)                T2 = O(1) + n x O(1) + O(1)
                         //                     = c4 + n x c5 = O(n)
    for(int i = 0; i < 11; i++){    // O(1)     = O(n) is linear time 
        total += i;     // O(1)
    }

    return total;       // O(1)
}

// explanation

/*

line 19 is repeated n times , because we repear the process 
until all items from i are added to total, n (given_array) amount of times

*/

// PSUEDOCODE NOT MEANT TO WORK

int ex2(){
    int array_2d[3][3] = {
        {1, 4, 3},
        {3, 1, 9},
        {0, 5, 2}
    };

    int findSum(array_2d){
        total = 0;                              // O(1)
        for(int i = 0; i < row in array_2d){
            for(each i in row){
                total += i;                     // O(1) cus adding 1 roughly takes the same amount of time
            }
        }
        return total;                            // O(1) (assuming reasonable small 1 int var)
    }
}

// n columns and n rows
// or n^2 elements in 2d array

/*
FIND TIME COMPLEXITY OF EX2

T3 = O(1) + n^2 x O(1) + O(1)
= c6 + n^2 x c7 = O(n^2)
Quadratic Time Complexity to go through the 2d array


*/

// What if we had 2 double for loops instead?

/*

T4 = 2n^2 x C + ... = 2n^2 x C + c2n + c3
= (2c) x n^2 + c2n + c3 = O(n^2)

*/

// math equation used isnt the most in depth
// but good enough for all practical purposes

