//
//  Swordsman.cpp
//  Xcode_OpenGL
//
//  Created by Максим Мержев on 19.05.2023.
//

#include "Swordsman.hpp"

#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>
#include "FigurePos.h"


void drawSwordsman(Figure &swordsman)
{
    glPushMatrix();
    
    glTranslatef(swordsman.pos.x+850, swordsman.pos.y-20, swordsman.pos.z);
    
    glBegin(GL_TRIANGLES);
   
    glColor3ub(105, 105, 105);
    glVertex2f(277, 111);
    glVertex2f(631, 111);
    glVertex2f(454, 418);
        
    glColor3ub(0, 128, 128);
    glVertex2f(380, 141);
    glVertex2f(356, 196);
    glVertex2f(404, 196);
    
    glColor3ub(0, 128, 128);
    glVertex2f(525, 138);
    glVertex2f(502, 196);
    glVertex2f(548, 196);
       
    glEnd();
    
    glBegin(GL_LINES);
    
    glColor3ub(255, 228, 225);
    glVertex2f(352, 210);
    glVertex2f(259, 372);
    
    glColor3ub(255, 228, 225);
    glVertex2f(371, 228);
    glVertex2f(306, 333);
    
    glColor3ub(255, 228, 225);
    glVertex2f(306, 333);
    glVertex2f(463, 267);
    
    glColor3ub(255, 228, 225);
    glVertex2f(259, 372);
    glVertex2f(487, 302);
    
    glEnd();
    
    glBegin(GL_POLYGON);
    
    glColor3ub(139, 69, 19);
    glVertex2f(458, 281);
    glVertex2f(469, 297);
    glVertex2f(515, 267);
    glVertex2f(507, 256);
    
    glEnd();
    
    glBegin(GL_LINES);
    
    glColor3ub(139, 69, 19);
    glVertex2f(498, 248);
    glVertex2f(521, 276);
    
    glEnd();
    
    glBegin(GL_POLYGON);
    
    glColor3ub(112, 128, 144);
    glVertex2f(498, 248);
    glVertex2f(769, 147);
    glVertex2f(820, 149);
    glVertex2f(788, 175);
    glVertex2f(521, 276);
    
    glEnd();
    
    glBegin(GL_LINES);
    
    glColor3ub(0,0,0);
    glVertex2f(818, 150);
    glVertex2f(512, 262);
    
    glEnd();
    
    glBegin(GL_QUADS);
    
    glColor3ub(192, 192, 192);
    glVertex2f(220, 99);
    glVertex2f(220, 206);
    glVertex2f(275, 206);
    glVertex2f(275, 99);
    
    glColor3ub(192, 192, 192);
    glVertex2f(274, 100);
    glVertex2f(272, 52);
    glVertex2f(635, 52);
    glVertex2f(635, 100);
    
    glColor3ub(192, 192, 192);
    glVertex2f(635, 99);
    glVertex2f(686, 99);
    glVertex2f(686, 170);
    glVertex2f(635, 170);
    
    glEnd();
    
    glBegin(GL_LINES);
    
    glColor3ub(0,0,0);
    glVertex2f(381, 123);
    glVertex2f(415, 158);
    
    glColor3ub(0,0,0);
    glVertex2f(489, 158);
    glVertex2f(521, 121);
    
    glEnd();
    
    glPopMatrix();
}


