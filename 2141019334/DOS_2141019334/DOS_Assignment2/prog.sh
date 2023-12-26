clear
echo "Enter the content of a.txt"
cat>a.txt
echo "Entet the content of b.txt"
cat>b.txt
echo "Enter the content of c.txt"
cat>c.txt
cat a.txt b.txt c.txt>result.txt
echo "The output of the result file is"
cat result.txt
echo "The sorted output is "
sort -n result.txt
