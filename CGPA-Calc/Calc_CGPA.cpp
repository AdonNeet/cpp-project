/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-30 20:25:10.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  

using namespace std;
typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)



float precTwo(float var){
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main()
{ 
    fast_cin();
    int credB, cors, tempb;
    string tempa;
    float cgpaB, sumSGU = 0, sumSGB = 0;
    
    printf("Semester Now: ");
    cin >> tempb;

    if(tempb == 1){
        printf("\nHow many course now: ");
        cin >> cors;

        forn(i, cors){
            printf("[%d] Grade course  : ", i+1);
            cin >> tempa;
            printf("    Credit course : ", i+1);
            cin >> tempb;

            if(tempa == "A") sumSGU += 4*tempb;
            else if(tempa == "AB") sumSGU += 3.5*tempb;
            else if(tempa == "B") sumSGU += 3*tempb;
            else if(tempa == "BC") sumSGU += 2.5*tempb;
            else if(tempa == "C") sumSGU += 2*tempb;
            else if(tempa == "CD") sumSGU += 1.5*tempb;
            else if(tempa == "D") sumSGU += 1*tempb;

            sumSGB += tempb;
        }
        cout << "\nYour CGPA result: " << precTwo(sumSGU/sumSGB);
    }else{
        printf("CGPA before   : ");
        cin >> cgpaB; 
        printf("Credit before : ");
        cin >> credB;
        sumSGU += cgpaB*credB;
        sumSGB += credB;

        printf("\nHow many course now: ");
        cin >> cors;

        forn(i, cors){
            printf("[%d] Grade course  : ", i+1);
            cin >> tempa;
            printf("    Credit course : ", i+1);
            cin >> tempb;

            if(tempa == "A") sumSGU += 4*tempb;
            else if(tempa == "AB") sumSGU += 3.5*tempb;
            else if(tempa == "B") sumSGU += 3*tempb;
            else if(tempa == "BC") sumSGU += 2.5*tempb;
            else if(tempa == "C") sumSGU += 2*tempb;
            else if(tempa == "CD") sumSGU += 1.5*tempb;
            else if(tempa == "D") sumSGU += 1*tempb;

            sumSGB += tempb;
        }
        cout << "\nYour CGPA result: " << precTwo(sumSGU/sumSGB);
    }   
    return 0;
}