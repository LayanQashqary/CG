


//TODO: Final Computer Graphics Project -TRAIN STRATION-

// Thanaa Khalid Alhydary - 442011563
// Ghaidaa Saeed Alghamdi - 442011309
// Faiza Turkestani - 441018012
// Rana Abdulaziz Jaba - 442014404
// Salma Khalid Alotaibi - 442005789
// Layan Abdulaziz Qashqary - 442007113


//Instructor: Huda Alhazmi




#include <GL\glew.h>  // A cross-platform open-source C/C++ extension loading library
#include <stdlib.h>
#include <GL\freeglut.h>   // handle the window-managing operations
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <MMSystem.h>



using namespace std;
#define PI 3.1415926538
GLfloat radius;

//for moving the train
float trainTransValueX;
float trainTransValueY;


//for moving the girl
float girlTransValueX;
float girlTransValueY;
float girlScaleValueX;
float girlScaleValueY;



//for moving the clouds
float xpos = 0;


//for rotating the sunlight
float sunLightRotationValue = 0;

//for lighting on the tree
GLfloat light_ambient[] = { 1.0, 0.0, 0.0, 1.0 };
GLfloat light_diffuse[] = { 0.0, 1.0, 0.0, 1.0 };
GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat light_position[] = { 3.0, 50.0, 10.0, 1.0 };
GLfloat shininess[] = { 120 };









//TODO: ^^^^^^^^^^^^^^^^^^^^^^^^^^^^the train^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

//CIRCLES FOR WHEELS
//draw big gray circle by passing x and y
void draw_circle(float x, float y) {
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.30f, 0.30f, 0.30f);
    radius = 0.09;
    twicePi = 2.0 * PI;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }glEnd();
}


//draw medium dark red circle
void draw_circle2(float x, float y) {//drow circle by passing x and y
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.4f, 0.0f, 0.0f);
    radius = 0.07;
    twicePi = 2.0 * PI;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }glEnd();
}


//draw small red circle
void draw_circle3(float x, float y) {//drow circle by passing x and y
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.6f, 0.0f, 0.0f);
    radius = 0.06;
    twicePi = 2.0 * PI;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }glEnd();
}


//draw mimi gray circle
void draw_circle11(float x, float y) {//drow circle by passing x and y
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.30f, 0.30f, 0.30f);
    radius = 0.04;
    twicePi = 2.0 * PI;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }glEnd();
}


//draw mimi dark red circle
void draw_circle22(float x, float y) {//drow circle by passing x and y
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.4f, 0.0f, 0.0f);
    radius = 0.03;
    twicePi = 2.0 * PI;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }glEnd();
}


//draw mimi red circle
void draw_circle33(float x, float y) {//drow circle by passing x and y
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.6f, 0.0f, 0.0f);
    radius = 0.02;
    twicePi = 2.0 * PI;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }glEnd();
}
//draw gray circle for somke
void draw_circle44(float x, float y, float radius) {
    int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;
    glBegin(GL_TRIANGLE_FAN);
    twicePi = 2.0 * PI;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }glEnd();
}

