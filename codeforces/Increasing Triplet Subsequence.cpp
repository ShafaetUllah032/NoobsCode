#include<bits/stdc++.h>
using namespace std;

int main()
{

    int nums[6] = {2,1,5,0,4,6};
   //int d=nums.size();
   int d=6;
        for(int i=0;i<(d-2);i++)
        {

            cout<<nums[i]<<" "<<nums[i+1]<<" "<<nums[i+2]<<endl;
            if((nums[i+1]>nums[i]) && (nums[i+2]>nums[i+1]))
            {
                //return true;

                cout<<nums[i]<<" "<<nums[i+1]<<" "<<nums[i+2]<<endl;
                cout<<"true"<<endl;
            }
        }
    //return false;

    cout<<"false"<<endl;
}
