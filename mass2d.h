#include <iostream>
namespace N{

void run(int mass[], int size){
    using namespace std;

    for(int i=0; i <size; ++i)
    {
        cout<<" "<<mass[i];
    }
    cout<<endl;
}

void swap(int list[], int i, int j)
{
    int temp=list[i];
    list[i]=list[j];
    list[j]=temp;
}
    

int part(int list[], int first, int last)
{

    int p;
    swap(list,first,(first+last)/2);
    p=list[first];
    int small=first;
    
    for (int index=first+1;index<=last;++index){
            if (list[index]<p){
                small++;
                swap(list,small,index);
            }
    }
    swap(list,first,small);
    return small;

}



}