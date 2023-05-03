 //prime values using O(log(n)) time complexity
int main(){
  
    int n=15;
    vector<int>p;
    for(int i=2;i<=n;i++){
        int c=0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0 && i!=j) c=-1;
        }
        if(c==0) p.push_back(i);
    }
    for(int i=0;i<p.size();i++) cout<<p[i]<<" ";
}
