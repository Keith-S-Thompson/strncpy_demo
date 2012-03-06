This is a demonstration of the dangers of the standard C strncpy()
function when used improperly.  It's associated with my
[blog post](http://the-flat-trantor-society.blogspot.com/2012/03/no-strncpy-is-not-safer-strcpy.html)
at
[The Flat Trantor Society](http://the-flat-trantor-society.blogspot.com/).

The `strncpy_demo.log` file contains the output that I get when I run the
program on my system.  In fact, the program's behavior is undefined;
on other systems, or even the same one, it could easily print just
`hello`, or print some longer string, or crash, or, in principle,
re-format your hard drive.
