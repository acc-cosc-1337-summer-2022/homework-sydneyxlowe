#include<iostream>
using std::cout;

int main()
{
    int num = 5;
    cout<<num<<"\n";
    cout<<"size of num: "<<sizeof(num)<<"\n";
    cout<<"memory: "<<&num<<"\n";

    int &num_ref = num;
    cout<<"num ref value: "<<num_ref<<"\n";

    return 0;
}