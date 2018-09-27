//Autor: Dana Fisk

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
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
      cout<<"\nWhat is the item?\n";
      cin>> newitem;
      if (numItems < 5) {
      list[numItems] = newitem;
      numItems++;
      cout<<numItems;
      }

      //doesnt work   
      //cout << "You have " << list.length() - numItems << " spaces left in your list";
    

   else 
        { cout<< "You'll need a bigger list!\n";
        }
    }



        }while((input !='Q') && ( input !='q'));

        return 0;
        }














