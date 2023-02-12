#include <iostream>
#include <string>

using std::string;

int strStr(const string& source, const string& target)
{
    int n = 0;
    int i = 0;
    int j = 0;


    for (size_t i = 0; i < source.size(); i++)
    {
       if(source.at(i) == target.at(0))
       {
            for (size_t j = 1; j < target.size(); j++)
            {
                if(source.at(i) != target.at(j)) 
                {
                    break;
                }

            }
            
       }
    }
    
}