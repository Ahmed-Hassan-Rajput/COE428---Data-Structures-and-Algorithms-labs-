
Brief description: Everything worked

Suppose that towers(5,2,3) are invoked.

1. How will the first recursive call to towers() be invoked? Answer this question in the form: towers(x, y, z) where you give the actual values to the three parameters. 

- The first recursive call to towers() will be towers(4,2,1). x=4, y=2, z=1. x will be number of disks, y will be the move from, and z will be the move to.

2. How many recursive calls to towers() will be made before this first recursive call actually returns to the initial invocation?

- 31 recursive calls to towers() will be made. You can find out this value by counting the number of moves made.

3. Once towers(5, 2, 3) has invoked its first recursive call to towers() and this invocation has returned, what will be printed to stdout? (i.e. What actual move will be made by towers(5, 2, 3) ?) 

2 3
2 1
3 1
2 3
1 2
1 3
2 3
2 1
3 1
3 2
1 2
3 1
2 3
2 1
3 1
2 3
1 2
1 3
2 3
1 2
3 1
3 2
1 2
1 3
2 3
2 1
3 1
2 3
1 2
1 3
2 3

4. How will the second recursive call to towers() be invoked? Answer this question in the form: towers(x, y, z) where you give the actual values to the three parameters. 

- The second recursive call to towers() will be towers(3,2,3). x=3, y=2, z=3. x will be number of disks, y will be the move from, and z will be the move to.

5.Suppose that towers(8, 1, 2) is invoked. How many lines will be printed to stdout?

There would be 255 lines. We know this because the program states it takes 255 moves to finish running the code which would be the same number of lines in the code.