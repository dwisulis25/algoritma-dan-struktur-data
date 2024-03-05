#include <set>
#include <iostream>

bool cekDuplikat(int arr[], int panjangArr){
    std::set<int> setArr;
    for(int i=0; i<panjangArr; i++){
        if(setArr.find(arr[i]) != setArr.end()){
            return true;
        }
        setArr.insert(arr[i]);
    }
    return false;
}

int main(void)
{
    int arrA[]={2,1,3,1};
    std::cout << cekDuplikat(arrA, 4);
    return 0;
}