#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
	cout<<typeid(5).name();
	cout<<typeid("+").name();
}
