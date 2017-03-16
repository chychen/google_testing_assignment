#include "assignment_1.h"

string Triangle(int a, int b, int c){
    // value validation
    bool isValid = true;
    string invalidEdges = "";
    if(1>a||a>200){
        isValid = false;
        invalidEdges = invalidEdges + "a";
    }
    if(1>b||b>200){
        isValid = false;
        if(invalidEdges==""){
            invalidEdges = invalidEdges + "b";
        }else{
            invalidEdges = invalidEdges + ", b";
        }
    }
    if(1>c||c>200){
        isValid = false;
        if(invalidEdges==""){
            invalidEdges = invalidEdges + "c";
        }else{
            invalidEdges = invalidEdges + ", c";
        }
    }
    if(!isValid){
        return "Value if " + invalidEdges + " is not in the range of permitted values";
    }
    // Is A Triangle?
    if(a<b+c && b<a+c && c<b+c){// Yes
        unsigned type = 0;
        if(a==b)type++;
        if(b==c)type++;
        if(c==a)type++;
        // Determine Triangle Type
        switch(type){
            case 3:
                return "Equilateral";
            case 2:
                //no specific name
            case 1:
                return "Isosceles";
            default:
                return "Scalene";
        }
    }else{// No
        return "Not a triangle";
    }
}

string NextDate(int month, int day, int year){
    return "";
}

string Commission(int locks, int stocks, int barrels){
    return "";
}