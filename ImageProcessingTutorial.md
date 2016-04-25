S T E P S : 

1 - import img into oF sketch
2 - set up target color 
	-we used mouse location
3 - get float values from target ofColor
4 - look at each pixel in the frame (for loops)
5 - pull pixel color and break into floats
6 - compare float values
7- change the image properties based on the values received drawLine, setColor
           
           

# Image Processing 

In this tutorial we will manipulate the image accessing the pixelData using getColor() function

## 1 Upload and draw the image.
- Declare the image object using openFrameworks object ofImage in your header file (.h). 
- Load the image from a folder using .loadImage(). Images are usually placed in the bin/data folder of your sketch.
- Draw the image by using the draw() method of ofImage and passing (x,y) coordinates for the top-left corner of the image. If you run your code, you should be able to see your image displayed.

###ofApp.h
```javasc
ofImage myImage; 
```

###ofApp.cpp file 
```
void ofApp::setup(){
	myImage.loadImage("yourFileName.jpg"); 
}

void ofApp:draw(){
	myImage.draw(x, y); 
}
```

## Set up a target color value
Now then we have our image loaded, we can set a target value of the color that we want to manipulate based on the mouse position. In your header file declare 3 float for each of the RGB values respectively
```javas
     ###ofApp.h file 
        float green;
        float blue;
        float red;        
        float count;
  ```      
In your .cpp file using ofColor and .getColor() get the color values of the current pixel based on the mouse position. Now, when you have the color value, separate them into individual R, G and B channels using dot notation.

```java
    ofColor currentCol = myImage.getColor(ofGetMouseX(), ofGetMouseY());
    red = currentCol.r;
    green = currentCol.g;
    blue = currentCol.b;
``

## Looking at Each Pixel in the Frame

On each frame update we need to cycle through all the pixels on the screen and compare their color values with our selected values. 
To do this we will use two for loops:

``` javascript
for(int i = 0; i < width; i++){
        
        for(int j = 0; j < height; j++){
            
        }
     cout << count << endl;  //this will be referenced later but just prints out the number of pixels that match the above constraints      
}
```

* One to iterate through the collumns of pixels
* The second to iterate through the rows of pixels

By putting the second for loop inside the first we are checking each pixel from y = 0 to y = height all at x = 0. Then we check from y = 0 to y = height at x = 1 and so on. 


## Pulling Color Data from a Pixel
Inside the second for loop we write this:

```javascript
ofColor pixColor = myImage.getColor(i,j);
checkRed = pixColor.r;
checkBlue = pixColor.b;
checkGreen = pixColor.g;
```
These lines assign the color of the current pixel being checked to a variable and then parses out the r, g, and b values.

## Comparing the values
Here we just use a simple if statement
```javascript
 if(red == checkRed && green == checkGreen && blue == checkBlue){
                
}
```
This checks to see if the current pixel's r, g, and b values are equal to our chosen r, g, and b values.

## Changes Made to Pixels with Similar Color
In the code shown here, we are drawing a line from our original pixel to all of the pixels that are the same color. 

```javascript
if(red == checkRed && green == checkGreen && blue == checkBlue){
                
    count++;  //this gives us the number of pixels that match
    ofDrawLine(i,j,ofGetMouseX(),ofGetMouseY());
                
}
```

We use i and j because when placed in the for loops above, these variables reference the coordinates of the pixel that has the same color as our selected pixel. 

