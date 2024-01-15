for i in {1..20}
do
	echo test case $i
	./g32 -DTESTNUM=$i -o toot *.cpp
	clang++ -DTESTNUM=$i -o toot *.cpp
done