//draw the first train
void draw_polypon1()
{
    //big red square
    glColor3f(0.6f, 0.0f, 0.0f);//Blue-Green
    glBegin(GL_POLYGON);
    glVertex2f(0.25f, -0.20f);
    glVertex2f(0.55f, -0.20f);
    glVertex2f(0.55f, -0.60f);
    glVertex2f(0.25f, -0.60f);
    glEnd();
    //roof
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.4f, 0.0f, 0.0f);//brown
    glVertex2f(0.24f, -0.20f);
    glVertex2f(0.56f, -0.20f);
    glEnd();
    //dark red back window
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);//dark red
    glVertex2f(0.34f, -0.24f);
    glVertex2f(0.46f, -0.24f);
    glVertex2f(0.46f, -0.41f);
    glVertex2f(0.34f, -0.41f);
    glEnd();
    //window
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.9, 1.0, 1.0);//baby blue
    glVertex2f(0.35f, -0.25f);
    glVertex2f(0.45f, -0.25f);
    glVertex2f(0.45f, -0.40f);
    glVertex2f(0.35f, -0.40f);
    glEnd();
    //pink square under the window
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.4, 0.4);//pink
    glVertex2f(0.30f, -0.43f);
    glVertex2f(0.50f, -0.43f);
    glVertex2f(0.50f, -0.53f);
    glVertex2f(0.30f, -0.53f);
    glEnd();
    //front square
    glColor3f(0.3f, 0.3f, 0.3f);//orange-brown
    glBegin(GL_POLYGON);
    glVertex2f(0.55f, -0.40f);
    glVertex2f(0.80f, -0.40f);
    glVertex2f(0.80f, -0.60f);
    glVertex2f(0.55f, -0.60f);
    glEnd();
    //orange lines
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.50f, 0.0f);//
    glVertex2f(0.62f, -0.40f);
    glVertex2f(0.62f, -0.60f);
    glEnd();
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.50f, 0.0f);//
    glVertex2f(0.68f, -0.40f);
    glVertex2f(0.68f, -0.60f);
    glEnd();
    //detail to front of train
    //line
    glLineWidth(6.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.2f, 0.0f, 0.0f);//dark brown
    glVertex2f(0.807f, -0.41f);
    glVertex2f(0.807f, -0.48f);
    glEnd();
    //triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.8f, 0.5f, 0.5f);
    glVertex2f(0.80f, -0.60f);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.80f, -0.72f);
    glEnd();
    //somke
    glColor3f(0.32f, 0.32f, 0.32f);
    draw_circle44(0.4, -0.01, 0.099);
    glColor3f(0.32f, 0.32f, 0.32f);
    draw_circle44(0.5, -0.01, 0.09);
    glColor4f(0.4f, 0.4f, 0.4f, 0.5);
    draw_circle44(0.5, -0.05, 0.083);
    glColor4f(0.4f, 0.4f, 0.4f, 0.5);
    draw_circle44(0.6, -0.05, 0.078);
    glColor4f(0.4f, 0.4f, 0.4f, 0.5);
    draw_circle44(0.7, -0.1, 0.078);
    glColor4f(0.45f, 0.45f, 0.45f, 0.0);
    draw_circle44(0.7, -0.15, 0.075);
    glColor4f(0.45f, 0.45f, 0.45f, 0.5);
    draw_circle44(0.747, -0.2, 0.05);
    glColor4f(0.45f, 0.45f, 0.45f, 0.0);
    draw_circle44(0.735, -0.23, 0.035);
    //chimney
    //chimney body
    glColor3f(0.7, 0.7, 0.7);//gray
    glBegin(GL_POLYGON);
    glVertex2f(0.70f, -0.25f);
    glVertex2f(0.77f, -0.25f);
    glVertex2f(0.77f, -0.40f);
    glVertex2f(0.70f, -0.40f);
    glEnd();
    //roof for chimney
    glLineWidth(5.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.2f, 0.0f, 0.0f);//brown
    glVertex2f(0.70f, -0.25f);
    glVertex2f(0.77f, -0.25f);
    glEnd();
    //gray line under the train
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.40f, 0.40f, 0.40f);
    glVertex2f(0.80f, -0.60f);
    glVertex2f(0.25f, -0.60f);
    glEnd();
    //black rectangle under the train
    glColor3f(-.0f, 0.0f, 0.0f);//orange-brown
    glBegin(GL_POLYGON);
    glVertex2f(0.80f, -0.60f);
    glVertex2f(0.25f, -0.60f);
    glVertex2f(0.25f, -0.72f);
    glVertex2f(0.80f, -0.72f);
    glEnd();
    //wheels
    draw_circle(0.34, -0.7);
    draw_circle(0.53, -0.7);
    draw_circle2(0.34, -0.7);
    draw_circle2(0.53, -0.7);
    draw_circle3(0.34, -0.7);
    draw_circle3(0.53, -0.7);
    draw_circle11(0.66, -0.73);
    draw_circle11(0.75, -0.73);
    draw_circle22(0.66, -0.73);
    draw_circle22(0.75, -0.73);
    draw_circle33(0.66, -0.73);
    draw_circle33(0.75, -0.73);
    //linker
    glLineWidth(6.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.2f, 0.0f, 0.0f);//brown
    glVertex2f(0.2f, -0.58f);
    glVertex2f(0.25f, -0.58f);
    glEnd();


}




