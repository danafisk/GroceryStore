//Autor: Dana Fisk

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> listvector; //vector of strings
  char input;
  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
  if (listvector.size()!=0) 
  {
    cout<<"\n (D)elete last item";
  }
    cout<<"\n (Q)uit";
    cout<<"\nYour choice: ";
    cin>>input;
    if ((input == 'A') || (input == 'a'))  {
      string newitem;
      cout<<"What is the item?\n";

      cin>> newitem;
      listvector.push_back(newitem);
    }
    if (((input== 'D') || (input == 'd')) && (listvector.size()!=0))
    {
    cout<< listvector [listvector.size()-1] << " was deleted from the list .\n";
   listvector.pop_back();
    }
  }
  while((input !='Q') && ( input !='q'));
  if(listvector.size()==0)
  {
    cout<<"No items to buy!\n";
  }
  if(listvector.size()>0)
  { 
    cout<<"==ITEMS TO BUY==\n";
    int num =1;
    int index;
    for (index=0; index < listvector.size(); index++)
    {
      cout << num << " "<< listvector[index]<<endl;
      num++;
    }

  }
  return 0;
}
