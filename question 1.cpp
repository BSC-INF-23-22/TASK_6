# include <iostream>
 using namespace std;

 int main(){

    int integervalue;
    string stringvalue;

    int* pPointer = new int;

    
    cout<<"ENTER THE INTEGER VALUE :"<<endl;
    cin>> integervalue;

    
    cout <<"ENTER STRINGVALUE :"<<endl;
    cin>> stringvalue;

    *pPointer = integervalue;

    cout<<"THE VALUE OF THE DYNAMICALLY ALLOCATED:"<< *pPointer<<endl;
    cout<<"THE VALUE OF THE DYNAMICALLY ALLOCATED STRING:"<< stringvalue<<endl;

    delete pPointer;
     return 0;
 }