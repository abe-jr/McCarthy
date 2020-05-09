//McCarthy 91 Function
    #include<iostream>
     
    using namespace std;
     
    int M(int n)
    {
        if(n>100)
            return(n–10);
        else
            return(M(M(n+11))); //answer is 91 upto 101
     
    }
    int main()
    {
        int num;
     
        cout<<“enter a number “;
        cin>>num;
     
        int m = M(num);
        cout<<m<<endl;
     
    }