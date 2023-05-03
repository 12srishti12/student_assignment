int main() {
    //prime values using O(n^2) time complexity
    int n=10;
    vector<int>k;
    for(int i=2;i<=10;i++){
        int c=0;
        for(int j=2;j<=10;j++){
            if(i%j==0 && i!=j) c=-1;
        }
        if(c==0) k.push_back(i);
    }
    for(int i=0;i<k.size();i++) cout<<k[i]<<" ";
}
