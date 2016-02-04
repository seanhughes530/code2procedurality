class Ball{
  
  float xPos, yPos, xSpeed, ySpeed, diam;
  
  Ball(){
    xPos = 1;
    yPos = 1;
    diam = 10;
    xSpeed = 1;
    ySpeed = 1;
    
  }
  
  void create(){
    xPos = mouseX;
    yPos = mouseY;
    
    xSpeed = random(-3,3);
    ySpeed = random(-3,3);
  }
  
  void update(){
    ellipse(xPos, yPos, diam, diam);
    fill(random(0,255), random(0,255), random(0,255));
    
    xPos += xSpeed;
    yPos += ySpeed;
    
    if( (xPos-(diam/2)) <= 0 || (xPos+(diam/2)) >= width){
      xSpeed*=-1;
    } else if( (yPos-(diam/2)) <= 0 || (yPos+(diam/2)) >= height){
      ySpeed*=-1;
    }
    
  } 
  
}
  