//draw the secend train
void draw_polypon2() {
    //big red square
    glColor3f(0.6f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.3f, -0.30f);
    glVertex2f(0.20f, -0.30f);
    glVertex2f(0.20f, -0.72f);
    glVertex2f(-0.3f, -0.72f);
    glEnd();
    //red back window1
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);//dark red
    glVertex2f(-0.25f, -0.50f);
    glVertex2f(-0.12f, -0.50f);
    glVertex2f(-0.12f, -0.32f);
    glVertex2f(-0.25f, -0.32f);
    glEnd();
    //window1
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.9, 1.0, 1.0);//baby blue
    glVertex2f(-0.24f, -0.49f);
    glVertex2f(-0.13f, -0.49f);
    glVertex2f(-0.13f, -0.33f);
    glVertex2f(-0.24f, -0.33f);
    glEnd();
    //red back window2
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);//dark red
    glVertex2f(-0.10f, -0.50f);
    glVertex2f(0.03f, -0.50f);
    glVertex2f(0.03f, -0.32f);
    glVertex2f(-0.10f, -0.32f);
    glEnd();
    //window2
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.9, 1.0, 1.0);//baby blue
    glVertex2f(-0.09f, -0.49f);
    glVertex2f(0.02f, -0.49f);
    glVertex2f(0.02f, -0.33f);
    glVertex2f(-0.09f, -0.33f);
    glEnd();
    //red back window3
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);//dark red
    glVertex2f(0.06f, -0.50f);
    glVertex2f(0.18f, -0.50f);
    glVertex2f(0.18f, -0.32f);
    glVertex2f(0.06f, -0.32f);
    glEnd();
    //window3
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.9, 1.0, 1.0);//baby blue
    glVertex2f(0.07f, -0.49f);
    glVertex2f(0.17f, -0.49f);
    glVertex2f(0.17f, -0.33f);
    glVertex2f(0.07f, -0.33f);
    glEnd();
    //roof
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.4f, 0.0f, 0.0f);
    glVertex2f(-0.3f, -0.30f);
    glVertex2f(0.20f, -0.30f);
    glEnd();
    //gray line under the train
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.40f, 0.40f, 0.40f);//
    glVertex2f(-0.3f, -0.60f);
    glVertex2f(0.20f, -0.60f);
    glEnd();
    //black rectangle under the train
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.3f, -0.60f);
    glVertex2f(0.20f, -0.60f);
    glVertex2f(0.20f, -0.72f);
    glVertex2f(-0.3f, -0.72f);
    glEnd();
    //wheels
    draw_circle(-0.2, -0.7);
    draw_circle(0.1, -0.7);
    draw_circle2(-0.2, -0.7);
    draw_circle2(0.1, -0.7);
    draw_circle3(-0.2, -0.7);
    draw_circle3(0.1, -0.7);
    draw_circle11(-0.05, -0.73);
    draw_circle22(-0.05, -0.73);
    draw_circle33(-0.05, -0.73);
    //linker
    glLineWidth(6.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.2f, 0.0f, 0.0f);//brown
    glVertex2f(-0.3f, -0.58f);
    glVertex2f(-0.4f, -0.58f);
    glEnd();
}


