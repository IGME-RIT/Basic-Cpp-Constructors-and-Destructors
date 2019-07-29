Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Constructor and Destructor Tutorial!
Prerequesites: Classes and Structs

When making an instance of a class or a struct, you are making
what is called an "object". The object is the actual chunk of memory
that holds all of the variables that are grouped into the class or struct.
A "constructor" is a function that is called when you create an object.
A "destructor" is a function that is called when you destroy an object.

In the previous tutorial, we had no constructors or destructors, so nothing
would happen when "gun" or "magazine" were created or destroyed. In this
new tutorial, we will make it so the constructor can set the values of
the variables inside "gun" and "magazine".
