Rational Bezier surfaces
## How to run
Run Tingle.exe in the base directory.
## Controls
* Press 'r' or 'R' (Run) to toggle(off and on) running the animation.
* Press 'f' or 'F' to adjust the animation speed.
* Press 'b' or 'B' to switch the texture.
* Press arrow keys to adjust the view direction.
* Press HOME or END to closer to and farther away from the scene.
* Press 'w' or 'W' (wireframe) to toggle whether wireframe or fill mode.
* Press 'M' (mesh) to increase the mesh resolution.
* Press 'm' (mesh) to decrease the mesh resolution.
* Press 'P' key (Phong) to toggle using Phong shading and Gouraud shading.
* Press 'E' key (Emissive) to toggle rendering Emissive light.
* Press 'A' key (Ambient) to toggle rendering Ambient light.
* Press 'D' key (Diffuse) to toggle rendering Diffuse light.
* Press 'S' key (Specular) to toggle rendering Specular light.
* Press 'V' key (Viewer) to toggle using a local viewer.
* Press '1', '2', or '3' to toggle lights.
* Press ESCAPE to exit.
* Something terrifying will happen if the 'b' or 'B' key is pressed.
## Screenshots
<p align="center">
  <img width="802" height="646" src="https://github.com/a-alten/Bezier-Patch-Tingle/blob/master/screenshot/1.png">
  <img width="802" height="646" src="https://github.com/a-alten/Bezier-Patch-Tingle/blob/master/screenshot/2.png">
  <img width="802" height="646" src="https://github.com/a-alten/Bezier-Patch-Tingle/blob/master/screenshot/3.png">
</p>

## Notes
* The character Tingle from the Legend of Zelda series has been constructed from rational Bezier surfaces. It is animated so that it continuously rotates on the y axis.
* Tingle’s head is made up of four degree 3x3 rational Bezier surfaces. The nose is made up of one degree 2x2 rational Bezier surface. The beard is made up of one degree 2x2 rational Bezier surface. The ears are each made up of two degree 2x2 rational Bezier surfaces. The ears have circular cross sections.
* Initial designs of surfaces and textures were done first in Blender using NURBS surfaces and then manually transferred over to OpenGL code.