#include <iostream>
using namespace std;

int main()
{
	char str[100];
	int i,v=0,c=0,d=0,s=0,s_char=0;
	cout<<"Enter a character: ";
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
		str[i]=='o'||str[i]=='u'||str[i]=='A'||
		str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
		v++;
	}
	else if(((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z'))){
	       c++;
    }
    else if(str[i]>='0'&&str[i]>='9'){
            d++;
    }
    else if(str[i]==' '){
            s++;
    }else{
        s_char++;
	}
}
    cout<<"\nVowels: "<<v<<'\n';
    cout<<"Consonants: "<<c<<'\n';
    cout<<"Digits: "<<d<<'\n';
    cout<<"Whitespace: "<<s<<'\n';
    cout<<"Special Character: "<<s_char;

return 0;
	
}
