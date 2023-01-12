/*
10. Write a C++ program to implement Hash Table using Template Class.
*/
#include<iostream>
using namespace std;

template <typename T1=int,typename T2=int,typename T3=int>
T3 add(T1 x,T2 y){
    return(x+y);
}
template <typename T4=int,typename T5=int,typename T6=int>
T6 maxi(T4 x,T5 y){
    return(x>y?x:y);
}
template <typename T7=int,typename T8=int,typename T9=int,typename T10=int>
T10 maximum(T7 x,T8 y,T9 z){
    return(x>y && x>z ? x : y>z ? y : z);
}
template<typename T11=int,typename T12=int>
 void s(T11 x,T12 y){
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<"\n"<<y<<"\n";
}
template<typename T13=int ,typename T14=int>
T13 sOA(T13 x[],T14 y){
    int i=0;
    T13 sum=0;
    for(int i=0;i<y;i++){
        sum+=x[i];
    }
    return sum;

}

class Non_template{
private:
    int data;
public:
    void set_data(int data){
        this->data=data;
    }
    int get_data(){
        return data;
    }

};

template <typename T>
class Template:public Non_template{
private:
    T data;
public:
    void set_data(T x){
        this.data=data;
    }
    T get_data(){
        return data;
    }
};

template <typename t>
class Stack{
private:
    t *ptr;
    int capacity=0;
    int lastIndex=-1;
public:
    Stack(){
        capacity=0;
        lastIndex=-1;
        ptr=NULL;
    }
    void create_stack(int s){
        capacity=s;
        ptr=new t[capacity];
    }
    void push(t item){
        if(ptr==NULL)
            cout<<"Invalid Operation"<<"\n";
        else if(lastIndex+1==capacity)
            cout<<"Overflow"<<"\n";
        else{
            ++lastIndex;
            ptr[lastIndex]=item;
        }
    }
    void pop(){
        if(lastIndex==-1)
            cout<<"Underflow"<<"\n";
        else if(ptr==NULL)
            cout<<"Invalid Operation"<<"\n";
        else{
            lastIndex--;
        }

    }
    void peek(){
    cout<<ptr[lastIndex];
    }
};

int main(){

    //cout<<add<int,float,float>(2,2.3)<<"\n";
    //cout<<maxi<int,float,float>(2,2.3)<<"\n";
    //cout<<maximum<int,float,float,float>(2,2.3,4.6)<<"\n";
    //s<float,float>(2.8,2.4);
    //cout<<add<float,float,float>(3.4,6.5)<<"\n";
    //float arr1[]={1.1,1.2,1.3,1.4,1.5};
    //cout<<sOA<float>(arr1,5)<<"\n";
    Stack <float>s1;
    s1.create_stack(5);
    s1.push(1.1);
     s1.push(1.2);
    s1.push(1.3);
    s1.push(1.4);
    s1.push(1.5);
    s1.pop();


    s1.peek();
}
