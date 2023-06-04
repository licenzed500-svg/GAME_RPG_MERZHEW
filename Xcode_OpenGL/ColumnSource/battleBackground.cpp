//
//  battleBackground.cpp
//  Xcode_OpenGL
//
//  Created by Максим Мержев on 19.05.2023.
//

#include "battleBackground.hpp"

#include "Column.hpp"
#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>


void renderLava()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(81, 6, 13);
    glVertex2f(2, 500);
    glVertex2f(1594, 500);
    glVertex2f(1594, 792);
    glVertex2f(2, 1594);
    glEnd();
    
    glPopMatrix();
}

void renderBackgroundScene()
{
    
    renderLava();
    glTranslatef(900, 90,0);
    drawColumn();
    glTranslatef(-1100,200,0);
    drawColumn();
    glTranslatef(550,-80,0);
    drawColumn();
}
