#include <iostream>
using namespace std;
string d="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string Dtom(int n,int m)
{
	string ans="";
	while(n!=0){
		ans=d[n%m]+ans;
		n/=m;
	}
	return ans;
}
int mtoD(int m,string n){
	int num=0;
	for(int i=0;i<n.size();i++){
		if(n[i]>='A'){
			num*=m;
			num+=n[i]-'A'+10;
		}
		else{
			num*=m;
			num+=n[i]-'0';
		}
	}
	return num;
} 
int main(){
	int d,m,k;
	string n;
	cout<<"请输入原进制：";
	cin>>m;
	cout<<endl<<"请输入原数：";
	cin>>n;
	cout<<endl<<"请输入目标进制：";
	cin>>k;
	d=mtoD(m,n);
	cout<<endl<<Dtom(d,k);
	getchar();getchar();
}
