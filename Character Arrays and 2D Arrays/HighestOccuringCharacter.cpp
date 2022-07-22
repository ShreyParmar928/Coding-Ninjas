#include<bits/stdc++.h> 
#define ASCII_SIZE 256 

char highestOccurringChar(char str[]) {
    char result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
  	return result;
}
