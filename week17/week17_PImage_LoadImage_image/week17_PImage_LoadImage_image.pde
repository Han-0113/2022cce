PImage img;
void setup(){
  size(400,400);
  img = loadImage("2.jpg");
}

void draw(){
  image(img, 0, 0);
}
