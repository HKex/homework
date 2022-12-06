#include<stdio.h>
catstr(char*str1,char*str2);
main(){
chars1[20]="abc",s2[]="ABC";
char*p1=s1,*p2=s2;
catstr(p1,p2);
puts(s1);
}
catstr(char*str1,char*str2){
while(*str1!='\0'){
str1++;}
while(*str2!='\0'){
*str1++=*str2++;} 
*str1='\0';

}