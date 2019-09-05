#include <iostream>
using namespace std;
int n,num[20005],sum[20005];
struct node{
    int v,p;
}a[20005];
inline void addnum(int pos,int v){
    while(pos<n){
        num[pos]+=v;
        pos+=pos&(-pos);
    }
}
inline void addsum(int pos,int v){
    while(pos<n){
        sum[pos]+=v;
        pos+=pos&(-pos);
    }
}
inline int querynum(int pos){
    register int ans=0;
    while(pos){
        ans+=num[pos];
        pos-=pos&(-pos);
    }
}
inline int querysum(int pos){
    register int ans=0;
    while(pos){
        ans+=sum[pos];
        pos-=pos&(-pos);
    }
}
inline int cmp(const node &a,const node &b){
    return a.v<b.v;
}
int main(){
    cin>>n;
    for(register int i=1;i<=n;i++){
        cin>>a[i].v<<a[i].p;
    }
    sort(a+1,a+n+1,cmp);
    for(register int i=1;i<=n;i++){
        const int 
    }
}
