echo "The First number is : " $1
echo "The Second number is : " $2
sum=$(bc <<< "$1 + $2") 
sub=$(bc <<< "$1 - $2")
mul=$(bc <<< "$1 * $2") 
div=$(bc <<< "scale=7; $1 / $2") 
echo "The sum is " $sum
echo "The diff is "$sub
echo "The Product is "$mul
echo "The Div is "$div