//draw the third train
void draw_polypon3() {
    //big red square
    glColor3f(0.6f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.85f, -0.60f);
    glVertex2f(-0.35f, -0.60f);
    glVertex2f(-0.35f, -0.30f);
    glVertex2f(-0.85f, -0.30f);
    glEnd();
    //red back window
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);//dark red
    glVertex2f(-0.78f, -0.32f);
    glVertex2f(-0.65f, -0.32f);
    glVertex2f(-0.65f, -0.50f);
    glVertex2f(-0.78f, -0.50f);
    glEnd();
    //window
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.9, 1.0, 1.0);//baby blue
    glVertex2f(-0.77f, -0.33f);
    glVertex2f(-0.66f, -0.33f);
    glVertex2f(-0.66f, -0.49f);
    glVertex2f(-0.77f, -0.49f);
    glEnd();
    //roof
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.35f, -0.30f);
    glVertex2f(-0.85f, -0.30f);
    glEnd();
    //door
    draw_circle(-0.45, -0.4);
    glColor3f(0.30f, 0.30f, 0.30f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.54f, -0.4f);
    glVertex2f(-0.36f, -0.4f);
    glVertex2f(-0.36f, -0.60f);
    glVertex2f(-0.54f, -0.60f);
    glEnd();
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.48f, -0.50f);
    glVertex2f(-0.52f, -0.50f);
    glEnd();
    //gray line under the train
    glLineWidth(10.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.40f, 0.40f, 0.40f);//
    glVertex2f(-0.85f, -0.60f);
    glVertex2f(-0.35f, -0.60f);
    glEnd();
    //black rectangle under the train
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.85f, -0.60f);
    glVertex2f(-0.35f, -0.60f);
    glVertex2f(-0.35f, -0.72f);
    glVertex2f(-0.85f, -0.72f);
    glEnd();
    //wheels
    draw_circle(-0.45, -0.7);
    draw_circle(-0.75, -0.7);
    draw_circle2(-0.45, -0.7);
    draw_circle2(-0.75, -0.7);
    draw_circle3(-0.45, -0.7);
    draw_circle3(-0.75, -0.7);
    draw_circle11(-0.60, -0.73);
    draw_circle22(-0.60, -0.73);
    draw_circle33(-0.60, -0.73);
}




//TODO: ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^the building ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

void draw_building()
{


    //down back square
    glBegin(GL_POLYGON);
    glColor3ub(118, 95, 72);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5, 0.2f);
    glVertex2f(-0.5f, 0.2f);
    glEnd();

    //up back square
    glBegin(GL_POLYGON);
    glColor3ub(118, 95, 72);
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(-0.3f, 0.5f);
    glEnd();



    //the door
    glBegin(GL_POLYGON);
    glColor3ub(39, 38, 36);
    glVertex2f(-0.08f, -0.5f);
    glVertex2f(0.08f, -0.5f);
    glVertex2f(0.08, -0.2f);
    glVertex2f(-0.08f, -0.2f);
    glEnd();

    //left rec
    glBegin(GL_POLYGON);
    glColor3ub(240, 178, 122);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.3, .43f);
    glVertex2f(-0.1f, .4f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.11f, -0.5f);
    glVertex2f(-0.12f, -0.5f);
    glVertex2f(-0.12, .4f);
    glVertex2f(-0.11f, .4f);
    glEnd();


    //right rec
    glBegin(GL_POLYGON);
    glColor3ub(240, 178, 122);
    glVertex2f(0.1f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3, .43f);
    glVertex2f(0.1f, .4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.11f, -0.5f);
    glVertex2f(0.12f, -0.5f);
    glVertex2f(0.12, .4f);
    glVertex2f(0.11f, .4f);
    glEnd();

    //  right window
    glBegin(GL_POLYGON);
    glColor3ub(104, 178, 216);
    glVertex2f(-0.14f, 0.25f);
    glVertex2f(-0.27f, 0.25f);
    glVertex2f(-0.27f, -0.35f);
    glVertex2f(-0.14f, -0.35f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.21, 0.25);
    glVertex2f(-0.21, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.27, 0.12);
    glVertex2f(-0.14, 0.12);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.27, -0.2);
    glVertex2f(-0.14, -0.2);
    glEnd();

    // left window
    glBegin(GL_POLYGON);
    glColor3ub(104, 178, 216);
    glVertex2f(0.14f, 0.25f);
    glVertex2f(0.27f, 0.25f);
    glVertex2f(0.27f, -0.35f);
    glVertex2f(0.14f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.20, 0.25);
    glVertex2f(0.20, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.14, 0.12);
    glVertex2f(0.27, 0.12);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.14, -0.2);
    glVertex2f(0.27, -0.2);
    glEnd();

    //base line
    glLineWidth(20.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, -0.50f);
    glVertex2f(0.5f, -0.50f);
    glEnd();

    //base line
    glLineWidth(25.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.52f, -0.520f);
    glVertex2f(0.52f, -0.52f);
    glEnd();

    //base line
    glLineWidth(30.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.54f, -0.541f);
    glVertex2f(0.54f, -0.541f);
    glEnd();

    //top roof
    glPushMatrix();
    glLineWidth(20.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.32f, 0.5f);
    glVertex2f(-0.32f, 0.5f);
    glEnd();
    glPopMatrix();


}

