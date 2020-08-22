#include <iostream>

using namespace std;

int main() {
	char in[100];
	cin>>in;
	string ms ="microsft";
	int visit[8] = {0};
	int count = 0;
	
	for(int i = 0; in[i] != '\0';i++){
		for(int j =0;ms[j] != '\0';j++){
			if(in[i] == ms[j]){
				visit[j] =1;
			}
		}
	}
	for(int i = 0;  i<8; i++){
		if(visit[i] ==1)
			count = count +1;
	}
	
	if (count ==8)
		cout<<"We both love Microsoft!"<<endl;
		
	else
		cout<<"Only I love Microsoft!"<<endl;
	return 0;
}
