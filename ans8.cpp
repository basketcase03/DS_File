#include<iostream>
#include<stack>

using namespace std;


int eval_exp(char str[],int n){
	stack <int> s;
	char nums[]={'0','1','2','3','4','5','6','7','8','9'};
    bool symbol=true;;
	for(int i=0;i<n;i++){
		for(int num=0;num<10;num++){
			if(str[i]==nums[num]){
				s.push(num);
				symbol=false;
			}
		}
		if(symbol){
			int num1=s.top();
			s.pop();
			int num2=s.top();
			s.pop();
			
			if(str[i]=='+'){
				s.push(num1+num2);
			}
			else if(str[i]=='-'){
				s.push(num2-num1);
			}
			else if(str[i]=='*'){
				s.push(num1*num2);
			}
			else if(str[i]=='/'){
				s.push(num2/num1);
			}
		}
		
}
	
	return(s.top());
	
}

int main(){
	cout<<"Enter size of expression : ";
	int n;
	cin>>n;
	char str[n];
	cout<<"Enter expression : ";
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	
	int ans=eval_exp(str,n);
	cout<<"Ans is : "<<ans;
}


