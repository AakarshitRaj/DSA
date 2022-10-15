#include <iostream>

using namespace std;
void print(int* p){
        cout<<*p<<endl;
    }
    void incrementPointer(int* p){
        p=p+1;
    }
    void increment(int *p){
        (*p)++;
    }

    int sum(int *a,int size){
        int ans = 0;
        for(int i=0;i<size;i++){
            ans+=a[i];

        }
        return ans;
    }
int main()
{
    /*float i=3.4;
    cout<<&i;
    float *p=&i;
    cout<<"\n"<<*p;
    i++;
    cout<<"\n"<<*p;
    cout<<"\n"<<p;
float a=i;
a++;
cout<<"\n"<<i<<"\n"<<a<<"\n"<<*p;
*p=788;
cout<<"\n"<<i;
(*p)++;
cout<<"\n"<<*p;
float *q=p;
cout<<"\n"<<q<<"\n"<<*q;

int s;
cout<<"\ngarbage value:- "<<s;
int *r=0;
cout<<"\n"<<r;
cout<<"\n"<<*r;*/
   /* int x=10;
    int *t=&x;
    cout<<t<<endl;
    t=t+1;
    cout<<t<<endl;
    t=t-1;
    cout<<t<<endl;*/
    //array and pointer
   /*int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+9<<endl;
    cout<<3[arr]<<endl;
    cout<<arr[3]<<endl;
    cout<<*(arr+3);
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<arr+2<<endl;

    int *p=&arr[0];
    cout<<arr<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<&arr<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(arr)<<endl;
    p=p+1;
    //arr=arr+1;    error
    
    cout<<arr<<endl;
    cout<<p<<endl;
    p=arr+2;
    cout<<arr<<endl;
    cout<<p<<endl;*/ 

    //character and pointer

   /* char b[]="abcd";
    cout<<b<<endl;

    char *c=&b[0];
    cout<<b[0]<<endl;
    cout<<c<<endl;

    char b1[]='a';
    char* c1=&b1;
    cout<<c1<<endl;

    char str[]="abcde";
    char* pstr="abcde";
    cout<<str<<endl;
    cout<<pstr<<endl;*/

    //functions and pointers

    
/*int i=10;
int *pi=&i;
print(pi);

cout<<pi<<endl;
incrementPointer(pi);
cout<<pi<<endl;

cout<<*pi<<endl;
increment(pi);
cout<<*pi<<endl;*/

int a[10]={1,2,3,4,5,6,7,8,9,10};
cout<<sizeof(a)<<endl;
cout<<sum(a+3,7)<<endl;
    return 0;
}