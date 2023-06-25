#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
	 char c;
	 cin>>c;
	 int apha=0,num=0,spec=0;
         while (c!='$') {
           if (c>='a'&&c<='z'){
             apha++;
             c=cin.get();
         }
		       else if(c>='0'&&c<='9'){
			     num++;
           c=cin.get();
         } else {
           spec++;
           c=cin.get();
          }
         }
         cout<<apha<<" "<<num<<" "<<spec;
}
