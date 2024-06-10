#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
int main(){
int T;
cin>>T;
while(T--){
    int N,K;
    cin>>N>>K;
    vector<int> A(N);
    vector<int>B(N);

    for(int i=0;i<N;i++){
        cin>>A[i];
    }
      for(int i=0;i<N;i++){
        cin>>B[i];
    }
unordered_map<int,vector<int>> cat_time;

for(int j=0;j<N;j++){
    cat_time[A[j]].push_back(B[j]);
}

if(cat_time.size()<K){
    cout<<-1<<endl;
    continue;
}

vector<int> mini_time;
for(auto &pair:cat_time){
    sort(pair.second.begin(),pair.second.end());
    mini_time.push_back(pair.second[0]);
}

sort(mini_time.begin(),mini_time.end());

int minTotalTime=0;

for(int j=0;j<K;j++){
    minTotalTime+=mini_time[j];
}
 cout<<minTotalTime<<endl;

}
    return 0;
}
