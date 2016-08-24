/*PROBLEM 3:

You want to design a program that tests how advanced your writing is. One measure of this is the size of the words in your text. In this program, you will look at word length to find how advanced your vocabulary is. Find the average word length X of a selection. Use this scale to determine if a selection is high, medium, or low: high is at least 8 letters long (X >= 8), medium is 8 > X >= 4, and low is X < 4.
In this program all text will be lowercase and all punctuation has been removed.
Input: The first line (N) consists of the number of data sets. Each data set is 3 lines long with an unknown number of words on each line.
Output: Print out “high” or “medium” or “low” for each data set.
Example Input File (Example has 3 sets of 3 lines each)
Input: 1 
this line has very short words in it
it can not be very high
an ape can see high in a tree
Input: 2 
four score and seven years ago our fathers brought forth on this 
continent a new nation conceived in liberty and dedicated to the 
proposition that all men are created equal
Input: 3 
the abovementioned astrophysicist committeewoman has through 
reconnaissance discovered incontrovertible evidence of 
discriminatory practices that are characteristically irreproachable
Example Output to Screen
low
medium
high

SOLUTION:*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char arr[1000][1000];
    int i=0,nod=0,sum=0;
    while(cin>>arr[i++])
    {
   
         nod++;
         sum=sum+strlen(arr[i-1]);
          }
sum=sum/nod;
    if(sum<=4) cout<<"low\n";
    if(sum>=4&&sum<=8) cout<<"medium\n";
    if(sum>=8) cout<<"high\n";
  

    return 0;
