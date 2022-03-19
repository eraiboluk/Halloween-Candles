Arda has got in his house n number of candies for the x number of children visiting his house on Halloween. 
The children hang around as a group. It means  whenever Arda's bell rings, x number of children appears in 
front of his door. Arda himself doesn't like candies. So he wants to give all candies in his house to the 
children. Arda, who wants every child who comes to visit him to have an equal number of candies, will not give 
candy to any child if it is not possible to distribute the candies fairly.

-----------------------
Input Format
-----------------------

The first line contains x, the number of children.

The second line contains x space-separated integers, which represents the number of candies each child had 
before they came to visit Arda.

The third line contains integer n, which is the total number of candies Arda has.

-----------------------
Output Format
-----------------------

Print "1" if it's possible for Arda to hand out all his candies to the children so that every child has an equal amount of candy after visiting Arda. If it's not possible print "0".

-----------------------
Constraints,
-----------------------

1 <= x <= 10
1 <= n <= 100000

-----------------------
Sample Input 1
-----------------------

3
5 3 2
8

-----------------------
Sample Output 1
-----------------------

1

-----------------------
Explanation 1
-----------------------

When the first child gets 1, the second child 3 and the third child 4 candies, the number of candies the children have becomes equal and Arda gets rid of all of his candies.

-----------------------
Sample Input 2
-----------------------

3
10 20 15
14

-----------------------
Sample Output 2
-----------------------

0