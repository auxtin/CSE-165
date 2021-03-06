#include <iostream>
#include <cmath>

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif


using namespace std;

// Store the width and height of the window
int width = 640, height = 640;


//-------------------------------------------------------
// A function to draw the scene
//-------------------------------------------------------
void appDrawScene() {
	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Set background color to black
	glClearColor(0.0, 0.0, 0.0, 1.0);

	// Set up the transformations stack
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    

    // Draw stuff here
    
    //Circle Code
//    glColor3f(0.0, 1.0, 0.0); //make the circle green
//
//
//    float theta = 0;
//
//    float thetaInc = M_PI/100;
//
//    float radius = 0.5;
//
//    float xOffset = 0.3;
//
//    float yOffset = 0.2;
//
//
//    glBegin(GL_POLYGON);
//
//    for (theta; theta < 2*M_PI; theta+=thetaInc) {
//        glVertex2f(radius * cos(theta) + xOffset, radius * sin(theta) + yOffset);
//    }
//
//    glEnd();
    
    //Axis Code
//    glColor3f(0.0, 0.0, 1.0);
//
//    glLineWidth(1);
//
//    glBegin(GL_LINES);
//
//    glVertex3f(-1.0, 0.0, 0.5);
//    glVertex3f(1.0, 0.0, 0.5);
//
//    glVertex3f(0.0, 1.0, 0.5);
//    glVertex3f(0.0, -1.0, 0.5);
//
//    glEnd();
    
    //
    //------------------------------------------------------------------------------
    //holes in the letters
    
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    //triangle in 'A'
    glVertex3f(-.8125, .13, 0);
    glVertex3f(-.84, .02, 0);
    glVertex3f(-.7825, .02, 0);
    
    glEnd();
    
    //rectangle in 'U'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(-.385, .2, 0); //1
    glVertex3f(-.385, -.16, 0); //2
    glVertex3f(-.590, -.16, 0); //3
    glVertex3f(-.590, .2, 0); //4
    
    glEnd();
    
    //top rectangle in 'S'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(-.025, .17, 0); //1
    glVertex3f(-.025, .015, 0); //2
    glVertex3f(-.27, .015, 0); //3
    glVertex3f(-.27, .17, 0); //4

    
    glEnd();
    
    //bottom rectangle in 'S'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(-.3, -.015, 0); //1
    glVertex3f(-.3, -.17, 0); //2
    glVertex3f(-.055, -.17, 0); //3
    glVertex3f(-.055, -.015, 0); //4
    
    glEnd();
    
    //left rectangle in 'T'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(.025, .17, 0); //1
    glVertex3f(.025, -.2, 0); //2
    glVertex3f(.1425, -.2, 0); //3
    glVertex3f(.1425, .17, 0); //4
    
    glEnd();
    
    //right rectangle in 'T'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(.3, .17, 0); //1
    glVertex3f(.3, -.2, 0); //2
    glVertex3f(.1825, -.2, 0); //3
    glVertex3f(.1825, .17, 0); //4
    
    glEnd();
    
    //left rectangle in 'I'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(.35, .17, 0); //1
    glVertex3f(.35, -.17, 0); //2
    glVertex3f(.4725, -.17, 0); //3
    glVertex3f(.4725, .17, 0); //4
    
    glEnd();
    
    //right rectangle in 'I'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(.625, .17, 0); //1
    glVertex3f(.625, -.17, 0); //2
    glVertex3f(.505, -.17, 0); //3
    glVertex3f(.505, .17, 0); //4
    
    glEnd();
    
    //left triangle in 'N'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(.705,-.2, 0); //1
    glVertex3f(.705, .145, 0); //2
    glVertex3f(.92, -.2, 0); //3
    
    glEnd();
    
    //right triangle in 'N'
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    
    glVertex3f(.705, .2, 0); //1
    glVertex3f(.92, .2, 0); //2
    glVertex3f(.92, -.145, 0); //3
    
    glEnd();
    
    
    //------------------------------------------------------------------------------
    //letter A
    //midpoint is .8125
    glColor3f(0, 0, 1);
    
    glBegin(GL_POLYGON);
    
    glVertex3f(-.8125,.2,0); //7
    glVertex3f(-.95, -.2, 0); //1
    glVertex3f(-.92,-.2,0); //2
    glVertex3f(-.855,-.02,0); //3
    glVertex3f(-.765,-.02,0); //4
    glVertex3f(-.71,-.2,0); //5
    glVertex3f(-.675,-.2,0); //6

    glEnd();

    //letter U
    glColor3f(1, 0, 0);
    
    glBegin(GL_POLYGON);
    
    glVertex3f(-.625, .2, 0); //1
    glVertex3f(-.625, -.2, 0); //2
    glVertex3f(-.35, -.2, 0); //3
    glVertex3f(-.35, .2, 0); //4
    
    glEnd();

    //letter S | bottom left ccw
    glColor3f(1, 1, 0);
    
    glBegin(GL_POLYGON);
    
    glVertex3f(-.30, -.2, 0); //1
    glVertex3f(-.025, -.2, 0); //2
    glVertex3f(-.025, .2, 0); //3
    glVertex3f(-.3, .2, 0); //4
    
    glEnd();
    
    //letter T | midpoint is .1625
    glColor3f(0, 0, 1 );
    
    glBegin(GL_POLYGON);
    
    glVertex3f(.025, -.2, 0); //1
    glVertex3f(.3, -.2, 0); //2
    glVertex3f(.3, .2, 0); //3
    glVertex3f(.025, .2, 0); //4
    
    glEnd();
    
    //letter I | midpoint .4925
    
    glColor3f(0, 1, 0);
    
    glBegin(GL_POLYGON);
    
    glVertex3f(.35, .2, 0);
    glVertex3f(.35, -.2, 0);
    glVertex3f(.625, -.2, 0);
    glVertex3f(.625, .2, 0);
    
    glEnd();
    
    //letter N
    
    glColor3f(1, 0, 0);
    
    glBegin(GL_POLYGON);
    
    glVertex3f(.675, -.2, 0);
    glVertex3f(.95, -.2, 0);
    glVertex3f(.95, .2, 0);
    glVertex3f(.675, .2, 0);
    
    glEnd();
    
    
    
    //guide for each letter -- found by dividing my name by available space.
    //Available space = .95*2(from left marin to right margin) - .05*5(space between each letter) = 1.65
    //space for each letter = 1.65/6 = .275
    glColor3f(0, 1, 1);
    glLineWidth(20);
    
    glBegin(GL_LINES);
    
//    glVertex3f(-.95, -.2, 0); //A
//    glVertex3f(-.675, -.2, 0);
    
//    glVertex3f(-.625, -.2, 0); //U
//    glVertex3f(-.35, -.2, 0);

//    glVertex3f(-.30, -.2, 0);//S
//    glVertex3f(-.025, -.2, 0);
    
//    glVertex3f(.025, -.2, 0);//T
//    glVertex3f(.3, -.2, 0);
    
//    glVertex3f(.35, -.2, 0);//I
//    glVertex3f(.625, -.2, 0);
    
//    glVertex3f(.675, -.2, 0);//N
//    glVertex3f(.95, -.2, 0);

    glEnd();
    
//    //let's make a guide for the height of my name denoted by this rectangle
//    glBegin(GL_POLYGON);
//    glColor3f(1, 1, 0); //yellow
//
//    glVertex3f(.95, .2, 0);
//    glVertex3f(.95, -.2, 0);
//    glVertex3f(-.95, -.2, 0);
//    glVertex3f(-.95, .2, 0);
//
//    glEnd();
    
    //
//    glBegin(GL_POLYGON);
//
//    glColor3f(1.0, 0.0, 0.0); //red
//
//
//
//    glVertex3f(0.9, 0.9, 0.0);
//    glVertex3f(0.9, -0.9, 0.0);
//    glVertex3f(-0.9, -0.9, 0.0);
//    glVertex3f(-0.9, 0.9, 0.0);
//
//    glEnd();
	// We have been drawing everything to the back buffer
	// Swap the buffers to see the result of what we drew
	glFlush();
	glutSwapBuffers();
}

