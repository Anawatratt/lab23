#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char* argv[]){
     float sum=0;

    for(int i=0;i<argc;i++){
        sum=sum+atof(argv[i]);
    }
    if(argc-1>0){
    cout<<"---------------------------------\n";
    cout<<"Average of "<<argc-1<<" numbers = "<<sum/(argc-1)<<"\n";
    cout<<"---------------------------------\n";
    }else{
        cout<<"Please input numbers to find average.";
    }
    return 0;
}

