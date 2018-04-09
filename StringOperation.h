/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StringOperation.h
 * Author: shivam
 *
 * Created on 9 April, 2018, 9:49 PM
 */

#ifndef STRINGOPERATION_H
#define STRINGOPERATION_H
#include <iostream>
#include <string>

class StringOperation{
private:
   string str;
   char arr[10],res;
   int  i,n,j,count;
public:
    void accept();
    void display();
    void consecutivechar();
    void substring();
    void samechar();
};


#endif /* STRINGOPERATION_H */

