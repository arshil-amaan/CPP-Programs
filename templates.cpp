#include<iostream>
using namespace std;
template <class T>
class Arithematic{
	private:
		T a,b;
	public:
		Arithematic();
		Arithematic(T x,T y);
		T add();
		T sub();
		T geta();
		T getb();
		void seta(T x);
		void setb(T y);
		void usrseta();
		void usrsetb();
		~Arithematic();
};

template <class T>
Arithematic<T>::Arithematic(){
  a=0;
  b=0;
}

template <class T>
Arithematic<T>::Arithematic(T x, T y){
  a = x;
  b = y;
}

template <class T>
Arithematic<T>::~Arithematic(){cout<<"Destructor Called\n";}

template <class T>
T Arithematic<T>::add() {
  return a+b;
}

template <class T>
T Arithematic<T>::sub() {
  return a-b;
}

template <class T>
void Arithematic<T>::seta(T x){
  a=x;
}

template <class T>
void Arithematic<T>::setb(T y){
  b=y;
}
template <class T>
void Arithematic<T>::usrseta(){
  cout<<"Enter a : ";
  cin>>a;
}

template <class T>
void Arithematic<T>::usrsetb(){
  cout<<"Enter b : ";
  cin>>b;
}

template <class T>
T Arithematic<T>::geta(){
  return a;
}

template <class T>
T Arithematic<T>::getb(){
  return b;
}

int main(){
  Arithematic<int> nums;
  
  cout<<"a is "<<nums.geta()<<", ";
  cout<<"b is "<<nums.getb()<<endl;

  cout<<"Sum is "<<nums.add()<<endl;
  cout<<"a-b is "<<nums.sub()<<endl;
  cout<<"***********************************\n";
  
  Arithematic<int> nums1{15,8};
  
  cout<<"a is "<<nums1.geta()<<", ";
  cout<<"b is "<<nums1.getb()<<endl;

  cout<<"Sum is "<<nums1.add()<<endl;
  cout<<"a-b is "<<nums1.sub()<<endl;
  cout<<"***********************************\n";
  
  Arithematic<float> nums2;
  nums2.seta(52.8);
  nums2.setb(34.7);

  cout<<"a is "<<nums2.geta()<<", ";
  cout<<"b is "<<nums2.getb()<<endl;

  cout<<"Sum is "<<nums2.add()<<endl;
  cout<<"a-b is "<<nums2.sub()<<endl;
  cout<<"***********************************\n";
  
  Arithematic<double> nums3;
  nums3.usrseta();
  nums3.usrsetb();

  cout<<"a is "<<nums3.geta()<<", ";
  cout<<"b is "<<nums3.getb()<<endl;

  cout<<"Sum is "<<nums3.add()<<endl;
  cout<<"a-b is "<<nums3.sub()<<endl;
  cout<<"*****************************\n";
  
  // Experiment (add and sub returns treated as ascii then return their UTF-8)
  Arithematic<char> nums4;
  nums4.usrseta();
  nums4.usrsetb();

  cout<<"a is "<<nums4.geta()<<", ";
  cout<<"b is "<<nums4.getb()<<endl;

  cout<<"Sum is "<<nums4.add()<<endl;
  cout<<"a-b is "<<nums4.sub()<<endl;

}
