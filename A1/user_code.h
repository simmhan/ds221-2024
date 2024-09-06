#ifndef USER_CODE_H
#define USER_CODE_H

#include <vector>
#include <string>
#include <utility>
#include <iostream>
#include <algorithm>
#include "fileIterator.h"
#include "fileWriter.h"

using namespace std;



//////////////////////////////////////////////////////////////////////////////////
// MODIFY THIS SECTION
//////////////////////////////////////////////////////////////////////////////////
/**
 * @brief Modify this code to solve you the assigment. Include relevant document. Mention the prompts used prefixed by #PROMPT#.
 *        
 * 
 * @param hashtags 
 * @param purchases 
 */
void groupCustomersByHashtags(fileIterator& hashtags, fileIterator& purchases,fileIterator& prices, string outputFilePath)
{
    //Use this to log compute time    
    auto start = high_resolution_clock::now();
    //  Write your code here
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by compute part of the function: "<< duration.count() << " microseconds" << endl;

    // Use the below utility function to write the output to a file
    // Call this function for every group as a vector of integers
    vector<int> group;
    writeOutputToFile(group, outputFilePath);
    return;
}



#endif // USER_CODE_H
