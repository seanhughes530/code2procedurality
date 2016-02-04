Ball[] objects;

void setup(){
  size(800,800);
  
  objects = new Ball[100];
  
  for(int i = 0; i < objects.length; i++){
    objects[i] = new Ball();
  }
  
}

void draw(){
  background(0);
  
  for(int i=0; i<objects.length; i++){
    if(mousePressed){
      objects[i].create();
    }
    
    objects[i].update();
  }
  
}