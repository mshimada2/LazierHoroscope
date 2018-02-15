//Authors: McDermott Liam Shimada 

#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last; 
int lucky;
  //get user input

  cout<<"Please enter your first and last name: "<<endl;
  cin>>first>>last;


    cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"."<<", here is your fortune... "<<endl;


//tell fortune 
    
    lucky = first.length() + last.length();

    cout<<"Your lucky number is "<<lucky<<"! "<<endl;

    if(first[0] == 'A' && first[0] == 'E' && first[0] == 'I' && first[0] == 'O' && first[0] == 'U' && first[0] == 'a' && first[0] == 'e' && first[0] == 'i' && first[0] == 'o' && first[0] == 'u'){

    cout<<"You're destined to be famous! "<<endl; 

    }

   else{

   cout<<"You should keep a low profile. "<<endl; 

   }

   if(last[0] == 'a' && last[0] == 'e' && last[0] == 'i' && last[0] == 'o' && last[0] == 'u'){

   cout<<"You have already met your true love. "<<endl;

   }

   cout<<"Have a good day! "<<endl; 


  return 0;
}
