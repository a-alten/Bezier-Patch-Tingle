#pragma once

// 
// MyGeometries.h   ---  Header file for MyGeometries.cpp.
// 
//   Sets up and renders 
//     - the ground plane, and
//     - the surface of rotation
//   for the Math 155A project #4.
//
//

//
// Function Prototypes
//
void MySetupSurfaces();                // Called once, before rendering begins.
void SetupForTextures();               // Loads textures, sets Phong material
void MyRemeshGeometries();             // Called when mesh changes, must update resolutions.

void MyRenderGeometries();            // Called to render the two surfaces

void remeshTingle();
float getQ(int coord, float u, float v, float ctrlPts[], int d);
float getQ2(int coord, float u, float v, float ctrlPts[], int d);


