//https://leetcode.com/problems/rectangle-area/

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
       int a1 = (C - A) * (D - B);
        int a2 = (G - E) * (H - F); 
        if(A >= G || C <= E || D <= F || B >= H){
            return a1+a2 ;
        }
        else{
            int common_area = (min(G,C)-max(E,A))*(min(D,H)-max(B,F));
            cout<<common_area;
            return a1-common_area+a2;
        } 
    }
};