#include <iostream>
#include <string>
#include<unordered_map>


using namespace std; 

string convert_to_camel_case(string text)
{
	for (int i = 0; i < text.size(); i++)
	{
	char next = i + 1;
		
		if (text[i] == '-')
		{
			text[next] = toupper(text[next]);
			text.erase(text.begin() + i);
		}
	}
	return text;
}

string reverse_string(string  str)
{
	unordered_map <string, int> words;
	string curr; 
	for (int i = 0 ; i< str.size(); i++)
	{
		if (str[i] != ' ')
		{
			curr.push_back(str[i]);
		}
		else
		{
			words.insert(make_pair(curr, curr.size()));
			curr.clear();
		}
	}
	string final; 
	unordered_map<string, int>::iterator it;
	for (it = words.begin(); it != words.end(); it++)
	{
		if (it->second >= 5)
		{
			it->first.
		}
		for (int i = 0; i < it->first.size(); i++)
		{
		final.push_back(it->first[i]);
		}
		final.push_back(' ');
	}
	return final;
}

string reverse_string2(string & str)
{
	int start = 0;
	int end; 
	for (int i= 0 ; i < str.size(); i++)
	{
		if (i == str.size() -1)
		{
			int j = start;
			int end2 = end;
			for (j; j <= (end + start) / 2; j++)
			{
				swap(str[j], str[end2]);
				end2--;
			}
		}

		if (str[i] == ' ')
		{
			end = i - 1;

			if (end - (start - 1) >= 5)
			{
				int j = start;
				int end2 = end;
				for (j; j <= (end + start) /2; j++)
				{
					swap(str[j], str[end2]);
					end2--;
				}
				start = i + 1;
			}
			else
			{
				end = i + 1;
				start = end;
			}
		}
	}
	return str;
}

int watermelon ()
{
	double weight; 
    cin>> weight;
    if(weight == 2) cout<< "NO";
    else if(floor(weight/2.0) == weight/2.0 )
	{
		cout<< "YES";
		return 1;	
	} 
    else 
	{
		cout<<"NO";
		return 0;
	}

}


string[] way_too_long_words()
{
	int WORDS_NUMBERS;
    cin>> WORDS_NUMBERS;
   	string words[WORDS_NUMBERS]; 
   
   	for(int i = 0; i < WORDS_NUMBERS; i++) cin>> words[i];
   	for(int i = 0; i < WORDS_NUMBERS; i++)
	{
       if(words[i].size() > 10)
       {
       char f_ch = words[i][0];
       char l_ch = words[i][words[i].size() - 1];
       int word_length = words[i].size() - 2;
       words[i] = f_ch + to_string(word_length) + l_ch;
       }
 
   	}
   
   	for(int i = 0; i < WORDS_NUMBERS; i++){
    	cout<< words[i] << endl;
   	}
	return words;
}

int vanya_and_fence()
{
	int number_of_friends; 
    std::cin>> number_of_friends;
    int height_of_friends[number_of_friends]; 
    int fence_height;
    std::cin>>fence_height;
    std::cout << std::endl;
    int min_road_length = 0;
    for(int i = 0; i < number_of_friends; i++){
    std::cin>> height_of_friends[i];
    }
    
    for (int i = 0; i < number_of_friends; i++){
        if(height_of_friends[i] > fence_height){
            min_road_length += 2;
        }
        else{
            min_road_length++;
        }
    }
    
    std::cout<< min_road_length;
	return min_road_length;
}

void main()
{
	system("pause");
}