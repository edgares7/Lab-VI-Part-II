//
//  Lab VI Part II
//
//  Created by Edgar Esparza on 6/22/15.
//

#include <iostream>
#include <fstream>
#include<cctype>
using namespace std;

int main()
{
    ofstream OutFile;
    
    OutFile.open("upper.txt");

    char x;
    ifstream InFile;
    
    InFile.open("message.txt");
    
    if(InFile.fail()){
        
        cout<<"the file does not exist"<<endl;
        
        return 0;
    }
    
    while(InFile.get(x)){
        
        if (islower(x))
            x=toupper(x);
        OutFile<<x;
        
    }
    
    InFile.close();
    OutFile.close();
    
    return 0;
}
