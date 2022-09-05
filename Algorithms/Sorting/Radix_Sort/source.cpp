#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

//Desc: helper function for radixSort DON"T CALL THIS FUNCTION EXCEPT IN radixSort
//Pre: proper previous spots have been run starting from zero
//Post: none
//Return: sorted or partialy sorted vector
vector<int> radixHelper (vector<int> arr, int spot)
{
    vector<int> count(10,0);

    vector<int> retVal(arr.size(),0);

    for (int i = 0; i < arr.size(); ++i)//Fill count array
    {
        int temp = arr[i];
        for (int j = 0; j < spot; ++j)
        {
            temp/=10;
        }
        count[temp%10]++;
    }

    for (int i = 1; i < count.size(); ++i)//Sum count array
    {
        count[i] += count[i-1];
    }

    for (int i = arr.size()-1; i >= 0; --i)//Find which values match what spots //complicated part
    {
        int temp = arr[i];
        for (int j = 0; j < spot; ++j)
        {
            temp/=10;
        }

        temp = temp%10;
        
        for (int j = 0; j < count.size(); ++j)
        {
            if(j==temp)
            {
                retVal[--count[j]]=arr[i];
            }
        }
    }

    return retVal;
}

//Desc: sorts a vector of ints
//Pre: none
//Post: none
//Return: sorted vector of ints
vector<int> radixSort (vector<int> arr)
{
    for (int i = 0; i < 10; ++i)
    {
        arr = radixHelper(arr,i);
    }

    return arr;
}

int main(int argc, char const *argv[])
{
    //int myints[] = {3650,15,862,213,296,8,554,447,951,29,440,542,87,877,550,450,133,983,942,323,124,920,100,32,713,623,977,338,880,22}; //Test values
    //vector<int> array (myints, myints + sizeof(myints) / sizeof(int) );//Convert to vector
    vector<int> array;
    for (int i = 0; i < 10000000; ++i)
    {
        array.push_back(rand());
    }
    
    array = radixSort(array); //Raidx sort function call

    cout << "Sorting Done" << endl;

    for (int i = 0; i < array.size(); ++i) //Output loop
    {
        cout << array[i] << endl;
    }

    system("PAUSE");

    return 0;
}