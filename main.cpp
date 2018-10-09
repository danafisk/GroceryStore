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
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;
    if ((input == 'A') || (input == 'a'))  {
      string newitem;
      cout<<"What is the item?\n";

      cin>> newitem;
      listvector.push_back(newitem);
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
