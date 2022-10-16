#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
     for(int i=1; count<n;i++)
        {
            int ap = 3*i+2;
            if(ap%4!=0)
            {
                cout<<ap<<" ";
                count++;
            }

        }

	// Write your code here
	
}