//TODO: ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^the sunlight^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

void sunlight() {
    glColor3ub(227, 251, 254);

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, 0.55);
    glVertex2f(2.5, 2.5);
    glVertex2f(1.5, 3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, 0.55);
    glVertex2f(2.5, -0.5);
    glVertex2f(2, -1.5);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, 0.55);
    glVertex2f(-0.5, -2.5);
    glVertex2f(-1.5, -3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, 0.55);
    glVertex2f(-3, 0);
    glVertex2f(-3, -1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, 0.55);
    glVertex2f(-2, 3.5);
    glVertex2f(-2.5, 2.5);
    glEnd();

}




//TODO: ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ the girl code ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
void draw_leg() {

    glLineWidth(4.0f);
    glColor3f(0.1f, 0.1f, 0.0f);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glVertex2f(-0.05f, -0.5f);
    glVertex2f(-0.05f, -1.1f);
    glEnd();

}


void draw_circleGirl() {

    float x, y;
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249, 223, 183);
    x = 0; y = 0; radius = 0.2;
    twicePi = 2.0 * PI;

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void draw_girl() {
    //draw the legs:
    glPushMatrix();
    glTranslatef(0.1, 0, 0);
    draw_leg();
    glPopMatrix();
    draw_leg();

    //draw the body

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.2f, -0.9f);
    glVertex2f(0.20f, -0.9f);
    glVertex2f(0.0f, 0.1f);
    glEnd();



    //draw the head
    draw_circleGirl();

    //darw the eye
    glPushMatrix();
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
    glVertex2f(0.11f, 0.07f);
    glVertex2f(0.03f, 0.07f);
    glEnd();
    glPopMatrix();


    //draw the mouth
    glPushMatrix();
    glColor3f(1, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.05, -0.08);
    glVertex2f(0.1, -0.15);
    glVertex2f(0.15, -0.05);
    glEnd();
    glPopMatrix();


    //draw the bag
    glPushMatrix();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.65f);
    glVertex2f(-0.1f, -0.8f);
    glVertex2f(0.1f, -0.8f);
    glVertex2f(0.1f, -0.65f);
    glEnd();
    glPopMatrix();


    //draw the hand
    glPushMatrix();
    glLineWidth(3.0);
    glColor3f(0.1f, 0.1f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.04f, -0.4f);
    glVertex2f(-0.15f, -0.55f);
    glVertex2f(-0.04f, -0.7f);
    glEnd();
    glPopMatrix();


    //draw the hat
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(0.3, 0.1);
    glVertex2f(0.1, 0.23);
    glVertex2f(-0.1, 0.23);
    glVertex2f(-0.2, 0.1);
    glEnd();


}






//TODO: ^^^^^^^^^^^^^^^^^^^^^^^the bird^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

