//Autor: Dana Fisk

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> listvector; //vector of strings
  string items;
  char input;
  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;
    if ((input == 'A') || (input == 'a'))  {
      string newitem;
      cout<<"What is the item?\n";
    
      cin>> newitem;
    listvector.push_back(items);
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
      
      for (int index=0; index < listvector.size(); index++)
  {
    cout<<index+1<<" "<<listvector[index]<<endl;
  }

  }
  return 0;
}