//-------------------------------------------------------
// A function to convert window coordinates to scene
// We use it when a mouse event is handled
// Arguments: 	
//	x, y - the coordinates to be updated
//-------------------------------------------------------
void windowToScene(float& x, float& y) {
	x = (2.0f*(x / float(width))) - 1.0f;
	y = 1.0f - (2.0f*(y / float(height)));
}

//-------------------------------------------------------
// A function to handle window resizing
// Called every time the window is resized
// Arguments: 	
//	b    - mouse button that was clicked, left or right
//	s 	 - state, either mouse-up or mouse-down
//	x, y - coordinates of the mouse when click occured
//-------------------------------------------------------
void appReshapeFunc(int w, int h) {
	// Window size has changed
	width = w;
	height = h;

	double scale, center;
	double winXmin, winXmax, winYmin, winYmax;

	// Define x-axis and y-axis range
	const double appXmin = -1.0;
	const double appXmax = 1.0;
	const double appYmin = -1.0;
	const double appYmax = 1.0;

	// Define that OpenGL should use the whole window for rendering
	glViewport(0, 0, w, h);

	// Set up the projection matrix using a orthographic projection that will
	// maintain the aspect ratio of the scene no matter the aspect ratio of
	// the window, and also set the min/max coordinates to be the disered ones
	w = (w == 0) ? 1 : w;
	h = (h == 0) ? 1 : h;

	if ((appXmax - appXmin) / w < (appYmax - appYmin) / h) {
		scale = ((appYmax - appYmin) / h) / ((appXmax - appXmin) / w);
		center = (appXmax + appXmin) / 2;
		winXmin = center - (center - appXmin)*scale;
		winXmax = center + (appXmax - center)*scale;
		winYmin = appYmin;
		winYmax = appYmax;
	}
	else {
		scale = ((appXmax - appXmin) / w) / ((appYmax - appYmin) / h);
		center = (appYmax + appYmin) / 2;
		winYmin = center - (center - appYmin)*scale;
		winYmax = center + (appYmax - center)*scale;
		winXmin = appXmin;
		winXmax = appXmax;
	}

	// Now we use glOrtho to set up our viewing frustum
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(winXmin, winXmax, winYmin, winYmax, -1, 1);
}


