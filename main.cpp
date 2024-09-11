#include <iostream>

using namespace std;

class Binary{
public:
	int minBitFlips(int start, int goal){
		return start|goal ? (start&1^goal&1) + minBitFlips(start>>1, goal>>1):0;
	}
};

int main(){
	cout<<"fuck off"<<endl;
	return 0;
}