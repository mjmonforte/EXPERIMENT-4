//
//  PROBLEM 2.cpp
//  EXPERIMENT 4
//
//  Created by Mj Monforte on 21/05/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include<iostream>

using namespace std;

int main()
{
    int i,j,n,loc,temp,min,a[30];
    cout << "Selection Sorting...\n";
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the elements: \n\n";
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout << "\nYour Data: ";
    for(i=0;i<n;i++)
    {
        std::cout<< a[i] << ' ';
    }
    cout << "\n\n";
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    
    
    cout << "After using selection sort...\n\n";
    cout << "Sorted data: \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
