//This is just a test code, nothing fancy. Just to see if it works.

#include <raylib.h>
using namespace std;

int main(){
    
    InitWindow(750,750, "Snake");

    SetTargetFPS(60);


    while(WindowShouldClose() == false){
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
    cout << "Ayyyeeee shit works!!;

    return 0;

}

