#ifndef Header_H
#define Header_H
#include <iostream>

using namespace std;

class AppRect{
    public:
    int x, y, w, h;
    AppRect(){
    }
    
    AppRect(int x, int y, int w, int h){
        this -> x = x; 
        this -> y = y;
        this -> w = w;
        this -> h = h;
    }
};

class AppWindow{
    public:
    AppRect r;

    AppWindow(){
    }

    AppWindow(int x, int y, int w, int h){
        r = AppRect(x, y, w, h);
    }

    AppWindow(const AppRect& r){
        this -> r = r;
    }

    const AppRect& rect(){
        return r;
    }

    virtual void resize(int w, int h) = 0;
};

class CircleWin: public AppWindow{
    public:
    int x, y, w, h;

    CircleWin(){
    }

    CircleWin(int x, int y, int w, int h) : AppWindow(x, y, w, h){
    }

    CircleWin(AppRect r) : AppWindow(r){
    }

    void resize(int w, int h){
        cout << ">>Radius : " << min(w,h) << endl;
    }
};

class RectWin: public AppWindow{
    public:
    RectWin(){
    }

    RectWin(int x, int y, int w, int h) : AppWindow(x, y, w, h){
    }

    RectWin(AppRect r) : AppWindow(r){
    }

    void resize(int w, int h){
        cout << ">>Area : " << w * h << endl;
    }
};
#endif