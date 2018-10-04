
#include<iostream>
#include<math.h>
using namespace std;

int main(){
int x=20, y=5;
bool v,w;
v=(x!=y);
w=((x/=y)==4);
cout<<x<<" "<<y<<" "<<v<<" "<<w<<endl;
return 0;
}
