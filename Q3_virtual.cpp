// 3.	Multimedia Player with Pure Virtual Function 
// Define an abstract class MediaFile with a pure virtual function play(). Derive classes Audio, Video, and Image, each overriding 
// play() with a different output. Use an array of base pointers to simulate playing mixed media files.
 #include<iostream>
 using namespace std;
 class Mediafile{
    public:
      virtual void play()=0;
 };
 class Audio:public Mediafile{
    public:
      void play(){
        cout<<"playing audio file"<<endl;
      }
 };
  class  video:public Mediafile{
    public:
     void play(){
        cout<<"playing video file"<<endl;
      }
 };
  class  Image:public Mediafile{
    public:
       void play(){
        cout<<"Showing image file"<<endl;
      }
 };
 int main(){
      Audio a;
      video v;
      Image I;
      int i;
     Mediafile *m[3]={&a,&v,&I};
     for(i=0;i<3;i++){
        m[i]->play();
         }

 }
