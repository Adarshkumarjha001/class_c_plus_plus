#include<bits/stdc++.h>
using namespace std;
class Hero{
	public:
	int age;
	char name[100];
	char level;
	string address;
};
int main(){
	Hero h1;
	h1.address="motihari";
	cout<<"The size of hero is: "<<sizeof(h1.age)<<endl;
	cout<<"The size of hero is: "<<sizeof(h1.name)<<endl;
	cout<<"The size of hero is: "<<sizeof(h1.level)<<endl;
	cout<<"The address is: "<<h1.address<<endl;
	cout<<"The size of hero is: "<<sizeof(h1.address);
	cout<<"The size of hero is: "<<sizeof(h1);
	}
