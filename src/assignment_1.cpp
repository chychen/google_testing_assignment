#include "assignment_1.h"

using namespace std;

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

bool isLeapYear(int year){
    if (year%4!=0)return false;
    else if (year%100!=0) return true;
    else if (year%400!=0) return false;
    else return true;
}

string NextDate(int month, int day, int year){
    bool isValid = true;
    string validMsg = "";
    if(month<1 || month>12){
        isValid = false;
        validMsg = validMsg + "month not in 1...12";
    } 
    if(day<1 || day>31){
        isValid = false;
        if(validMsg!="") validMsg = validMsg + "\nday not in 1...31";
        else validMsg = validMsg + "day not in 1...31";
    }
    if(year<1812 || year>2012){
        isValid = false;
        if(validMsg!="") validMsg = validMsg + "\nyear not in 1812...2012";
        else validMsg = validMsg + "year not in 1812...2012";
    }
    
    if(!isValid){
        return validMsg;
    }else{
        int tomorrowMonth=month, tomorrowDay=day, tomorrowYear=year;
        if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10){
            if (day<31){
                tomorrowDay = day + 1;
            }else if (day==31){
                tomorrowDay = 1;
                tomorrowMonth = month + 1;
            }else{
                return "Invalid input date";
            }
        }else if (month==4 || month==6 || month==9 || month==11){
            if (day<30){
                tomorrowDay = day + 1;
            }else if (day==30){
                tomorrowDay = 1;
                tomorrowMonth = month + 1;
            }else{
                return "Invalid input date";
            }
        }else if (month==12){
            if (day<31){
                tomorrowDay = day + 1;
            }else if (day==31){
                tomorrowDay = 1;
                tomorrowMonth = 1;
                if (year==2012){
                    return "2012 is over";
                }else{
                    tomorrowYear = year + 1;
                }
            }else{
                return "Invalid input date";
            }
        }else if (month==2){
            if (day<28){
                tomorrowDay = day + 1;
            }else if (day==28){
                if (isLeapYear(year)){
                    tomorrowDay = 29;
                }else{
                    tomorrowDay = 1;
                    tomorrowMonth = 3;
                }
            }else if (day==29){
                if (isLeapYear(year)){
                    tomorrowDay = 1;
                    tomorrowMonth = 3;
                }else{
                    return "Invalid input date";
                }
            }else{
                return "Invalid input date";
            }
        }
        return to_string(tomorrowMonth) + "/" + to_string(tomorrowDay) + "/" + to_string(tomorrowYear);
    }
}

string Commission(int locks, int stocks, int barrels){
    return "";
}