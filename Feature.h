class FeatureDescriptor
{
//image attribution
string videosName;
int frame;//the image in videos number
Bbox bbox;//the person's bounding box;
Time  time;//capture time
Location loc;//capture location

//person  feature
Dress dress;
Image face;
bool gender;  //0 is man,-1 is unknow, else is women;
int *deepFeature;  
}


struct Bbox
{
  public:
  Bbox(int x1, int y1, int x2, int y2):left_up(x1, y1), right_down(x2, y2) { }
  Bbox(cv::point2d a, cv::point2d b):left_up(a), right_down(b) { }
  public:
  cv::point2d left_up;
  cv::point2d right_down;
}

class Image
{
  
}

struct Dress
{
  bool hat=0;
  bool eyeglasses=0;
}

struct Location
{
  string province;
  string urban;
  string Area;
}

struct Time
{
  string year;
  string month;
  string day;
  string hour;
  string mint;
  string seconds;
}
