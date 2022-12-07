#include <iostream>
#include <iomanip>
//#include "mass2d.h"

using namespace std;

int main(){
    int sz = 5;
	int** m = new int*[sz];
	double r=0.0;
	for (int i = 0;i < sz;i++) {
		m[i] = new int[sz];
		for (int j = 0;j < sz;j++){
			 m[i][j] = 3 * i +j;
            r+=m[i][j];
        }
	}

    r=r/(sz*sz);



    cout<<"avg "<<r<<endl;
    int f=1;
    int first;
    for (int i = 0;i < sz;i++) {
		for (int j = 0;j < sz;j++)
			if (m[i][j]>r  && f==1){
                first=m[i][j];
                f=0;
            }
            else {
                if (m[i][j]<first && first>r)
                    first=m[i][j];
            }
		cout << endl;
	}
    cout<<"elem "<<first<<endl;
    for (int i = 0;i < sz;i++) {
		for (int j = 0;j < sz;j++)
			cout<<setw(5)<<m[i][j];
		cout << endl;
	}

	for (int i = 0;i < sz;i++) {
		delete[] m[i];
	}
	delete[] m;


}