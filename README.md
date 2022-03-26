skeemr
======

skeemr is a Scheme game framework written in C.

Concept
=======
The framework expects several Scheme functions and definitions in a designated 
Scheme file (defaults to `src/main.scm`) that have different purposes.

 + A function called `skeemr-init` that is called before Vulkan2D and the engine is
 initialized
 + A function called `skeemr-begin` that is called after Vulkan2D and the engine is
 initialized. This should return a `skeemr-world` type that the engine will load as
 the first level
 + A function called `skeemr-end` that is called when the game is about to quit

skeemr defines a lot of things in the Scheme environment that aren't visible to editors,
one of which as previously mentioned is the `skeemr-world` record. It has 4 fields:

 + `on-begin` function that is called when the world is first loaded
 + `on-update` function that is called each frame for game logic
 + `on-draw` function that is called each frame while the frame is being drawn
 + `on-destroy` function that is called when the game world is unloaded
 
