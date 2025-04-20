#include<ncurses.h>
#include<fstream>

#include<vector>
#include<string>

using namespace std;


class Texteditor{
   public:
       Texteditor(const string& filename): filename(filename){
       intitscr();
       raw();
       keypad(stdscr, TRUE);
       noecho();
       loadfile();

    }
    ~Texteditor(){
    endwin();
    }
    void run(){
    int ch;
    while ((ch =getch())!= KEY_F(1)){
    switch (ch){
        case KEY_UP:
            moveCursorUp();
            break;
        case KEY_DOWN:
            moveCursorDown();
            break;
        case KEY_LEFT:
            moveCursorLeft();
            break;
        case KEY_RIGHT:
            moveCursorRight();
            break;
        case KEY_BACKSPACE:
        case 127:
            deleteChar();
            break;
        case '/n':
            insertNewLine();
            break;
        default:
            insertChar(ch);
            break;
    }
    refreshScreen();
    }
    saveFile();

}
   private:
       string filename;
       vector<string> lines;
       int cursorX =0, cursorY =0;

       void loadFile(){
       ifstream file(filename.c_str());
       string line;
       while (getline(fileline)){
        lines.push_back(line);
        }
        if (lines.empty()){
            lines.push_back("");
        }

       }
       void safeFile(){
       ofstream file(filename);
       for(const auto& line : lines){
        file<<line<<'\n';

       }
       }
       void refreshScreen(){
       clear();
       for (size_t i=0; i<lines.size();++i){
       mvprint(i, 0, "%s", lines[i].c_str());
       }
       move(cursorY, cursorX);
       refresh();
       }
       void moveCursorUp(){
       if(cursorY > 0){
        --cursorY;
        cursorX = min(cursorX, (int)lines[cusorY].size()
       }
       }

      void moveCursorDown(){
    if (cursorY < (int)lines.size()-1){
                        ++cursorY;
                        cursorX=min(cursorX,(int)lines[cursorY].size());
                      }
                      }

   void moveCursorRight(){
   if (cursorX < (int)lines[cursorY].size()){
    ++cursorX;
}else if(cursorY < (int)lines.size()-1){
++cursorY;
cursorX=0;
}
   }

   void moveCursorLeft(){
   if(cursorX >0){
    --cursorX;
   }else if(cursorY >0){}
   --cursorY;
   cursorX=lines[cursorY].size();
    moveCursorRight()
   }

   void deleteChar(){
   if (cursorX >0){
    lines[cursorY].erase(cursorX -1, 1);
    --cursorX;

   }else if(cursorY > 0){
   cursorX= lines[cursorY -1].size();
   lines[cursorY -1] += lines[cursorY];
   lines.erase(lines.begin()+ cursorY);
   --cursorY;
      }

   }
   void insertChar(int ch){
   lines[cursorY].insert(cursorX, 1, ch);
   ++cursorX;
   }
   void insertNewLine(){
   string newLine = lines[cursorY].substr(cursorX);
   lines[cursorY] = lines[cursorY].substr(0, cursorX);
   lines.insert(lines.begin() + cursorY + 1, newLine);
   ++cursorY;
   cursorX=0;
   }

};
int main( int argc, char* argv[]){
if(argc != 2){
    printf("Usage: %s <filename>\n", argv[0]);
    return 1;
    Texteditor editor(argv[1]);
    editor.run();
    return 0;
}
return 0;
}