void draw_circleBird() {

    float x, y;
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 0.0f);
    x = 0; y = 0; radius = 0.03;

    twicePi = 2.0 * PI;

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void draw_circleBirdWhiteEye() {

    float x, y;
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    x = 0.02; y = 0.06; radius = 0.015;

    twicePi = 2.0 * PI;

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void draw_circleBirdBlackEye() {

    float x, y;
    int i;
    GLfloat radius;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    x = 0.019; y = 0.06; radius = 0.005;

    twicePi = 2.0 * PI;

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}


void draw_bird() {

    //draw the body
    draw_circleBird();

    //draw the head
    glPushMatrix();
    glTranslatef(0, 0.05, 0);
    glScalef(1.5, 1.5, 1);
    draw_circleBird();
    glPopMatrix();

    //draw the legs
    glColor3f(0, 0, 0);
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.01, -0.02);
    glVertex2f(-0.02, -0.01);
    glVertex2f(-0.03, -0.03);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.01, -0.02);
    glVertex2f(0.02, -0.01);
    glVertex2f(0.03, -0.03);
    glEnd();

    //draw the eyes

    draw_circleBirdWhiteEye();

    glPushMatrix();
    glTranslatef(-0.04, 0, 0);
    draw_circleBirdWhiteEye();
    glPopMatrix();

    draw_circleBirdBlackEye();

    glPushMatrix();
    glTranslatef(-0.038, 0, 0);
    draw_circleBirdBlackEye();
    glPopMatrix();

    //draw the mouth

    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.03);
    glVertex2f(0.02, 0.045);
    glVertex2f(0.0, 0.06);
    glVertex2f(-0.02, 0.045);
    glEnd();

    glPushMatrix();
    glLineWidth(1.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
    glVertex2f(0.02, 0.045);
    glVertex2f(-0.02, 0.045);
    glEnd();
    glPopMatrix();


}



//TODO: ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^the tree^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

void tree_circle(float x, float y, float z, float d) {
    glPushMatrix();
    glColor3f(0.0f, 1.0f, 0.0f);
    glTranslatef(x, y, z);
    glutSolidSphere(d, 30, 20);
    glPopMatrix();

}

void treeTrunk() {
    glBegin(GL_POLYGON);
    glColor3ub(120, 66, 18);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.6f, 0.0f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.6f, -0.4f);
    glEnd();
}

void tree() {

    tree_circle(-0.45, -0.1, 0.1, 0.1);
    tree_circle(-0.5, -0.1, 0.2, 0.1);
    tree_circle(-0.55, 0.0, 0.15, 0.1);
    tree_circle(-0.45, 0.0, 0.2, 0.1);
    tree_circle(-0.6, -0.1, 0.1, 0.1);
};


//TODO: ^^^^^^^^^^^^^^^^^^^^^^^^^^^the railways ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


void Railways_Longitudinal_line() {
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.8f, -0.71f);
    glVertex2f(-0.81f, -0.71f);
    glVertex2f(-0.81f, -0.78f);
    glVertex2f(-0.8f, -0.78f);
    glEnd();
}


void Railways_Longitudinal_lines() {

    Railways_Longitudinal_line();
    glPushMatrix();
    glTranslatef(-0.1, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.1, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.2, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.3, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.4, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.5, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.6, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.7, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.9, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.1, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.3, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.4, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.5, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.6, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.7, 0, 0);
    Railways_Longitudinal_line();
    glPopMatrix();

}


void Railways() {
    // background gray
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(-1.0f, -0.8f);
    glVertex2f(1.0f, -0.8f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(-1.0f, -0.7f);
    glEnd();
    // bottom line
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, -0.78f);
    glVertex2f(1.0f, -0.78f);
    glVertex2f(1.0f, -0.79f);
    glVertex2f(-1.0f, -0.79f);
    glEnd();
    // top line
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, -0.72f);
    glVertex2f(1.0f, -0.72f);
    glVertex2f(1.0f, -0.71f);
    glVertex2f(-1.0f, -0.71f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.8);
    glVertex2f(-0.8f, -0.71f);
    glVertex2f(-0.81f, -0.71f);
    glVertex2f(-0.81f, -0.78f);
    glVertex2f(-0.8f, -0.78f);
    glEnd();

    Railways_Longitudinal_lines();

}



