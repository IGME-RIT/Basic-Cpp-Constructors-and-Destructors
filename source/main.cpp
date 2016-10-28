/*
Constructors and Destructors
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Include iostream for output during the program.
#include <iostream>
using namespace std;

// Main will include the character header, which allows it to call character functions.
#include "../header/gun.h"

int main() 
{
    {
        // Create a magazine object with 8/8 bullets using a constructor.
        Magazine mag = Magazine(8, 8);

        // Create a gun object with that magazine using the gun constructor.
        Gun gun = Gun(mag);

        cout << "Press enter to fire." << endl;
        
        while (gun.IsLoaded())
        {
            cin.get();  // Wait for user to press enter.
            gun.Fire(); // Fire gun.
        }

        cout << "First gun empty..." << endl;
        cin.get();  // Wait for user to press enter.

    }   // <-----At this point, the gun will no longer exist, and its destructor will be called.



    cin.get();  // Wait for user to press enter.



    {
        // Create a magazine with 1/2 bullets.
        Magazine mag = Magazine(1, 2);

        // Create a gun object loaded with that magazine.
        Gun gun = Gun(mag);

        // Loop forever
        while (true)
        {
            cin.get();  // Wait for user to press enter.

            if (gun.IsLoaded()) // If statements that only contain one line of code don't require braces.
                gun.Fire();     // Fire gun.
            else
                gun.Reload();   // Reload the gun.
        }
    }
    return 0;   // End Program.
}