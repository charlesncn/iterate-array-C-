#include <iostream>

using namespace std;

int main()
{
   int arr[7], Odd_elements = 0, Even_elements = 0 ;
   for(int i=0 ; i <= 7 ; i++)
   {
       cout<<"Enter elements to append into your array:-"<<endl;
       cin>>arr[i];

   }
   for (int i=0 ; i < 7 ; i++)
   {
       if(arr[i]%2 == 0  || arr[i] == 0)
       {

           Even_elements++;
       }
       else
       {

           Odd_elements++;
       }

   }
   cout<<"Even elements:"<<Even_elements;
   cout<<"Odd elements:"<<Odd_elements;

    return 0;
}
