#include <iostream>
#include <string>
using namespace std;

// int main(){
//     int a,b,sum1;
//     float c,d,sum2;
//     string e,f,sumc;
//     cout<<"Enter two integers: ";
//     cin>>a>>b;
//     cout<<endl<<"Enter two floats now\t";
//     cin>>c>>d;
//     cout<<endl<<"Enter two characters: \t"; 
//     cin>>e>>f;
//     sum1=a+b;
//     sum2=c+d;
//     sumc=e+f;
//     cout<<endl<<"Sum of integers: "<<sum1<<endl;
//     cout<<"Sum of floats: "<<sum2<<endl;
//     cout<<"Sum of characters: "<<sumc<<endl;
//     cout<<"concatenation of characters: "<<e<<f<<endl;
//     cout<<"concatenation of characters: "<<e.append(f)<<endl;
//     return 0;
// }
void swap_value(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"using values a=\t"<<a<<"\t and b=\t"<<b<<endl;
}
void swap_reference(int* a,int* b){
    int temp0;
    temp0= *a;
    *a = *b;
    *b = temp0;
    cout<<"using pointers a=\t"<<*a<<"\t and b=\t"<<*b<<endl;
}
int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    swap_value(a,b);
    cout<<"after using values a=\t"<<a<<"\t and b=\t"<<b<<endl;
    swap_reference(&a,&b);
    cout<<"after using references a=\t"<<a<<"\t and b=\t"<<b<<endl;
    return 0;
}
