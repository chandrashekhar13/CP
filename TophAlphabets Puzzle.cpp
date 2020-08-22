#include <iostream>

using namespace std;

int main() {
	char in[1000];
	cin>>in;
	string ms ="ABCDEFGHIJKLMNOPQRSTWVUXYZ";
	int visit[26] = {0};
	int count = 0;
	
	for(int i = 0; in[i] != '\0';i++){
		for(int j =0;ms[j] != '\0';j++){
			if(in[i] == ms[j]){
				visit[j] =1;
			}
		}
	}
	for(int i = 0;  i<26; i++){
		if(visit[i] ==1)
			count = count +1;
	}
	
	cout<<26-count<<endl;
	
	return 0;
}
