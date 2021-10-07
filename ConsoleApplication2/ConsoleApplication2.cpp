

#include <iostream>
#include <string>
#include <set>

using namespace std;

string return_string(const char *array[])// 1
{
    string result;
    for (int i=0;i<(sizeof(array)/sizeof(char));++i)
    { 
        result += array[i];
        (i==(sizeof(array) / sizeof(char)-1))? result += "." : result += ", ";
    }
    return result;
}
int rounding(const float val)// 2
{
    int val2 =(val*10);
    int result;
    if ((val2 % 50) < 25)
    {
         result = val;
         result -= (result % 5);
    }
    else  
    {
        result = val;
        result += (5-(result % 5));
    }
    return result;
}
void computer(int size) //3
{
    
    int last = size % 10;
    int penult = size % 100;
    if ((last >= 5 && last <= 9) || (last == 0) ||
        (last >= 2 && last <= 4 && penult == 1)
        ) {
        cout << size << " компьютеров" << endl;
    }

    if ((last == 1 && penult != 1)||(last == 1 && size == 1) ) {
        cout << size << " компьютер" << endl;
    }

    if (last >= 2 && last <= 4 && penult != 1) {
        cout << size << " компьютера" << endl;
    }
}//3
bool prime_number(const int N)//4
{
    if (N < 2)
    {
        cout << "error";
        exit(0);
    }
    else
    {
        for (int i = 2;i * i <= N;i++)
            if (N % i == 0)
                return false;
        return true;
    }
}



int main()
{
    //setlocale(LC_ALL, "Russian");
    //const char *example[] ={ "NN","Moscow","Luxembourg","frfs"};
    //  cout << return_string(example) <<endl; 
    //cout<<rounding(21.5);
    // computer(25);
    //computer(41);
    //computer(1048);
    //cout<< prime_number(4);
    //cout << prime_number(2);
    //cout << prime_number(1);

    //5
    int array1[] = { 7, 17, 1, 9, 1, 17, 56, 56, 23 };
    int array2[] = { 56, 17, 17, 1, 23, 34, 23, 1, 8, 1 };

    set<int> res;

    for (int i = 0;i < (sizeof(array1) / sizeof(int));++i)
    {
        for (int j = 0;j < (sizeof(array2) / sizeof(int));++j)
        {
            if (array1[i] == array2[j])
            {
                res.insert(array1[i]);
            }
        }
    }

    int* result = new int[res.size()];
    for (auto i : res)
    {
\
        cout << i << endl;
    }
    return 0;

}
    


