#include <iostream>
#include <vector>
using namespace std;
int weird_array(vector<int>a)
{
    if (a.size()<2)
    {
        return 0;
    }
    vector <int>li;
    int count=0;
   for(int i =0;i<a.size();i++)
    {
        for(int j =i;j<a.size();j++)
        {
            if (a[i]==a[j]) count++;
            else{
               li.push_back(count);
               count=0;
               break;
            }
            
        }
    }
     int maximum=0;
     for(int num:li)
     {
        if(num>maximum)
        {
            maximum=num;
        }
     } 
     return maximum;
}
int main()
    {
        vector<int>a={3,3,1,3,3};
        vector<int>b={5};
        cout<<weird_array(a)<<endl;
        cout<<weird_array(b)<<endl;
        return 0;



    }
