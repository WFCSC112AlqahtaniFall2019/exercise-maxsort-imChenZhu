#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);


    // vector to be sorted
    // initialize v
    v = {6, 1, 3, 2, 1};
    /* your code here */


    // print the unsorted v
    cout<<"v = {6, 1, 3, 2, 1}"<<endl;
    /* your code here */


    // sort v
    maxSort( v);
    /* your code here */


    // print the sorted v
    print(v);
    /* your code here */


    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){

        int current_max = 0;
        int currentPosition = 0;/*complete the code*/

        for(int j=0;j<=i;j++){
           if(list[j]>current_max){
               current_max = list[j];
               currentPosition = j;
           }
           /*complete the code*/

        }
        swap(list[currentPosition], list[i]);
        /*complete the code*/
    }
}

// swap function
void swap(int& a, int&b){
    int temp = a;
    a=b;
    b=temp;/*your code here*/
}

// print function
void print(const vector<int>& list){
    cout<<"v = {";
    for(int k=0;k<5;k++){
        if(k<4){
            cout<<list[k]<<", ";
        }
        else{
            cout<<list[k]<<"}";
        }
    }/*your code here*/
}

