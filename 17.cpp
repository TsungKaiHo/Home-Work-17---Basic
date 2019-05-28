//
//  main.cpp
//  Home Work 17
//
//  Created by 何宗愷 on 2019/5/27.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int i;
    int max = 0;
    printf("請輸入五個數字\n");
    for(i=1;i<=5;i++)
    {
        printf("請輸入第%d個數:\n",i);
        scanf("%d",&num[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    printf("最大的數字為%d\n",max);
    return 0;
}
