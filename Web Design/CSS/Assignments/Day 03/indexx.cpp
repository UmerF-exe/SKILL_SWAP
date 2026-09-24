#include <iostream> 
#include <conio.h>
 using namespace std;
int vowelCount(string str)
{
int count;
for (int i=0; i<str.length(); i++)
{
if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]== 'o' || str[i]=='u' ||str[i]=='A'||str[i]=='E' || str[i]=='I'|| str[i]=='0'||str[i]=='U')
{
count++;
}

}
return count;
int consonantCount(string str)
int count;
for (int i=0; i<str.length(); i++)
{
}
if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')) ++count;
int vowels-vowelCount(str);
return count-vowels;
int upperCount(string str)
int count;
for (int i=0; i<str.length(); i++)
{
if(str[i]>='A'&&str[i]<='Z')
{
38
++count;
39
}
return count;
int lowerCount(string str)
44 (