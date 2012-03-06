This is a demonstration of the dangers of the standard C strncpy()
function when used improperly.  It's associated with my blog post at
<a href="http://the-flat-trantor-society.blogspot.com/">The Flat Trantor Society</a>.

The `strncpy_demo.log` file contains the output that I get when I run the
program on my system.  In fact, the program's behavior is undefined;
on other systems, or even the same one, it could easily print just
`hello`, or print some longer string, or crash, or, in principle,
re-format your hard drive.