//-------------------------------------------------------
// A function to handle mouse clicks
// Called every time the mouse button goes up or down
// Arguments: 	
//	b    - mouse button that was clicked, left or right
//	s 	 - state, either mouse-up or mouse-down
//	x, y - coordinates of the mouse when click occured
//-------------------------------------------------------
void appMouseFunc(int b, int s, int x, int y) {
	// Convert from Window to Scene coordinates
	float mx = (float)x;
	float my = (float)y;

	windowToScene(mx, my);

	// Redraw the scene by calling appDrawScene above
	// so that the point we added above will get painted
	glutPostRedisplay();
}

//-------------------------------------------------------
// A function to handle mouse dragging
// Called every time mouse moves while button held down
// Arguments: 	
//	x, y - current coordinates of the mouse
//-------------------------------------------------------
void appMotionFunc(int x, int y) {

	// Again, we redraw the scene
	glutPostRedisplay();
}

//-------------------------------------------------------
// A function to handle keyboard events
// Called every time a key is pressed on the keyboard
// Arguments: 	
//	key  - the key that was pressed
//	x, y - coordinates of the mouse when key is pressed
//-------------------------------------------------------
void appKeyboardFunc(unsigned char key, int x, int y) {
	
    switch (key) {
        case 27:
            exit(0);
            break;
        default:
            break;
    }

	// After all the state changes, redraw the scene
	glutPostRedisplay();
}


void idle() {

}


int main(int argc, char** argv) {
	// Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

	// Setup window position, size, and title
	glutInitWindowPosition(20, 60);
	glutInitWindowSize(width, height);
	glutCreateWindow("CSE165 OpenGL Demo");

	// Setup some OpenGL options
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_LINE_SMOOTH);


	// Set callback for drawing the scene
	glutDisplayFunc(appDrawScene);

	// Set callback for resizing th window
    glutReshapeFunc(appReshapeFunc);

	// Set callback to handle mouse clicks
	glutMouseFunc(appMouseFunc);

	// Set callback to handle mouse dragging
	glutMotionFunc(appMotionFunc);

	// Set callback to handle keyboad events
	glutKeyboardFunc(appKeyboardFunc);
    
    glutIdleFunc(idle);

	// Start the main loop
	glutMainLoop();
}