//TODO: ^^^^^^^^^^^^^^^^^^^^^^^^^^the background and sky^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

void background() {

    // green background
    glBegin(GL_POLYGON);
    glColor3ub(107, 165, 50);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(1.0f, -0.4f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
    // brown background
    glBegin(GL_POLYGON);
    glColor3ub(154, 131, 36);
    glVertex2f(-1.0f, -0.8f);
    glVertex2f(1.0f, -0.8f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();

}

void sky() {
    glBegin(GL_POLYGON);
    glColor3ub(197, 246, 252);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(1.0f, -0.4f);
    glVertex2f(1.0f, 1.0f);
    glEnd();
}

void footbath_model() {

    glBegin(GL_POLYGON);
    glColor3ub(72, 124, 50);
    glVertex2f(0.3f, -0.41f);
    glVertex2f(0.5f, -0.41f);
    glVertex2f(0.5f, -0.45f);
    glVertex2f(0.3f, -0.45f);
    glEnd();


}

void footbath() {
    footbath_model();
    glPushMatrix();
    glTranslatef(0, -0.07, 0);
    footbath_model();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.14, 0);
    footbath_model();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.21, 0);
    footbath_model();
    glPopMatrix();

}

void sun() {


    glPushMatrix();
    glColor3ub(255, 251, 134);
    glTranslatef(-0.5, 0.55, 0);
    glutSolidSphere(0.25, 30, 20);
    glPopMatrix();

}


//the clouds

void cloud_circle(float x, float y, float z, float d) {
    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glTranslatef(x, y, z);
    glutSolidSphere(d, 30, 20);
    glPopMatrix();

}



void cloud() {


    cloud_circle(-0.4, 0.495, 0.1, 0.1);
    cloud_circle(-0.49, 0.49, 0.05, 0.1);
    cloud_circle(-0.3, 0.49, 0.05, 0.105);
    cloud_circle(-0.4, 0.6, 0.07, 0.105);



}



void clouds() {

    cloud();

    glPushMatrix();
    glTranslatef(0.5, 0.4, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.7, -0.1, 0);
    cloud();
    glPopMatrix();
}


// TODO: ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^moving objects^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


//TODO: key function to move the train
static void key(unsigned char keyPressed, int x, int y) //not used in train // key handling
{
    switch (keyPressed) {
        // train move to left
    case 'z':
        trainTransValueX += -0.03;
        //cout << "The new translate value is : " << trainTransValueX << endl;//print translate value
        break;
        // train move to right
    case 'c':
        trainTransValueX += 0.01;
        //cout << "The new translate value is : " << trainTransValueX << endl;//print translate value
        break;
        // train move to up
    case 's':
        trainTransValueY += 0.01;
        //cout << "The new translate value is : " << trainTransValueY << endl; //print translate value
        break;
        // train move to down
    case 'x':
        trainTransValueY += -0.01;
        //cout << "The new translate value is : " << trainTransValueY << endl; //print translate value
        break;
        // make the girl enters the train
    case 'e':
        girlScaleValueX -= 10;
        girlScaleValueY -= 10;
        break;
    case 27:
        exit(0);
        break;
    default:
        //fprintf(stderr, "\nKeyboard commands:\n\n"
            //"q, <esc> - Quit\n");
        break;
    }
}


//TODO: special function to move the girl
void special(int key, int x, int y)
{
    //handle special keys
    switch (key) {

        //move the girl to the left
    case GLUT_KEY_LEFT:
        if (girlScaleValueX == 1) {
            girlScaleValueX = -1;
            girlTransValueX -= 2 * (girlTransValueX);
        }
        else {
            girlTransValueX += 0.02;
        }

        break;
        //move the girl to the right
    case GLUT_KEY_RIGHT:
        if (girlScaleValueX == -1) {
            girlScaleValueX = 1;
            girlTransValueX -= 2 * (girlTransValueX);
            girlTransValueY -= 0.02;
        }
        else {
            girlTransValueX += 0.02;
            girlTransValueY -= 0.02;
        }
        //move the girl up
    case GLUT_KEY_UP:
        girlTransValueY += 0.02;

        break;
        //move the girl down
    case GLUT_KEY_DOWN:
        girlTransValueY -= 0.02;

        break;
    default:
        break;
    }
}


