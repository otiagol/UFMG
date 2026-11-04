vpl_execution: build/Pessoa.o build/Funcionario.o build/Professor.o build/main.o
	g++ build/Pessoa.o build/Funcionario.o build/Professor.o build/main.o -o vpl_execution

build/Pessoa.o: src/entidades/Pessoa.cpp include/Pessoa.hpp
	g++ -Iinclude -c src/entidades/Pessoa.cpp -o build/Pessoa.o

build/Funcionario.o: src/entidades/Funcionario.cpp include/Funcionario.hpp
	g++ -Iinclude -c src/entidades/Funcionario.cpp -o build/Funcionario.o

build/Professor.o: src/entidades/Professor.cpp include/Professor.hpp
	g++ -Iinclude -c src/entidades/Professor.cpp -o build/Professor.o

build/main.o: src/main.cpp
	g++ -Iinclude -c src/main.cpp -o build/main.o