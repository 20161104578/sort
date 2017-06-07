//
//  main.c
//  sort
//
//  Created by 20161104578 on 17/6/7.
//  Copyright © 2017年 20161104578. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10],i,j,p ;
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        for(i=0;j<9-i;j++)
     if(a[j]>a[j+i])
     {
         p=a[j+i];
         a[j+i]=a[j];
         a[j]=p;
     }
    }
    for(i=0;i<10;i++)
    printf("%d",a[i]);
    
}