//TODO: function to move the clouds and rotate the sunlight
void idel() {
    if (xpos >= 0)
    {

        xpos += 0.00001;
    }
    if (sunLightRotationValue >= 0) {
        sunLightRotationValue += 0.01;
    }
    glutPostRedisplay();
}



void init() {

    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);


    //initalize the values to translate the girl
    girlTransValueX = -1.1;
    girlTransValueY = -0.5;
    girlScaleValueX = 1;
    girlScaleValueY = 1;


    //for the lighting
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);

}


static void play(void)
{
    glutPostRedisplay();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the color and depth buffer
    glLoadIdentity();


    //the background
    sky();
    glPushMatrix();
    glTranslatef(-0.5, 0.55, 0);
    glRotatef(sunLightRotationValue, 0, 0, 1);
    glTranslatef(0.5, -0.55, 0);
    sunlight();
    glPopMatrix();
    background();
    sun();
    footbath();
    Railways();


    //the clouds
    glPushMatrix();
    glTranslatef(-xpos, 0, 0);
    glScalef(0.7, 0.7, 0);
    clouds();
    glPopMatrix();

    //the building
    glPushMatrix();
    glTranslatef(0.4, 0.1, 0);
    draw_building();
    glPopMatrix();


    //first tree
    treeTrunk();

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
    glColorMaterial(GL_FRONT, GL_DIFFUSE);
    glColor3f(0.5, 0.5, 0.8);
    glEnable(GL_DEPTH_TEST);
    tree();
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);



    //second tree
    glPushMatrix();
    glScalef(0.8, 0.8, 0.8);
    glTranslatef(0.2, -0.2, -0.7);
    treeTrunk();
    glPopMatrix();

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
    glColorMaterial(GL_FRONT, GL_DIFFUSE);
    glColor3f(0.5, 0.5, 0.8);
    glEnable(GL_DEPTH_TEST);
    glPushMatrix();
    glScalef(0.8, 0.8, 0.8);
    glTranslatef(0.2, -0.2, -0.7);
    tree();
    glPopMatrix();
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);


    //the train with the bird
    glPushMatrix();
    glTranslatef(trainTransValueX, trainTransValueY, 0.0);
    glTranslatef(-0.4, 0.08, 0.0);

    glPushMatrix();
    glTranslatef(-1.5, -0.05, 0);
    glColor3f(0.0f, 0.0f, 1.0f);
    draw_polypon1();
    draw_polypon2();
    draw_polypon3();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-1.5, -0.32, 0);
    draw_bird();
    glPopMatrix();

    glPopMatrix();


    //the girl
    glPushMatrix();
    glScalef(girlScaleValueX, girlScaleValueY, 1);
    glTranslatef(girlTransValueX, girlTransValueY, 0);
    glTranslatef(0, -0.11, 0);
    glScalef(0.2, 0.2, 1);
    draw_girl();
    glPopMatrix();






    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // Specify the display Mode   RGB, RGBA or color // Index, single or double Buffer
    glutInitWindowSize(1000, 800); // Set the window's initial width& height
    glutInitWindowPosition(50, 50); // Position the window's initial top - left corner
    glutCreateWindow("TRAIN STATION"); // Create a window with the given title

    init();


    glutIdleFunc(play);
    glutDisplayFunc(display); // Register display callback handler for window re - paint
    glutKeyboardFunc(key);
    glutSpecialFunc(special);
    glutIdleFunc(idel);
    PlaySound(TEXT("trainSound.wav"), NULL, SND_ASYNC);//sound function

    glutMainLoop(); // Enter the infinitely event - processing loop

}
