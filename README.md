# RSA-using-socket

<h2>
prerequisite
</h2>
<h4>
install g++ and gcc compiler
</h4>

	sudo apt-get install build-essential

<h4>
install the gmp library
</h4>

	sudo apt-get install libgmp3-dev


<h2>
compile
</h2>
	
	g++ server_alice.cpp -o server_alice -lgmp -lgmpxx
	g++ client_bob.cpp -o client_bob -lgmp -lgmpxx
<h2>
RUN 
</h2>
<h4>
run server first
</h4>

	./server_alice
	
in another terminal

	./client_bob


<h5>
RSA encryption done by using socket programming. in c++ language.
	
</h5>
