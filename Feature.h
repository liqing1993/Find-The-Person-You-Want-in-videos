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


class Bbox
{
  
}

class Image
{

}

class Dress
{


}
