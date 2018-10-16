//kamrujjaman joy (facebook.com/joy25896)

#include<iostream>

#include<bits/stdc++.h>



using namespace std;





string add(string a, string b)

{

   int al=a.size()-1;

   int bl=b.size()-1;



   int carry=0;

   string result="";



   while(al>=0 && bl>=0)

    {

    int temp = (int)(a[al] - '0') + (int)(b[bl] - '0') + carry ;

    carry = 0;

    if(temp > 9 )

    {

        carry=1;

        temp=temp-10;

    }



    result+=char(temp + '0');

    al--;

    bl--;

    }



   while(al>=0)

    {

        int temp = (int)(a[al] - '0') + carry ;

        carry = 0;

        if(temp>9)

        {

            carry=1;

            temp=temp%10;

        }



        result+=char(temp + '0');

        al--;

    }



   while(bl>=0)

    {

        int temp = (int)(b[bl] - '0') + carry ;

        carry = 0;

        if(temp>9)

        {

            carry=1;

            temp=temp%10;

        }



        result+=char(temp + '0');

        bl--;

    }



if(carry)

    result+="1";



string addition="";



for(int i=result.size()-1;i>=0;i--)

    addition+=result[i];   // reversing the answer



return addition;

}

/*

string trim(string a)   // for removing leading 0s

{

   string res="";

   int i=0;



   while(a[i]=='0')

      i++;



   for(;i<a.size();i++)

    res+=a[i];



   return res;

}

*/



int main()

{



    string a;

    string b;

    //char coma;

   // char a[101],coma,b[101];

    string ss,temp,res;



while(cin>>ss){

string::size_type pos = ss.find(',');

    if(ss.npos != pos) {

        b = ss.substr(pos + 1);

        a = ss.substr(0, pos);

    }

reverse(a.begin(),a.end());

reverse(b.begin(),b.end());







   ss=add(a,b);

   temp=ss;

//temp=ss.reverse();



   reverse(ss.begin(),ss.end());

 //  ss.remove( QRegExp("^[0]*") );

 ss.erase(0, ss.find_first_not_of('0'));



  //res=add(ss,temp);

   cout<<ss<<endl;

}

return 0;

}

