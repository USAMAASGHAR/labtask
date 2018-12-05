#include<iostream>

using namespace std;

class audioclip{
private:
  int channel;
  int resolution;
  int sample_rate;
public:
audioclip()
{
  channel = 1;
  resolution = 8;
  sample_rate = 22050;
}
void set_channel(int c)
{
if(c==1 or c==2)
  { channel=c; }
  else
  {
    cout<<"wrong Entry";
      }
}
int get_channel(int a)
{
  return channel;
}
void set_resolution(int a)
{
  if(resolution==8 or resolution==16 or resolution==24)
  { resolution=a; }
  else {
    cout<<"wrong entry";
  }
}
int get_resolution()
{
  return resolution;
}
void set_samplerate(int a)
{
  if(sample_rate==44100 or sample_rate==22050 or sample_rate==88200)
  {  sample_rate=a; }
  else {cout<< "wrong Entry"; }
}
int get_samplerate()
{
 return sample_rate;
}
bool studio_quality()
{
  if(channel==2 and resolution==24 and sample_rate==88200)
{ return true; }
  else
  { return false; }
}
int data_size(int d)
{
  int b;
  b=(d*channel*resolution*sample_rate)/8;
  return b;
}
};




int main()
{
audioclip object1;
object1.set_channel(4);
if(object1.studio_quality()==0)
{ cout<<"studio Quality  " << "false"; }
else
{ cout<<"True"<<endl; }
cout<<endl<<"data size  "<< object1.data_size(5)<<endl;
return 0;
}
