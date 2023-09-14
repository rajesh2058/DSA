#include<iosteam>
using namespace std;
class student{
    int n;
    char name[20];
    int rollno;
    char hobbie[20];
    for(int i=0;i<n;i++){
        cout<<"enter name roll no and hobby";
        cin>>name>>rollno>>hobbie;
        cout<<"name is"<<name<<"roll no is"<<rollno<<"and hobbie is"<<hobbie<<endl;

    }
};
    int main()
    {
        student p;
        return 0;
    }
