#include<iostream>

using namespace std;

class audioclip{
private:
  int channel;
  int resoluiton;
  int sample_rate;
public:
void set_channel(int a)
{
  channel=a;
}
int get_channel(int a)
{
  return channel;
}
void set_resolution(int a)
{
  resoluiton=a;
}
int get_resolution()
{
  return resoluiton;
}
void set_samplerate(int a)
{
  sample_rate=a;
}
int get_samplerate()
{
 return sample_rate;
}
bool studio_quality()
{
  if(channel==2 and resoluiton==24 and sample_rate==88200)
{ return 1; }
  else
  { return 0; }
}

};




int main()
{
audioclip object1;

return 0;
}
