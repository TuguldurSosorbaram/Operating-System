
Small assignment for Operating system class

DESCRIPTION:

This assignment requires basic c language knowledge and knowing how to fork and communication between those forks through pipeline.

INSTRUCTION:

Compiling with Windows GCC compiler gives error since Windows does not fully support POSIX API's. So use Linux operating system or UNIX like environment. Simplest solution would be run Linux under virtual machine.

TASK:

Spring is here, and the bunnies are getting ready for the "Easter Bunny King". A competition between the bunny boys will be organised by "Chief Bunny", who will be the "Watering King" who collects the most red eggs from the bunny girls during the Easter watering. You must register for the competition. 

It's time for the Easter watering competition. "Chief bunny" (parent) divides the areas into two parts. He sends a competition supervisor (child) to the areas of Friend Tree, Horse, Snake Creek and Cabbage Garden and another supervisor (child) to the remaining areas of Sula, Mill Plot, Pasture. "Chief bunny" sends through a pipe to the competition supervisors the data of the bunny competitors in the area, who expect the number of red eggs collected from the bunnies living there (random number between 1-100). Once they have the data, the race supervisors send the data back to the "Chief Bunny", also via a pipeline, who announces (on screen) the result of the Easter Bunny King race. The winner will be the one who collects the most red eggs.

Create a C language program (complete the first problem to be submitted) that solves this problem, the solution must run either on opsys.inf.elte.hu or on a Linux system similar to it. There must be a menu item that can be selected to start the competition!