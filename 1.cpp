#include <iostream>  
#include <string>  
#include <vector>  
#include <fstream>  
#include <sstream>  

using namespace std;  

void read()
{
	ifstream inFile("data.csv", ios::in);  
    string lineStr;  
    vector<vector<string>> strArray;  
    int array[4][6],a1[20],a2[20],a3[20],a4[20],a[20],a6[20];
    int i,j;
    i=0;
    char* end;
    if(inFile.fail())
        cout<<"��ȡ�ļ�ʧ��"<<endl;
    while (getline(inFile, lineStr))  
    {  
        j=0;
        // ��ӡ�����ַ���  
        cout << lineStr << endl;  
        // ��ɶ�ά��ṹ  
        stringstream ss(lineStr);  
        string str;  
        vector<string> lineArray;  
        // ���ն��ŷָ�  
        while (getline(ss, str, ','))  
        {
            array[i][j]=static_cast<int>(strtol(str.c_str(),&end,10));              //string -> int
            j++;
        }
        i++;     
   //     strArray.push_back(lineArray);  
    }  

	for(int i = 0;i < 6;i++)
	{
		for(int j = 1;j < 5;j++)
		{
			printf("%d",array[j][i]);			
		}
		printf("\n");
	}
    getchar();
		
}

void main()  
{  
    // д�ļ�  
    //ofstream outFile;  
    //outFile.open("data.csv", ios::out); // ��ģʽ��ʡ��  
    //outFile << "name" << ',' << "age" << ',' << "hobby" << endl;  
    //outFile << "Mike" << ',' << 18 << ',' << "paiting" << endl;  
    //outFile << "Tom" << ',' << 25 << ',' << "football" << endl;  
    //outFile << "Jack" << ',' << 21 << ',' << "music" << endl;  
    //outFile.close();  
	read();
    // ���ļ�  
    
    //return 0;  
}
