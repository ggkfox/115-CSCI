#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int size = 10;

void mergeSort(vector<int> & v);
void mergeSort(vector<int> & v, int lo, int hi);
void merge(vector<int> & v, int lo, int mid, int hi);
void print(vector<int> & v);

int main(){
    vector<int> v;
    v.reserve(size);
    for(int i = 0; i < size; i++){
        v.push_back(rand()%size);
    }
    print(v);
    mergeSort(v);
    print(v);
}

void mergeSort(vector<int> & v){
    mergeSort(v, 0, size-1);
}

void mergeSort(vector<int> & v, int lo, int hi){
    if (lo >= hi) return;
    int mid = (lo+hi)/2;
    mergeSort(v, lo, mid);
    mergeSort(v, mid+1, hi);

    merge(v, lo, mid, hi);
}

void merge(vector<int> & v, int lo, int mid, int hi){
    vector<int> temp;
    for (int i = lo; i <= hi; i++){
        temp.push_back(v.at(i));
    }
    int a_pos = 0;
    int b_pos = (mid-lo)+1;
    for (int i = lo; i <= hi; i++){
        if (a_pos > mid-lo) v.at(i) = temp.at(b_pos++);
        else if (b_pos > hi-lo) v.at(i) = temp.at(a_pos++);
        else if (temp.at(a_pos) < temp.at(b_pos)) v.at(i) = temp.at(a_pos++);
        else v.at(i) = temp.at(b_pos++);
    }
}

void print(vector<int> & v){
    cout << "printing list....\n";
    for (int i = 0; i < size; i++){
        cout << v.at(i) << endl;
    }
}
