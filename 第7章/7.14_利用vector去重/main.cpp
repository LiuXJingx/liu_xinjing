#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int>n(20);
    for(size_t i=0;i<n.size();++i)
    {
        cout<<"Enter the "<<i+1<<" number: "<<endl;
        cin>>n[i];
        for(size_t j =0;j<=i;++j)
        {

            while (n[i]==n[j])
                {cout<<"Enter another again!";
                cin>>n[i];}
        }

    }
    for(size_t i=0;i<n.size();++i)
    {
        cout<<n[i]<<'\t';
    }
}
