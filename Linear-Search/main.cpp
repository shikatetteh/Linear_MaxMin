#include <iostream>

using namespace std;
int recursiveLinearSearch(int array[],int key, int size){
   size=size-1;
    if (size <0){
        return -1;
    }else if (array[size]==key){
        return 1;
    }else {
    return recursiveLinearSearch(array,key,size);
    }
}

int main()
{
    cout << "Please Input the Size Of Array: " ;
    int size;
    cin>>size;
    int array[size], key,p;

    for (int k=0; k<size; k++){
        cout<<"Enter "<<k<<"Element :";
        cin >>array[k];
    }

     for (int d=0; d<size; d++){
        cout<<"array["<<d<<"] = ";
        cout <<array[d]<< endl;
     }

     cout<<"Please input key to search in Array";
     cin>>key;
     int result;
     result = recursiveLinearSearch(array, key, size--);
     if(result==1){
        cout <<"The key exist in the Array ";
     }else{
     cout<<"The key is not present in Array";
     }
    return 0;
}
