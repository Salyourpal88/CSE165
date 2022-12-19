#ifndef Mat_h
#define Mat_h

using namespace std;

class Mat {
public:
    static int Identity;
    float q; 
    float w; 
    float e; 
    float r;

    Mat(){
        float q = 0; 
        float w = 0; 
        float e = 0; 
        float r = 0;
    }
    
    Mat(int val){
        this -> q = val;
        this -> w = 0;
        this -> e = 0;
        this -> r = val;
    }
    
    Mat(float q, float w, float e, float r){
        this -> q = q;
        this -> w = w;
        this -> e = e;
        this -> r = r;
    }
    
    Mat operator + (Mat array){
       Mat place;
       place.q = q + array.q;
       place.w = w + array.w;
       place.e = e + array.e;
       place.r = r + array.r;
       return place;
       }
   // allows for a + b

    Mat operator - (Mat array){
       Mat place;
       place.q = q - array.q;
       place.w = w - array.w;
       place.e = e - array.e;
       place.r = r - array.r;
       return place;
   }
   //allows for (a + b) - (4*a)

   Mat operator * (Mat array){
       Mat place;
       place.q = q * array.q + w * array.e;
       place.w = q * array.w + w * array.r;
       place.e = e * array.q + r * array.e;
       place.r = e * array.w + r * array.r;
       return place;
   }
   //allows you to do a*b

   friend Mat operator * (int constant, const Mat& array){
       Mat place;
       place.q = array.q * constant;
       place.w = array.w * constant;
       place.e = array.e * constant;
       place.r = array.r * constant;
       return place;
   } //Allows you to do 4*a 
};

#endif