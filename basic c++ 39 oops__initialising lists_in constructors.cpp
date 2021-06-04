#include<iostream>
using namespace std;
class sinchan{
	int w1,w2;
	public:
		    sinchan(int s1,int s2): w1(s2),w2(w1*s1){
			cout<<"the constructor for the class sinchan is invoked"<<endl;
			cout<<"the value of w1 is "<<w1<<endl;
			cout<<"the value of w2 is "<<w2<<endl;
		}
};
int main(){
	sinchan japan(2,6);
	return 0;
}
