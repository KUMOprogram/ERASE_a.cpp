#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    system("color f1");
           string w;
           int i,suma=0;
           cout<<"Write a word: ";
           cin>>w;
    
           if (w.find("a")==string::npos)
           {
                                  cout<<endl<<"NO 'A' EXISTS"<<endl;
           }else{
                 for (i=0; i<w.size(); i++)
                 {
                     if (w[i]=='a')
                     {
                                  w.erase(i,1);
                                  --i;
                                  ++suma;
                     }
                 }
        	cout<<endl<<"DELETED 'a': "<<suma<<endl;
           }
           
           cout<<endl<<"Word that remains: "<<w<<endl<<endl;
    
    system("pause");
}
