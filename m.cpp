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
    double f=r;
    int first;
	int second;
    for (int i = 0;i < sz;i++) {
		for (int j = 0;j < sz;j++)
			if (abs(m[i][j]-r )< f && m[i][j]!=r){
                f=abs(m[i][j]-r);
                first=i;
				second=j;
            }
            
		
	}
    cout<<"elem "<<m[first][second]<<" i="<<first<<" "<<second<<endl;
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